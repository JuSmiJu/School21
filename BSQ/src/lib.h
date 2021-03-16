/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:16:03 by mjohnath          #+#    #+#             */
/*   Updated: 2021/02/10 19:55:14 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

int		**g_mas;
int		g_size_line;
int		g_size_clo;
char	*g_element;

int		**logic(int **arr);
void	print_arr(int **arr, char *element);
int		**replace(int f, int empty);
int		one_line(int f, char *empty, char *obstacle, char *full);
int		next_line(int f);
void	createfile(int z);
int		*max_arr(int **arr, int i, int j, int *max_elem);
void	zamena(int **arr, int *max_elem);
int		ft_strerror(void);
int		valid(int f);
void	openfile(char *argv);
void	openterminalcreate();
int		one_lines(int *mas, int j);
int		ft_line(int f);
int		**double_replace(int f, char *baf, int empty, int **new_mass);

#endif
