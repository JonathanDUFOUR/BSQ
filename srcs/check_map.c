/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 01:52:52 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 03:56:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_map(char const *content, int dim[2], char meta_chars[3])
{
	int	i;
	int	j;

	while (*content != '\n')
		++content;
	dim[WIDTH] = 0;
	i = 0;
	while (*content)
	{
		j = 0;
		while (*(++content) && *content != '\n')
		{
			if (!is_meta_char(*content, meta_chars))
				return (WRONG_MAP_CHARS_ERROR);
			++j;
		}
		if (!dim[WIDTH])
			dim[WIDTH] = j;
		else if (j && j != dim[WIDTH])
			return (DIM_ERROR);
		++i;
	}
	if ((i - 1) != dim[HEIGHT])
		return (DIM_ERROR);
	return (SUCCESS);
}
