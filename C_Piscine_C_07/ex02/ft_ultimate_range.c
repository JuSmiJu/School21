/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 20:21:09 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/29 21:39:24 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *mas;
	int i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if ((mas = malloc((max - min) * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	while (min < max)
	{
		mas[i] = min;
		min++;
		i++;
	}
	*range = mas;
	return (i);
}
