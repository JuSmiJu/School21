/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:39:18 by mjohnath          #+#    #+#             */
/*   Updated: 2021/02/01 23:33:47 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 4096

int main (int args, char *argv[])
{
	int		i;
	int		z;
	char	arr[BUFSIZE + 1];

	if (args < 2)
		write(2, "File name missing.", 18);
	else if (args > 2)
		write(2, "Too many arguments.", 19);
	else 
	{
		i = open(argv[1], O_RDONLY);
		if (i == -1)
			write(2, "Cannot read file.", 17);
		else 
		{
			while ((z = read(i, arr, BUFSIZE)))
				write(1, arr, z);	
		}
	}
}
