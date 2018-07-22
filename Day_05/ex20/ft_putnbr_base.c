/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 18:46:12 by athevene          #+#    #+#             */
/*   Updated: 2018/07/11 21:53:06 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_strrev(char *str)
{
	int str_len;
	int iterate_int;
	int chr_tmp_swap;

	str_len = 0;
	while (*(str + str_len))
		str_len++;
	iterate_int = -1;
	while (iterate_int++ < (str_len / 2) - 1)
	{
		chr_tmp_swap = str[iterate_int];
		str[iterate_int] = str[str_len - iterate_int - 1];
		str[str_len - iterate_int - 1] = chr_tmp_swap;
	}
	return (str);
}

int		ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

void	ft_putnbr_base(int nb, char *base)
{
	int base_len;
	int div;
	int mod;

	base_len = ft_strlen(base);
	ft_putchar(nb < 0 ? '-' : 0);
	nb *= nb < 0 ? -1 : 1;
	div = nb / base_len;
	mod = nb % base_len;
	if (div != 0)
		ft_putnbr_base(div, base);
	ft_putchar(base[mod]);
}
