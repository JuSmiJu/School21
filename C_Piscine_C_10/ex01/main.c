/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjohnath <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 19:39:18 by mjohnath          #+#    #+#             */
/*   Updated: 2021/02/02 00:17:08 by mjohnath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <stdarg.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFSIZE 4096

int main (int args, char *argv[])
{
	int		i;
	int		j;
	int		z;
	char	arr[BUFSIZE + 1];
	
	j = 1;
	while (j < args)
	{
		if (args < 2)
			write(2, "File name missing.", 18);
		else 
		{
			i = open(argv[j], O_RDONLY);
			if (i == -1)
				write(2, "Cannot read file.", 17);
			else 
			{
				while ((z = read(i, arr, BUFSIZE)))
					write(1, arr, z);	
			}
		}
		j++;
	}
}
