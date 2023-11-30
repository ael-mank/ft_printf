/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mank <ael-mank@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:42:36 by ael-mank          #+#    #+#             */
/*   Updated: 2023/11/30 10:44:37 by ael-mank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libftprintf.h"

size_t ft_putnbr(int n)
{
	char *nbr;

	nbr = ft_itoa(n);
	return(ft_printstr(nbr));
}