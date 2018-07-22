/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:42:04 by athevene          #+#    #+#             */
/*   Updated: 2018/07/04 14:49:22 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char current_number;

	current_number = '0';
	while (current_number <= '9')
	{
		ft_putchar(current_number);
		current_number++;
	}
}
