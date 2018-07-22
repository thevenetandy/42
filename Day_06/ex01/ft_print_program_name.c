/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 16:25:18 by athevene          #+#    #+#             */
/*   Updated: 2018/07/12 22:47:41 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] && argc > 0)
		ft_putchar(argv[0][i++]);
	ft_putchar('\n');
	return (0);
}
