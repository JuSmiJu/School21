/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 17:48:17 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/30 23:34:52 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int						str_len(char *av)
{
	int i;

	i = 0;
	while (av[i] != '\0')
		i++;
	return (i);
}

char					*str_copy(char *av, int size)
{
	int		i;
	char	*copy;

	copy = (char *)malloc(size * sizeof(char) + 1);

	i = 0;
	if (copy == NULL)
		return (0);
	while (av[i] != '\0')
	{
		copy[i] = av[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*rez;

	if (!(rez = malloc(ac * sizeof(struct s_stock_str) + 1)))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		rez[i].size = str_len(av[i]);
		rez[i].str = av[i];
		rez[i].copy = str_copy(av[i], str_len(av[i]));
		i++;
	}
	rez[i] = (struct s_stock_str){0, 0, 0};
	return (rez);
}
