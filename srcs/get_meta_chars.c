/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_meta_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 20:04:34 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/27 23:44:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_meta_chars(char meta_chars[3], int dim[2], char const *content)
{
	dim[HEIGHT] = 0;
	while (ft_isdigit(*content))
	{
		dim[HEIGHT] *= 10;
		dim[HEIGHT] += *content - '0';
		++content;
	}
	meta_chars[EMPTY] = *content++;
	meta_chars[OBSTACLE] = *content++;
	meta_chars[FULL] = *content++;
	return (check_meta_chars(meta_chars, *content));
}
