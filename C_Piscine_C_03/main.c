#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);

int main()
{
	char a[] = "1234";
	char b[] = "124";
	int n = 3;
	ft_strcmp(a, b);
	if (strcmp(a,b) == ft_strcmp(a, b))
		printf("ex00 = True\n");
	if (strncmp(a, b, n) ==	ft_strncmp(a, b, n))
		printf("ex01 = True\n");
	if (ft_strcat(a, b) == strcat(a, b))
		printf("ex02 = True\n");
	if (ft_strncat(a, b, n) == strncat(a, b, n))
		printf("ex03 = True\n");
//	if (ft_strstr(a, b) == strstr(a, b))
//		printf("ex04 = True");
}


