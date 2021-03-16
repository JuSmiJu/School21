/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:02:45 by mjohnath          #+#    #+#             */
/*   Updated: 2021/01/27 13:12:31 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int i_x;
	int j_y;

	j_y = 1;
	while (j_y <= y)
	{
		i_x = 1;
		while (i_x <= x)
		{
			if ((i_x == 1 && j_y == 1) ||
					(i_x == x && j_y == y && y != 1 && x != 1))
				ft_putchar('/');
			else if ((i_x == x && j_y == 1) || (i_x == 1 && j_y == y))
				ft_putchar('\\');
			else if (i_x > 1 && j_y > 1 && i_x < x && j_y < y)
				ft_putchar(' ');
			else
				ft_putchar('*');
			if (i_x == x)
				ft_putchar('\n');
			i_x++;
		}
		j_y++;
	}
}
