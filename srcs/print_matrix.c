/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 04:10:12 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 04:53:33 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_matrix(int **matrix, int dim[2])
{
	int	i;
	int	j;

	i = -1;
	while (++i < dim[HEIGHT])
	{
		j = -1;
		while (++j < dim[WIDTH])
			ft_putnbr(matrix[i][j]);
		ft_putchar('\n');
	}
}
