/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 04:51:56 by athevene          #+#    #+#             */
/*   Updated: 2018/07/06 10:05:46 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int iterate_int;
	int i_tmp;

	iterate_int = 0;
	while (iterate_int < size - 1)
	{
		if (tab[iterate_int] > tab[iterate_int + 1])
		{
			i_tmp = tab[iterate_int];
			tab[iterate_int] = tab[iterate_int + 1];
			tab[iterate_int + 1] = i_tmp;
			iterate_int = 0;
		}
		else
			iterate_int++;
	}
}
