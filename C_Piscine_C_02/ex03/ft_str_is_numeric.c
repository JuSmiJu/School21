/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:20:27 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/23 16:41:25 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
		{
			b++;
		}
		i++;
	}
	if ((str[0] == '\0') || (b == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
