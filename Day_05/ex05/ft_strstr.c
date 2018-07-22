/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 23:35:17 by athevene          #+#    #+#             */
/*   Updated: 2018/07/11 00:03:34 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*tmp;

	if (!*to_find)
		return (str);
	tmp = to_find;
	while (*str && *tmp)
		if (*str++ != *tmp++)
		{
			if (to_find != tmp - 1)
				str -= (tmp - to_find - 1);
			tmp = to_find;
		}
	return (*tmp ? 0 : str - (tmp - to_find));
}
