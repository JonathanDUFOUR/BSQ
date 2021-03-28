/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 04:25:26 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 05:59:00 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_he_chosen_cell	transform_matrix(int **matrix, int dim[2])
{
	int					i;
	int					j;
	t_he_chosen_cell	cell;

	cell.dim = 0;
	i = -1;
	while (++i < dim[HEIGHT])
	{
		j = -1;
		while (++j < dim[WIDTH])
		{
			matrix[i][j] *= (min(matrix, i, j) + 1);
			if (matrix[i][j] > cell.dim)
			{
				cell.dim = matrix[i][j];
				cell.x = i;
				cell.y = j;
			}
		}
	}
	return (cell);
}
