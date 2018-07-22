/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:59:52 by athevene          #+#    #+#             */
/*   Updated: 2018/07/08 11:42:37 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	ft_putchar(nb < 0 ? '-' : 0);
	nb *= nb < 0 ? -1 : 1;
	if (nb / 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	final_nb;
	
	final_nb = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\v' || *str == '\r')
		str++;
	sign = *str == '-' ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str <= '9' || *str >= '0')
	{
		final_nb = final_nb * 10 + (*str - '0');
		str++;
	}
	return (final_nb);
}

int main(int argc, char *argv[])
{
	char str[] = "  -2653fn40";
	printf("%i", atoi(str));
	return 0;
}
