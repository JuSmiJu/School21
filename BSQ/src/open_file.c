/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:26:48 by mjohnath          #+#    #+#             */
/*   Updated: 2021/02/10 19:26:51 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	error1(void)
{
	ft_strerror();
	write(2, "\n", 1);
}

void	openfile(char *argv)
{
	char	empty;
	char	obstacle;
	char	full;
	int		f;

	if ((f = open(argv, O_RDONLY)) == -1)
	{
		error1();
		return ;
	}
	g_size_line = one_line(f, &empty, &obstacle, &full);
	g_element[0] = empty + '0';
	g_element[1] = obstacle + '0';
	g_element[2] = full + '0';
	g_size_clo = next_line(f);
	close(f);
	f = open(argv, O_RDONLY);
	if (valid(f) == 1)
		return ;
	close(f);
	f = open(argv, O_RDONLY);
	g_mas = (replace(f, empty));
	print_arr(logic(g_mas), g_element);
	write(1, "\n", 1);
	close(f);
}

void	openterminalcreate(void)
{
	int		new_file;
	char	empty;
	char	obstacle;
	char	full;
	int		f;

	new_file = 0;
	createfile(new_file);
	new_file = open("temp.txt", O_RDONLY);
	g_size_line = one_line(new_file, &empty, &obstacle, &full);
	g_element[0] = empty + '0';
	g_element[1] = obstacle + '0';
	g_element[2] = full + '0';
	write(1, "\n", 1);
	g_size_clo = next_line(new_file);
	close(new_file);
	f = open("temp.txt", O_RDONLY);
	if (valid(f) == 1)
		return ;
	close(f);
	new_file = open("temp.txt", O_RDONLY);
	g_mas = (replace(new_file, empty));
	print_arr(logic(g_mas), g_element);
	close(new_file);
}
