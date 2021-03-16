/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 14:55:23 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/20 15:02:08 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int a)
{
	char n;
	char p;

	n = 'N';
	p = 'P';
	if (a < 0)
	{
		write(1, &n, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}
