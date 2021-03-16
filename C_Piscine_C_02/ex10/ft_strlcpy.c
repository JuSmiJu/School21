/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 19:19:01 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/23 21:19:01 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			srav_if(char *dest, char *src, int n, int i)
{
	int siz;
	int j;

	siz = n - 1;
	j = 0;
	if (i >= siz)
	{
		while (j < siz)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	else
	{
		while (j < i)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
}

void			srav(char *dest, char *src, int n, int i)
{
	if (n != 0)
	{
		srav_if(dest, src, n, i);
	}
	else
		dest[0] = '\0';
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	srav(dest, src, n, i);
	return (i);
}
