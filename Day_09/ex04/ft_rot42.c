/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 22:01:31 by athevene          #+#    #+#             */
/*   Updated: 2018/07/12 22:20:34 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int	str_len;
	int	is_maj;

	str_len = 0;
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			is_maj = (*str >= 'A' && *str <= 'Z') ? 1 : 0;
			*str -= (*str >= 'A' && *str <= 'Z') ? 'A' : 'a';
			*str += 42;
			*str %= 26;
			*str += is_maj ? 'A' : 'a';
		}
		str++;
		str_len++;
	}
	return (str - str_len);
}
