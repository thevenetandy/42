/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:41:48 by athevene          #+#    #+#             */
/*   Updated: 2018/07/07 15:14:25 by athevene         ###   ########.fr       */
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

void	ft_putstrln(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}

void	sastantua_part_line(int reverse, int len)
{
	int	curr_len;
	int i;

	curr_len = -1;
	//len /= 2;
	i = -1;
	while (++curr_len <= len)
	{
		if (reverse == 0)
		{
			if (curr_len == 0)
				ft_putchar('/');
			if (curr_len > 0)
				while (++i <= curr_len)
					ft_putchar('*');
		}
		if (reverse == 1)
		{
			if (curr_len + 1 == len)
				ft_putchar('\\');
			if (curr_len + 1 < len)
				while (++i <= curr_len)
					ft_putchar('*');
		}
		i = -1;
	}
}

void	sastantua(int size)
{
	int	twr_sze = 3;
	int i = 0;
	int j = -1;
	while (i++ < size)
	{
		while (j++ < twr_sze)
		{
			sastantua_part_line(0, j);
			ft_putstr("|");
			sastantua_part_line(1, j);
			ft_putchar('\n');
		}
		ft_putchar('\n');
		j = 0;
		twr_sze++;
	}
}

int	main(int argc, char **argv)
{
	sastantua(*argv[1] - '0');
}
