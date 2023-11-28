/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 11:05:49 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/28 14:21:10 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

int ft_checktype(va_list args, const char type)
{
	if (type == 'c')
		return(ft_printchar(va_arg(args, int)));
	else if (type == 's')
		return(ft_printstr(va_arg(args, char *)));
	// else if (type == 'p')
	// 	//TO DO
	// else if (type == 'd')
	// 	//TO DO
	// else if (type == 'i')
	// 	//TO DO
	// else if (type == 'u')
	// 	//TO DO
	// else if (type == 'x')
	// 	//TO DO
	// else if (type == 'X')
	// 	//TO DO
	// else if (type == '%')
		return(ft_printchar('%'));
}

int ft_printf(const char *str, ...)
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

int main(int argc, char **argv)
{
	(void)argc;
	ft_printf("test %% %s ici%% test %c", "test", 'c');
	printf("%i", ft_printf("test %% %s test %c", "test", 'c'));
}