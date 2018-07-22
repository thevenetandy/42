/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:09:06 by athevene          #+#    #+#             */
/*   Updated: 2018/07/12 22:34:48 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int	i2;

	i2 = 0;
	i = 0;
	while (++i2 < argc)
	{
		while (argv[i2][i])
			ft_putchar(argv[i2][i++]);
		ft_putchar('\n');
		i = 0;
	}
	return (0);
}
