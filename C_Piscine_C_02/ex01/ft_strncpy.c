/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:09:02 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/24 13:54:52 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	zap(int i, int n, char *dest, char *src)
{
	int j;

	j = 0;
	if (i >= n)
	{
		while (j < n)
		{
			dest[j] = src[j];
			j++;
		}
	}
	else
	{
		while (j < i)
		{
			dest[j] = src[j];
			j++;
		}
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	zap(i, n, dest, src);
	return (dest);
}
