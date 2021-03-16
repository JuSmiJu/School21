/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 18:35:51 by mjohnath          #+#    #+#             */
/*   Updated: 2021/02/10 18:36:03 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_strerror(void)
{
	write(2, "map error", 9);
	write(2, "\n", 1);
	return (-1);
}

int		one_lines(int *mas, int j)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while ((j - 4) >= 0)
	{
		i = i * 10;
		i = i + mas[k];
		j--;
		k++;
	}
	return (i);
}

int		**double_replace(int f, char *baf, int empty, int **new_mass)
{
	int		i;
	int		j;
	int		size_readed;

	i = 0;
	while (read(f, baf, 1) && *baf != '\n')
		continue;
	while ((size_readed = read(f, baf, g_size_clo + 1)) && i < g_size_line)
	{
		j = 0;
		while (baf[j] != '\n' && j < size_readed)
		{
			if (baf[j] == (empty + '0'))
				new_mass[i + 1][j + 1] = 1;
			else
				new_mass[i + 1][j + 1] = 0;
			j++;
		}
		i++;
	}
	return (new_mass);
}
