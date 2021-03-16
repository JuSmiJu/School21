/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 20:06:47 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/21 20:32:36 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int n;
	int t;
	int i;
	int j;

	n = size;
	i = 0;
	j = 0;
	while (i < n - 1)
	{
		while (j < n - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				t = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = t;
			}
			j++;
		}
		i++;
		j = 0;
	}
}