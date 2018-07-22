/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:52:30 by athevene          #+#    #+#             */
/*   Updated: 2018/07/06 13:52:37 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int nb_powered;

	nb_powered = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb_powered * ft_recursive_power(nb, power - 1));
}
