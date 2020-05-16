int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (1)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb || i >= 46340)
			return (0);
		i++;
	}
}
