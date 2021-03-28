/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:49:21 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/27 20:00:47 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strdup(char const *s)
{
	char	*output;
	char	*p;

	if (!s)
		return (NULL);
	output = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!output)
		return (NULL);
	p = output;
	while (*s)
		*p++ = *s++;
	*p = 0;
	return (output);
}
