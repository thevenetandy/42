/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 18:01:36 by athevene          #+#    #+#             */
/*   Updated: 2018/07/16 15:39:14 by athevene         ###   ########.fr       */
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

char	*ft_strlcat(char *dest, char *src, int n)
{
	int i;
	int dstlen;

	i = 0;
	dstlen = ft_strlen(dest);
	while (src[i] && i < n)
	{
		dest[i] = i < dstlen ? dest[i] : src[i - dstlen - 1];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
