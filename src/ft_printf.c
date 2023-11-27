/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:05:49 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/27 13:27:57 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = -1;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			// call checking function
		}
		else
		{
			
		}
	}
	va_end(args);
}
