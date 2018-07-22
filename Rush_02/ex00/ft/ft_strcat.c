/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 21:11:15 by athevene          #+#    #+#             */
/*   Updated: 2018/07/21 21:24:01 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle_2.h"

char	*ft_strcat(char *dest, char *src)
{
	char	*new_string;
	int		new_string_size;
	int		i;

	i = 0;
	new_string_size = ft_strlen(dest) + ft_strlen(src);
	new_string = malloc(sizeof(char) * (new_string_size + 1));
	while (i < new_string_size)
	{
		new_string[i] = *dest && *src ? *dest++ : *src++;
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
