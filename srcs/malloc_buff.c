/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_buff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:50:03 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/27 19:52:29 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	malloc_buff(char **buff)
{
	*buff = malloc((BUFF_SIZE + 1) * sizeof(char));
	if (!(*buff))
		return (MALLOC_ERROR);
	return (SUCCESS);
}
