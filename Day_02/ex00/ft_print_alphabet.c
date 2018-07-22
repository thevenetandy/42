/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:07:18 by athevene          #+#    #+#             */
/*   Updated: 2018/07/04 14:40:48 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char current_char;

	current_char = 'a';
	while (current_char != 'z' + 1)
	{
		ft_putchar(current_char);
		current_char++;
	}
}
