/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:47:10 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/26 17:48:57 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		i = nb * ft_recursive_factorial(nb - 1);
	}
	return (i);
}
