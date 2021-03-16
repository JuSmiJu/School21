/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 20:43:06 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/26 14:07:15 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	srav(unsigned int nb)
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
}

void	ft_putnbr(int nb)
{
	unsigned int nb1;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb1 = -nb;
		srav(nb1);
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
		srav((unsigned int)nb);
}
