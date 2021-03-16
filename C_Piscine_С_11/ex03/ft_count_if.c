int		ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			k++;
		i++;
	}
	return (k);
}