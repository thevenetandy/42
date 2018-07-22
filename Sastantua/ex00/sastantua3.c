/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 05:35:10 by athevene          #+#    #+#             */
/*   Updated: 2018/07/08 06:12:57 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*void sastantua_putlines(int nlines, int line, int spaces)
{
	int	lne_w;

	if (line == -1)
		return;
	sastantua_putlines(nlines, line - 1, spaces + 1);
	ft_putchar('0' + line % 10);
}*/

int	spaces(int ttl_lines, int size)
{
	int nspaces;

	nspaces = 0;
	while (--ttl_lines > 0)
		nspaces++;
	return (nspaces + 2 * (size - 2));
}

void sastantua(int size)
{
	int	ttl_lines;
	int nspaces;
	int	tmp_i;
	int	curr_line;

	curr_line = 0;
	tmp_i = 0;
	ttl_lines = 0;
	while (tmp_i < size)
	{
		ttl_lines += 3 + tmp_i;
		tmp_i++;
	}
	tmp_i = 0;
//	sastantua_putlines(ttl_lines, ttl_lines, 0);
	nspaces = spaces(ttl_lines, size);
	while (curr_line++ < ttl_lines)
	{
		while(tmp_i++ < nspaces)
			ft_putchar(' ');
		ft_putchar('/');
		ft_putchar('\n');
		nspaces--;
		tmp_i = 0;
	}
}

int	main(void)
{
	sastantua(3);
}
