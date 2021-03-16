/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:06:33 by mjohnath          #+#    #+#             */
/*   Updated: 2021/02/10 20:37:25 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_line(int f)
{
	char	*baf;
	int		i;
	int		j;

	i = 0;
	baf = (char *)malloc(sizeof(char) * (g_size_clo + 1));
	while (read(f, baf, 1) && *baf != '\n')
		continue;
	while ((read(f, baf, g_size_clo + 1)) && *baf != '\0')
	{
		j = 0;
		while ((baf[j] != '\n') && ((baf[j] == g_element[0])
					|| (baf[j] == g_element[1])))
			j++;
		if (g_size_clo != j)
			return (0);
		i++;
	}
	if (g_size_line == i)
		return (1);
	return (0);
	free(baf);
}

int		ft_setok(void)
{
	if ((g_size_line < 1) || (g_element[2] < 0 || g_element[2] > 126) ||
			(g_element[1] < 0 || g_element[1] > 126) ||
			(g_element[0] < 0 || g_element[0] > 126) ||
			(g_element[1] == g_element[0]) || (g_element[2] == g_element[0]
			|| g_element[2] == g_element[1]))
		return (0);
	return (1);
}

int		valid(int f)
{
	if (ft_line(f) == 0 || ft_setok() == 0)
	{
		ft_strerror();
		return (1);
	}
	return (0);
}
