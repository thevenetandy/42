/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 03:46:23 by athevene          #+#    #+#             */
/*   Updated: 2018/07/13 04:26:10 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(long nb)
{
		ft_putchar(nb < 0 ? '-' : 0);
			nb *= nb < 0 ? -1 : 1;
				if (nb / 10)
							ft_putnbr(nb / 10);
					ft_putchar('0' + nb % 10);
}

int		ft_strlen(char *str)
{
		int	length;

			length = 0;
				while (*str++)
							length++;
					return (length);
}

void	ft_putnbr_base(long nb, char *base)
{
		int base_len;
			long div;
				long mod;

					base_len = ft_strlen(base);
						ft_putchar(nb < 0 ? '-' : 0);
							nb *= nb < 0 ? -1 : 1;
								div = nb / base_len;
									mod = nb % base_len;
										if (div != 0)
													ft_putnbr_base(div, base);
											ft_putchar(base[mod]);
}

void	ft_destroy(char ***factory)
{
	int i;

	i = 0;
	/*while (**factory[i])
	{
		*while (**factory)
		{
			ft_putstr(**factory++);
		}/
		//ft_putnbr(***factory);
		***factory++;
		i++;
	}*/
}

int		main(void)
{
	char *factory1 = "U1";
	char *factory2 = "U2";
	char *factory3 = "U3";
	ft_putnbr_base((long)factory1, "0123456789ABCDEF");
	ft_putchar(' ');
	ft_putstr(factory1);
	char ***factory;
	factory = malloc(sizeof(char) * (2+1) * 3);
	ft_putchar('\n');
	ft_putnbr_base((long)factory, "0123456789ABCDEF");
	**factory = factory1;
	//**factory = &*factory1;
	//ft_destroy(factory);

}
