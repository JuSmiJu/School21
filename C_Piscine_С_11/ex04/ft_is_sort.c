int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	while (i < (length - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			i++;
		else 
			i = length;
	}
	if (i == (length - 1))
		return (1);
	i = 0;
	while(i < (length - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			i = length;
	}
	if (i == (length - 1))
		return (1);
	return(0);
}