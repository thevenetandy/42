/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 05:53:45 by athevene          #+#    #+#             */
/*   Updated: 2018/07/20 06:03:53 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range_table;

	if (min >= max)
		return (NULL);
	range_table = malloc(sizeof(range_table) * (max - min));
	while (min < max)
	{
		*range_table = min++;
		range_table++;
	}
	return ((range_table - (max - min)));
}
