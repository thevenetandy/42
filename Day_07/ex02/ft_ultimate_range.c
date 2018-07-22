/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 06:01:25 by athevene          #+#    #+#             */
/*   Updated: 2018/07/20 06:05:59 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	i = 0;
	if (min >= max)
		range = NULL;
	else
		range = malloc(sizeof(range) * (max - min));
	while (min < max)
		*range[i++] = min++;
	return (range == NULL ? 0 : max - min);
}
