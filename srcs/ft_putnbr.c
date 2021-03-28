/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:15:12 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/27 22:17:07 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putnbr(int n)
{
	unsigned int	abs;
	char			d;

	abs = n;
	if (n < 0)
	{
		write(STDOUT, "-", 1);
		abs = -n;
	}
	if (abs > 9)
		ft_putnbr(abs / 10);
	d = abs % 10 + '0';
	ft_putchar(d);
}
