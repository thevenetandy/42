/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 07:46:51 by athevene          #+#    #+#             */
/*   Updated: 2018/07/20 08:01:39 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*final_string;
	int		final_string_len;
	int		i;
	int		j;

	final_string_len = 0;
	i = -1;
	while (++i < argc)
		final_string_len += ft_strlen(argv[i]);
	final_string_len += (argc);
	final_string = malloc(sizeof(final_string) * final_string_len);
	i = -1;
	j = 0;
	while (++i < argc)
	{
		while (*argv[i])
		{
			final_string[j++] = *argv[i]++;
		}
		final_string[j++] = '\n';
	}
	final_string[j] = '\0';
	return (final_string);
}
