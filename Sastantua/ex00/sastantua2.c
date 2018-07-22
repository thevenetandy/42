/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:44:54 by athevene          #+#    #+#             */
/*   Updated: 2018/07/08 05:34:45 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void spaces(int a, int b, int c, int d, int e)
{
	
}

void	sastantua(int size)
{
	int w_len;
	int curr_block;
	int	curr_chr_pos;
	int l;
	int curr_l;
	
	curr_block = 0;
	curr_chr_pos = 0;
	w_len = 3;
	curr_l = 0;
	while (curr_block < size)
	{
		l = 2 + curr_block;
		w_len = 3 + curr_block;
		while (curr_l <= l)
		{
			while (curr_chr_pos < w_len)
			{
				spaces(w_len, size, curr_chr_pos, curr_block, curr_l)
				if (curr_chr_pos == 0)
					ft_putchar('/');
				if (curr_chr_pos == w_len - 1)
					ft_putchar('\\');
				if (curr_chr_pos > 0 && curr_chr_pos < w_len - 1)
					ft_putchar('*');
				curr_chr_pos++;
			}
			curr_l++;
			curr_chr_pos = 0;
			w_len += 2;
			ft_putchar('\n');
		}
		//ft_putchar('\n');
		curr_chr_pos = 0;
		curr_block += 1;
	}
}

int		main(void)
{
	sastantua(2);
	return (0);
}
