/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:02:08 by athevene          #+#    #+#             */
/*   Updated: 2018/07/12 18:06:44 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	char	*str;
	int		str_len;

	str = "Tut tut ; Tut tut\n";
	str_len = 0;
	while (str[str_len])
		write(1, &str[str_len++], 1);
}
