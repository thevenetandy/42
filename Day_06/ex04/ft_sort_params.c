/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:04:21 by athevene          #+#    #+#             */
/*   Updated: 2018/07/12 22:45:24 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 - *s2);
	while (*s1++ == *s2++ && !(*s1 == '\0' && *s2 == '\0'))
		;
	return (*(s1 - 1) - *(s2 - 1));
}

void	sort_table(int size, char *tab[])
{
}

int		main(int argc, char **argv)
{
	int		i[2];
	char	*argv_sorted[argc];
	char	*argv_tmp;

	i[1] = 0;
	i[0] = 0;
	while (i[0]++ <= argc)
		argv_sorted[i[0] - 1] = argv[i[0]];
	while (i[1]++ < argc)
	{
		i[0] = 0;
		while (i[0] < argc - 2)
		{
			if (ft_strcmp(argv_sorted[i[0] - 1], argv_sorted[i[0]]) > 0)
			{
				argv_tmp = argv_sorted[i[0] - 1];
				argv_sorted[i[0] - 1] = argv_sorted[i[0]];
				argv_sorted[i[0]] = argv_tmp;
				i[1] = 0;
			}
			i[0]++;
		}
	}
	i[1] = 0;
	while (i[1]++ < argc - 1)
	{
		ft_putstr(argv_sorted[i[1] - 1]);
		ft_putchar('\n');
		i[0] = 0;
	}
}
