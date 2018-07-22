/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 21:43:43 by athevene          #+#    #+#             */
/*   Updated: 2018/07/21 22:15:08 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/colle_2.h"

int		main(void)
{
	char	*input;

	input = read_input();
	if (!input)
	{
		return (1);
	}
	write(1, input, ft_strlen(input) + 1);
	return (0);
}
