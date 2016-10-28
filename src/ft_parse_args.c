/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 03:59:47 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 03:59:54 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libftprintf.h"

void	parse_length(t_fmt **args, char **fmt)
{
	if (**fmt == 'h' && *(*fmt + 1) == 'h')
	{
	  (*args)->length = 1;
	  (*fmt) +=  2;
	  return ;
	}
	else if (**fmt == 'l' && *(*fmt + 1) == 'l')
	{
		(*args)->length = 4;
		(*fmt) +=  2;
		return ;
	}
	else if (**fmt == 'h' || **fmt == 'l' || **fmt == 'j' || **fmt == 'z')
	{
		if (**fmt == 'h')
			(*args)->length = 2;
		if (**fmt == 'l')
			(*args)->length = 3;
		if (**fmt == 'j')
			(*args)->length = 5;
		else
			(*args)->length = 6;
		(*fmt)++;
	}
}

void	parse_num(t_fmt **args, char **fmt, int is_width)
{
	 int nbr;

	 nbr = 0;
	 if (!is_width)
		 (*fmt)++;
	 if (**fmt == '0')
	 {
		 (*args)->prepend_zeros = 1;
		 (*fmt)++;
	 }
	 while (ft_isdigit(**fmt))
	 {
		nbr *= 10;
	   	nbr	+=  (**fmt - '0');
		(*fmt)++;
	 }
	 if (is_width)
	 	(*args)->width = nbr;
	 else
		(*args)->min_width = nbr;
}

void parse_flags(t_fmt **args, char **fmt)
{
	while (**fmt == '#' || **fmt == '0' || **fmt == '-' || **fmt == '+' ||
			**fmt == ' ')
	{
		if (**fmt == '#')
			(*args)->hash = 1;
		else if (**fmt == '-')
			(*args)->left_just = 1;
		else if (**fmt == '+')
			(*args)->pos_val = 1;
		else if (**fmt == ' ' )
			(*args)->prepend_sp = 1;
		else if (**fmt == '0')
			(*args)->prepend_zeros = 1;
		(*fmt)++;
	}
}

int	parse_conv_spec(va_list *ap, t_fmt **args, char **fmt)
{
	int size = 0;
	if (**fmt == 'S' || **fmt == 'O' || **fmt == 'D' || **fmt == 'U' ||
			**fmt == 'C')
	{
		(*args)->length = 3;
	}
	if (**fmt == 'O' || **fmt == 'X')
		(*args)->is_upper = 1;
	if (**fmt == 'x' || **fmt == 'X')
		size += ft_printf_hex(ap, args);
	else if (**fmt == 'd' || **fmt == 'i')
		size += ft_printf_int(ap, args);
	else if (**fmt == 'o' || **fmt == 'O')
		size += ft_printf_oct(ap, args);
	else if (**fmt == 'u' || **fmt == 'U')
		size += ft_printf_uint(ap, args);
	else if (**fmt == 's')
		size += ft_printf_string(ap, args);
	else if (**fmt == 'c')
		size += ft_printf_char(ap, args);
	else if (**fmt == 'p')
		size += ft_printf_ptr(ap, args);
	return (size);
}

int	parse_args(va_list *ap,t_fmt **args, char **fmt)
{
	int size;

	size = 0;
	(*fmt)++;
	if (**fmt == '%')
	{
		ft_putchar('%');
		return (1);
	}
	parse_flags(args, fmt);
	parse_num(args, fmt, 1);
	if(**fmt  == '.')
		parse_num(args, fmt, 0);
	parse_length(args, fmt);
	size = parse_conv_spec(ap, args, fmt);
	return (size);
}