/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:05:41 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/27 23:36:54 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int rez;

	rez = 1;
	if (power < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (power > 0)
		{
			rez = rez * nb;
			power = power - 1;
		}
	}
	return (rez);
}
