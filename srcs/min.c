/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 04:31:58 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 06:01:05 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	min(int **matrix, int i, int j)
{
	int	top;
	int	left;
	int	diag;

	if (!i || !j)
		return (0);
	top = matrix[i - 1][j];
	left = matrix[i][j - 1];
	diag = matrix[i - 1][j - 1];
	if (top <= left && top <= diag)
		return (top);
	else if (left <= top && left <= diag)
		return (left);
	else
		return (diag);
}
