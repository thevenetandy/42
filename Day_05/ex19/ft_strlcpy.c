/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 18:17:11 by athevene          #+#    #+#             */
/*   Updated: 2018/07/16 15:40:02 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i++ <= n)
		dest[i - 1] = src[i - 1] != 0 ? src[i - 1] : '\0';
	dest[i] = '\0';
	return (dest);
}
