/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:59:42 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/24 17:38:52 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (i < 256)
	{
		if (s1[i] > s2[i])
			return ((int)s1[i] - s2[i]);
		else if (s2[i] > s1[i])
			return ((int)s1[i] - s2[i]);
		else if (s1[i] == '\0')
			return (0 - (int)s2[i]);
		else if (s2[i] == '\0')
			return ((int)s1[i]);
		i++;
	}
	return (0);
}
