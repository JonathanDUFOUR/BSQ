/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_meta_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 03:07:14 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 03:09:49 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

bool	is_meta_char(char const c, char const meta_chars[3])
{
	return (c == meta_chars[EMPTY] || c == meta_chars[OBSTACLE]);
}
