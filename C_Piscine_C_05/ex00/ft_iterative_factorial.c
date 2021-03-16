/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:48:57 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/26 17:32:53 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int rez;

	rez = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			rez = rez * nb;
			nb = nb - 1;
		}
	}
	return (rez);
}
