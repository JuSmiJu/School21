/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:19:24 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/27 23:35:33 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int rez;

	rez = 1;
	if (power < 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		if (power > 0)
		{
			rez = nb * ft_recursive_power(nb, power - 1);
		}
	}
	return (rez);
}
