/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_content.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:06:57 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/27 19:53:28 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_content(char const *file, char **content)
{
	char	*buff;
	char	*dent;
	int		fd;
	ssize_t	ret;

	if (malloc_buff(&buff) == MALLOC_ERROR)
		return (MALLOC_ERROR);
	fd = get_fd(file);
	if (fd == -1)
		return (OPEN_ERROR);
	ret = read(fd, buff, BUFF_SIZE);
	while (ret > 0)
	{
		buff[ret] = 0;
		dent = *content;
		*content = ft_strjoin(*content, buff);
		free(dent);
		if (!(*content))
			return (STRJOIN_ERROR);
		ret = read(fd, buff, BUFF_SIZE);
	}
	free(buff);
	if (ret == -1)
		return (READ_ERROR);
	return (SUCCESS);
}
