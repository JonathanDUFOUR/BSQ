/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_res.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 05:02:49 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 05:46:23 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_res(int **matrix, t_he_chosen_cell neo,
				int dim[2], char meta_chars[3])
{
	int	i;
	int	j;

	i = -1;
	while (++i < dim[HEIGHT])
	{
		j = -1;
		while (++j < dim[WIDTH])
		{
			if (!(matrix[i][j]))
				ft_putchar(meta_chars[OBSTACLE]);
			else if (i <= neo.x && i > (neo.x - neo.dim)
				&& j <= neo.y && j > (neo.y - neo.dim))
				ft_putchar(meta_chars[FULL]);
			else
				ft_putchar(meta_chars[EMPTY]);
		}
		ft_putchar('\n');
	}
}
