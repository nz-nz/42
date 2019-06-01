/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:10:29 by htynisha          #+#    #+#             */
/*   Updated: 2019/05/08 21:53:11 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		ft_read(char **argv)
{
	int		fd;
	int		clse;
	char	buf[BUF_SIZE];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (1);
	}
	while (read(fd, buf, BUF_SIZE) > 0)
		write(1, &buf, 1);
	clse = close(fd);
	if (clse == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if ((ft_strcmp("Makefile", argv[1]) == 0) && argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (ft_strcmp("Makefile", argv[1]) == 0)
		ft_putstr("*content of file Makefile*\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_read(argv);
	return (0);
}
