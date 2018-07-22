char	**ft_split_whitespaces(*str);

int		main(int argc, char **argv)
{
	char **as = ft_split_whitespaces(argv[1]);
	int i, j;

	i = 0;
	while (as[i])
	{
		j = 0;
		printf("%i: ", i);
		while (as[i][j])
		{
			printf("%c", as[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
