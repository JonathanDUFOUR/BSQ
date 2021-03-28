/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_msg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 17:49:44 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 03:03:42 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	err_msg(int err_code)
{
	if (err_code == MALLOC_ERROR)
		ft_putendl("\e[31mError: malloc() failed\e[0m");
	else if (err_code == OPEN_ERROR)
		ft_putendl("\e[31mError: open() failed\e[0m");
	else if (err_code == READ_ERROR)
		ft_putendl("\e[31mError: read() failed\e[0m");
	else if (err_code == STRJOIN_ERROR)
		ft_putendl("\e[31mError: strjoin() failed\e[0m");
	else if (err_code == WRONG_META_CHARS_ERROR)
		ft_putendl("\e[31mError: wrong meta-characters\e[0m");
	else if (err_code == WRONG_MAP_CHARS_ERROR)
		ft_putendl("\e[31mError: wrong map characters\e[0m");
	else if (err_code == DIM_ERROR)
		ft_putendl("\e[31mError: wrong dimensions\e[0m");
	else if (err_code == ERROR)
		ft_putendl("\e[31mError\e[0m");
}
