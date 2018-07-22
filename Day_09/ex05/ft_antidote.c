/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 22:21:37 by athevene          #+#    #+#             */
/*   Updated: 2018/07/12 22:28:49 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((i > j && i < k) || (i < j && i > k))
		return (i);
	if ((j > i && j < k) || (j < i && j > k))
		return (j);
	if ((k > i && k < j) || (k < i && k > j))
		return (k);
	if ((i == j) || (i == k))
		return (i);
	if ((k == j))
		return (k);
	return (0);
}
