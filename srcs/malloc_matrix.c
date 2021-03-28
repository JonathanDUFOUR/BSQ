/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 03:35:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 03:52:59 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	malloc_matrix(int ***matrix, int dim[2])
{
	int	i;
	int	j;
	int	**p;

	*matrix = malloc(dim[HEIGHT] * sizeof(int *));
	if (!(*matrix))
		return (MALLOC_ERROR);
	p = *matrix;
	i = -1;
	while (++i < dim[HEIGHT])
	{
		*p = malloc(dim[WIDTH] * sizeof(int));
		if (!p)
		{
			j = -1;
			while (++j < i)
				free(*matrix++);
			return (MALLOC_ERROR);
		}
		++p;
	}
	return (SUCCESS);
}
