/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:31:43 by mjohnath          #+#    #+#             */
/*   Updated: 2021/02/10 19:31:59 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	g_element = (char *)malloc(sizeof(char) * 3);
	if (argc == 1)
	{
		openterminalcreate();
	}
	else
	{
		while (i < argc)
		{
			openfile(argv[i]);
			i++;
		}
	}
	return (0);
}
