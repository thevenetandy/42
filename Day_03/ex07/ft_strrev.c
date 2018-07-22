/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 18:30:58 by athevene          #+#    #+#             */
/*   Updated: 2018/07/06 05:57:40 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int str_len;
	int iterate_int;
	int chr_tmp_swap;

	str_len = 0;
	while (*(str + str_len))
		str_len++;
	iterate_int = -1;
	while (iterate_int++ < (str_len / 2) - 1)
	{
		chr_tmp_swap = str[iterate_int];
		str[iterate_int] = str[str_len - iterate_int - 1];
		str[str_len - iterate_int - 1] = chr_tmp_swap;
	}
	return (str);
}
