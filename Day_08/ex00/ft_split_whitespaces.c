/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 22:39:46 by athevene          #+#    #+#             */
/*   Updated: 2018/07/20 00:41:36 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

int		ft_strlen_sep(char *str)
{
	int		len;

	len = 0;
	while (!is_sep(str[len]) && str[len])
		len++;
	return (len + 1);
}

int		get_n_cases(char *str)
{
	int	i;
	int n_cases;

	i = 0;
	n_cases = 0;
	if (*str == '\0')
		return (0);
	while (str[i])
	{
		if (is_sep(str[i]) && !is_sep(str[i + 1]) && str[i + 1] != '\0')
			n_cases++;
		i++;
	}
	return (n_cases + 1);
}

char	**null_s_ws(void)
{
	char	**tab;

	tab = malloc(sizeof(char*) * 1);
	tab[0] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		i2;
	int		n_cases;

	if (str[0] == '\0')
		return (null_s_ws());
	while (is_sep(*str) && *(str + 1) != '\0')
		str++;
	n_cases = get_n_cases(str);
	tab = malloc(sizeof(char*) * (n_cases > 0 ? n_cases + 1 : 1));
	tab[n_cases] = 0;
	i = -1;
	while (++i < n_cases)
	{
		tab[i] = malloc(sizeof(char) * ft_strlen_sep(str));
		i2 = 0;
		while (!is_sep(*str) && *str)
			tab[i][i2++] = *str++;
		tab[i][i2] = '\0';
		while (is_sep(*str) && *str)
			str++;
	}
	tab[0] = ft_strlen_sep(tab[0]) > 1 ? tab[0] : 0;
	return (tab);
}
