#include <stdio.h>

int ft_strlen(char *str);
 void ft_putstr(char *str);
 void ft_putnbr(int nb);
 int ft_atoi(char *str);

 int main ()
{
	char a[] = "hello";
	char b[] = "he ll o";
	char c[] = " ---+--+1234ab567";
	char g[] = " ---+-- +1234ab567";
	if (ft_strlen(a) == 5 && ft_strlen(b)  == 7)
		printf("ex00 - True\n");
	printf("ex 01 -Check code!!!!\n");
	ft_putstr(b);
	printf("\n");
	ft_putstr(a);
	printf("\n");
	printf("hello\nhe ll o\n");
	printf("ex 01 -Check code!!!!\n");

	if ((ft_atoi(c) == (-1234)) && (ft_atoi(g) == 0))
		printf("ex 03 - True\n");
}	
