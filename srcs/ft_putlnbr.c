/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:33:18 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/27 22:18:56 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putlnbr(long n)
{
	unsigned long	abs;
	char			d;

	abs = n;
	if (n < 0)
	{
		write(STDOUT, "-", 1);
		abs = -n;
	}
	if (abs > 9)
		ft_putlnbr(abs / 10);
	d = abs % 10 + '0';
	ft_putchar(d);
}
