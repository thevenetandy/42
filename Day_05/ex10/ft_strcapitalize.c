/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 05:05:15 by athevene          #+#    #+#             */
/*   Updated: 2018/07/11 05:43:13 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = str[i] >= 65 && str[i] <= 90 ? str[i] += 32 : str[i];
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	str = ft_strlowcase(str);
	if (str[0] >= 'a' && str[i] <= 'z')
		str[0] -= 32;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
						str[i] -= 32;
		i++;
	}
	return (str);
}
