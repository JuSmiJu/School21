/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 18:44:53 by mjohnath          #+#    #+#             */
/*   Updated: 2021/02/10 22:56:24 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		min(int a, int b, int c)
{
	if ((a <= b) && (a <= c))
		return (a);
	else if ((b <= a) && (b <= c))
		return (b);
	else if ((c <= a) && (c <= a))
		return (c);
	return (0);
}

int		*max_arr(int **arr, int i, int j, int *max_elem)
{
	if ((arr[i][j] > 0))
		arr[i][j] = (min(arr[i - 1][j - 1], arr[i - 1][j], arr[i][j - 1]) + 1);
	if (arr[i][j] > max_elem[2])
	{
		max_elem[2] = arr[i][j];
		max_elem[0] = i - 1;
		max_elem[1] = j - 1;
	}
	return (max_elem);
}

void	zamena(int **arr, int *max_elem)
{
	int i;
	int j;

	i = max_elem[0];
	while (i > (max_elem[0] - max_elem[2]))
	{
		j = max_elem[1];
		while (j > (max_elem[1] - max_elem[2]))
		{
			arr[i + 1][j + 1] = -1;
			j--;
		}
		i--;
	}
}

int		**line(int **arr)
{
	int j;

	j = 0;
	while (j < g_size_clo)
	{
		if (arr[0][j] == 1)
		{
			arr[0][j] = -1;
			return (arr);
		}
		j++;
	}
	return (arr);
}

int		**logic(int **arr)
{
	int i;
	int j;
	int *max_elem;

	i = 0;
	max_elem = (int *)malloc(sizeof(int) * 3);
	max_elem[0] = 0;
	max_elem[1] = 0;
	max_elem[2] = 0;
	if (g_size_line == 1)
	{
		return (line(arr));
	}
	while (i < g_size_line)
	{
		j = 0;
		while (j < g_size_clo)
		{
			max_elem = max_arr(arr, i + 1, j + 1, max_elem);
			j++;
		}
		i++;
	}
	zamena(arr, max_elem);
	return (arr);
}
