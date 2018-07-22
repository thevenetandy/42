/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:42:59 by athevene          #+#    #+#             */
/*   Updated: 2018/07/06 13:50:31 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int cur_pow;
	int nb_powered;

	nb_powered = nb;
	cur_pow = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++cur_pow < power)
		nb_powered *= nb;
	return (nb_powered);
}
