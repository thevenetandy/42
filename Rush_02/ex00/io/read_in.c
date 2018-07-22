/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athevene <thevenetandy@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 19:43:32 by athevene          #+#    #+#             */
/*   Updated: 2018/07/21 22:15:58 by athevene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle_2.h"

char	*read_input(void)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*readed_input;

	readed_input = malloc(sizeof(char));
	fd = open("/dev/stdin", O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		readed_input = ft_strcat(readed_input, buf);
	}
	if (close(fd) == -1)
		return (0);
	return (readed_input);
}
