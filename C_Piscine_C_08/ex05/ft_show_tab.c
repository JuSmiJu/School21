/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 21:12:57 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/30 23:03:43 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

int		size_struct(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size != 0)
		i++;
	return (i);
}

void	putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
	write(1, "/n", 1);
}

void	putnbr(int nb)
{
	unsigned int		a;
	int					i;
	size_t				b;
	char				m[10];

	b = 0;
	a = nb;
	while (a != 0)
	{
		b++;
		a = a / 10;
	}
	i = b - 1;
	while (i >= 0)
	{
		m[i] = (char)((nb % 10) + '0');
		nb = nb / 10;
		i--;
	}
	write(1, m, b);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;
	int size;

	i = 0;
	size = size_struct(par);
	while (i < size)
	{
		putstr(par[i].str);
		putnbr(par[i].size);
		putstr(par[i].copy);
		i++;
	}
}
