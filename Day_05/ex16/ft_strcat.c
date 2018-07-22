/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 05:58:44 by athevene          #+#    #+#             */
/*   Updated: 2018/07/15 11:55:45 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int dstlen;

	i = 0;
	dstlen = ft_strlen(dest);
	while (src[i])
	{
		dest[dstlen + i] = src[i];
		i++;
	}
	dest[dstlen + i] = '\0';
	return (dest);
}
