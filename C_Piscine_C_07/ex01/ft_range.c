/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:40:49 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/29 21:41:43 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *mas;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	mas = malloc((max - min) * sizeof(long int));
	while (min < max)
	{
		mas[i] = min;
		min++;
		i++;
	}
	return (mas);
}
