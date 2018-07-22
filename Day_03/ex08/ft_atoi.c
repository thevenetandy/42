/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 04:05:42 by athevene          #+#    #+#             */
/*   Updated: 2018/07/06 05:36:24 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int n;
	int is_negative;

	n = 0;
	is_negative = 0;
	while (*str == ' ')
		str++;
	if (*str == '-')
	{
		is_negative = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + *str - 48;
		str++;
	}
	if (is_negative)
		n *= -1;
	return (n);
}
