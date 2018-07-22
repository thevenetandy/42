/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:06:07 by athevene          #+#    #+#             */
/*   Updated: 2018/07/12 22:35:04 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int	i2;

	i2 = 0;
	i = 0;
	while (--argc > 0)
	{
		while (argv[argc][i])
			ft_putchar(argv[argc][i++]);
		ft_putchar('\n');
		i = 0;
	}
	return (0);
}
