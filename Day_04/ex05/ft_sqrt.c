/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:11:43 by athevene          #+#    #+#             */
/*   Updated: 2018/07/07 16:25:46 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float	curr;
	int		tmp;
	float	last;

	if (nb <= 0 || nb == 3)
		return (0);
	curr = nb / 2;
	last = nb;
	tmp = curr;
	while (last - curr > 0.00001)
	{
		last = curr;
		curr = 0.5 * ((float)last + (float)nb / (float)last);
	}
	tmp = curr;
	if (tmp == (float)curr)
		return (curr);
	else
		return (0);
}
