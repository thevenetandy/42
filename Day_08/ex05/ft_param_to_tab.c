/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:51:16 by athevene          #+#    #+#             */
/*   Updated: 2018/07/19 20:10:30 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int			ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char		*ft_strcpy(char *str)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(char) * ft_strlen(str));
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

t_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*params;

	params = malloc(sizeof(t_stock_par) * (ac + 1));
	params[ac].str = 0;
	i = -1;
	while (++i < ac)
	{
		params[i].size_param = ft_strlen(av[i]);
		params[i].str = av[i];
		params[i].copy = ft_strcpy(av[i]);
		params[i].tab = ft_split_whitespaces(av[i]);
	}
	return (params);
}
