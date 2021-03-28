/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 03:45:52 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 03:49:26 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	multi_free(char *content, int **matrix, int dim[2])
{
	int	**dent;
	int	i;

	free(content);
	dent = matrix;
	i = -1;
	while (++i < dim[HEIGHT])
		free(*dent++);
	free(matrix);
}
