/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 23:26:49 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 04:52:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_matrix(int ***matrix,
				char const *content,
				int dim[2], char meta_chars[3])
{
	int	i;
	int	j;
	int	ret;

	ret = malloc_matrix(matrix, dim);
	if (ret != SUCCESS)
		return (ret);
	while (*content != '\n')
		++content;
	++content;
	i = -1;
	while (++i < dim[HEIGHT])
	{
		j = -1;
		while (++j < dim[WIDTH])
		{
			if (content[i * dim[WIDTH] + i + j] == meta_chars[EMPTY])
				(*matrix)[i][j] = 1;
			else
				(*matrix)[i][j] = 0;
		}
	}
	return (SUCCESS);
}
