/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 10:07:39 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/27 12:31:03 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		srav1(char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (base[0] == '\0' || base[1] == '\0')
		return (-1);
	else
	{
		while (base[i] != '\0')
		{
			while (base[i + j] != '\0')
			{
				if (base[i] == base[i + j] || base[i + j] == '-' ||
						base[i + j] == '+')
					return (-1);
				j++;
			}
			i++;
		}
	}
	return (i);
}

void	srav(unsigned int nbr1, char *base, int i)
{
	unsigned int		a;
	int					j;
	size_t				b;
	char				rez[999999];

	a = nbr1;
	b = 0;
	while (a != 0)
	{
		b++;
		a = a / i;
	}
	j = b - 1;
	while (j >= 0)
	{
		rez[j] = base[nbr1 % i];
		nbr1 = nbr1 / i;
		j--;
	}
	write(1, rez, b);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr1;
	int				i;

	i = srav1(base);
	if (i == -1)
		return ;
	else
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr1 = -nbr;
			srav(nbr1, base, i);
		}
		else if (nbr == 0)
			write(1, &base[0], 1);
		else
			srav((unsigned int)nbr, base, i);
	}
}

int main()
{
	ft_putnbr_base(1234, "0123456789ABCDEF");
}
