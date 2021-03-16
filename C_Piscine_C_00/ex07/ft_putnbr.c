/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 20:43:06 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/21 16:44:40 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int srav(int nb)
{
	unsigned int	nb1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb1 = -nb;
	}
	else 
		nb1 = nb;
	return (nb1);
}

void ft_putnbr(int nb)
{
	unsigned int	nb1;
	unsigned int	nb2;
	char			arr[15];
	size_t			b;
	int				i;

	nb1 = srav(nb);
	nb2 = nb1;
	b = 0;
	while (nb2 != 0)
	{
		b++;
		nb2 = nb2 / 10;
	}
	i = b - 1;
	while (i >= 0)
	{
		arr[i] = (nb1 % 10) + '0';
		nb1 = nb1 / 10;
		i--;
	}
	write(1, arr, b);
}
