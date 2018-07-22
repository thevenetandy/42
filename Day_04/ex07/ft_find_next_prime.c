/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:10:31 by athevene          #+#    #+#             */
/*   Updated: 2018/07/07 16:22:52 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int j;

	i = 5;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += j;
		j = 6 - j;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (ft_is_prime(++nb) == 0)
		;
	return (nb);
}
