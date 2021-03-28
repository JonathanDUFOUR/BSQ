/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_meta_chars.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 22:01:30 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 03:55:45 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_meta_chars(char meta_chars[3], char const c)
{
	if (c != '\n'
		|| meta_chars[EMPTY] == meta_chars[OBSTACLE]
		|| meta_chars[EMPTY] == meta_chars[FULL]
		|| meta_chars[OBSTACLE] == meta_chars[FULL]
		|| meta_chars[EMPTY] == '\n'
		|| meta_chars[OBSTACLE] == '\n'
		|| meta_chars[FULL] == '\n')
		return (WRONG_META_CHARS_ERROR);
	return (SUCCESS);
}
