/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:11:14 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:11:16 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf_ptr(va_list *ap, t_fmt **args)
{
	uintmax_t nbr;
	int	size;
	char *nstr;

	(*args)->length = 5;
	nbr = ft_get_uint_length(ap, args);
	nstr = ft_itoa_base(nbr, 16, (*args)->is_upper);
	nstr = ft_strjoin("Ox", nstr);
	size = ft_strlen(nstr);
	ft_putstr(nstr);
	return (size);
}