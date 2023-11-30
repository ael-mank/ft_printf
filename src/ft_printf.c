/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:05:49 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/30 08:25:02 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int	ft_checktype(va_list args, const char type)
{
	if (type == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (type == '%')
		return (ft_printchar('%'));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = -1;
	len = 0;
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			len += ft_checktype(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
	}
	va_end(args);
	return (len);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_printf("test %% %s ici%% test %c", "test", 'c');
}: