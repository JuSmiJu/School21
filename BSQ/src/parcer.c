/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:32:10 by mjohnath          #+#    #+#             */
/*   Updated: 2021/02/10 19:32:14 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	print_arr(int **arr, char *element)
{
	int i;
	int j;

	i = 0;
	while (i < g_size_line)
	{
		j = 0;
		while (j < g_size_clo)
		{
			if (arr[i + 1][j + 1] == -1)
				write(1, &element[2], 1);
			else if (arr[i + 1][j + 1] > -1 && arr[i + 1][j + 1] != 0)
				write(1, &element[0], 1);
			else
				write(1, &element[1], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		**replace(int f, int empty)
{
	int		**new_mass;
	char	*baf;
	int		i;

	i = 0;
	baf = (char *)malloc(sizeof(char) * (g_size_clo + 1));
	new_mass = (int **)malloc(sizeof(int *) * (g_size_line + 1));
	while (i < (g_size_line + 1))
	{
		new_mass[i] = (int *)malloc(sizeof(int) * (g_size_clo + 1));
		new_mass[i][0] = 0;
		i++;
	}
	i = 0;
	while (i < (g_size_clo + 1))
		new_mass[0][i++] = 0;
	new_mass = (double_replace(f, baf, empty, new_mass));
	free(baf);
	return (new_mass);
}

int		one_line(int f, char *empty, char *obstacle, char *full)
{
	char	*baf;
	int		*mas;
	int		i;
	int		j;

	j = 0;
	baf = (char *)malloc(sizeof(char));
	mas = (int *)malloc(sizeof(int) * 13);
	while (read(f, baf, 1) && *baf != '\n')
	{
		mas[j] = *baf - '0';
		j++;
	}
	*full = mas[j - 1];
	*obstacle = mas[j - 2];
	*empty = mas[j - 3];
	i = (one_lines(mas, j));
	free(baf);
	free(mas);
	return (i);
}

int		next_line(int f)
{
	char	*baf;
	int		i;

	i = 0;
	baf = (char *)malloc(sizeof(char));
	while (read(f, baf, 1) && *baf != '\n')
		i++;
	free(baf);
	return (i);
}

void	createfile(int z)
{
	char	*tmp;
	char	*baf;

	baf = (char *)malloc(sizeof(char));
	tmp = "temp.txt";
	z = open(tmp, O_CREAT | O_TRUNC | O_WRONLY, 0666);
	while (read(0, baf, 1))
		write(z, baf, 1);
	close(z);
}
