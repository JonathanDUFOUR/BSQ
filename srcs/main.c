/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:23:10 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/28 05:46:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	int	ret;

	if (ac == 1)
		bsq(NULL);
	else
	{
		while (*(++av))
		{
			ret = bsq(*av);
			if (ret != SUCCESS)
				err_msg(ret);
		}
	}
	return (SUCCESS);
}
