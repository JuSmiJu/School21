/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:48:33 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/29 23:13:28 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_st(int size, char *sep, char **strs)
{
	int i;
	int k;
	int j;
	int g;

	i = 1;
	g = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			k++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		g++;
		i++;
	}
	return (k + (g * size));
}

int		count_ft(char *sep, int k, char *rez)
{
	int j;

	j = 0;
	while (sep[j] != '\0')
	{
		rez[k] = sep[j];
		j++;
		k++;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*rez;

	rez = malloc(ft_st(size, sep, strs));
	i = 1;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			rez[k] = strs[i][j];
			j++;
			k++;
		}
		if (i != size - 1)
			k = count_ft(sep, k, rez);
		i++;
	}
	rez[k] = '\0';
	return (rez);
}
