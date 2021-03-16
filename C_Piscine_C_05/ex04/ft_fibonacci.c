/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:34:31 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/27 23:28:53 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int rez;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		rez = (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	return (rez);
}

int main()
{
	printf("%d", ft_fibonacci(7));
}
