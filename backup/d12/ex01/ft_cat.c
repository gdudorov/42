/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdudorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 18:05:34 by gdudorov          #+#    #+#             */
/*   Updated: 2020/01/23 20:25:51 by gdudorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1

int	ft_putstr(char *str);

int	check_arg(int ac)
{
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (check_arg(ac) == 1)
		return (1);
	fd = open(av[1], O_RDONLY);
	ft_putstr(av[1]);
	if (fd == -1)
	{
		ft_putstr("Open() error\n");
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("Close() erorr\n");
		return (1);
	}
	return (0);
}
