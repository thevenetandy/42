/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 17:55:21 by athevene          #+#    #+#             */
/*   Updated: 2018/07/18 18:59:22 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
};
typedef	struct s_stock_par	t_stock_par;

#endif

#ifndef FT_SPLIT_WHITESPACES
# define FT_SPLIT_WHITESPACES

char	**ft_split_whitespaces(char *str);

#endif
