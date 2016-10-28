/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahunt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 04:15:13 by ahunt             #+#    #+#             */
/*   Updated: 2016/10/28 04:15:16 by ahunt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_printf_char(va_list *ap, t_fmt **args)
{
	unsigned char		ch;
	int			size;

	size = 1;
	ch = (unsigned char)va_arg(*ap, int);
	if ((*args)->left_just)
		ft_putchar(ch);
	while  ((*args)->width > size)
	{
		ft_putchar(' ');
		size++;
	}
	if (!(*args)->left_just)
		ft_putchar(ch);
	return (size);
}
