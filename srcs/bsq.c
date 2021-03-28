/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:39:45 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 06:24:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	bsq(char const *file)
{
	char				meta_chars[3];
	int					dim[2];
	char				*content;
	int					**matrix;
	int					ret;

	content = NULL;
	ret = get_content(file, &content);
	if (ret != SUCCESS)
		return (ret);
	ret = get_meta_chars(meta_chars, dim, content);
	if (ret != SUCCESS)
		return (ret);
	ret = check_map(content, dim, meta_chars);
	if (ret != SUCCESS)
		return (ret);
	ret = get_matrix(&matrix, content, dim, meta_chars);
	if (ret != SUCCESS)
		return (ret);
	print_res(matrix, transform_matrix(matrix, dim), dim, meta_chars);
	multi_free(content, matrix, dim);
	return (SUCCESS);
}
