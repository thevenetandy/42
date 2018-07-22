/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:48:21 by athevene          #+#    #+#             */
/*   Updated: 2018/07/12 18:08:50 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		h1;
	int		h2;
	char	*d1;
	char	*d2;
	char	*str;

	hour %= 24;
	d1 = hour >= 12 ? "P.M." : "A.M.";
	d2 = hour + 1 >= 12 ? "P.M." : "A.M.";
	h1 = hour > 12 ? hour - 12 : hour;
	h1 = h1 == 0 ? 12 : h1;
	h2 = h1 + 1 > 12 ? h1 + 1 - 12 : h1 + 1;
	str = "THE FOLLOWING TAKES PLACE BETWEEN %i.00 %s AND %i.00 %s\n";
	printf(str, h1, d1, h2, d2);
}
