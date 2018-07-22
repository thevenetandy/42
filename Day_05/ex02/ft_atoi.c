/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:40:27 by athevene          #+#    #+#             */
/*   Updated: 2018/07/10 17:11:17 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	final_nb;
	int sign;

	final_nb = 0;
	while (*str == ' ' || (*str >= 7 && *str <= 13))
		str++;
	sign = *str == '-' ? 1 : -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		final_nb = final_nb * 10 - (*str++ - '0');
	return (sign * final_nb);
}
