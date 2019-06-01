/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:20:47 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/24 21:53:08 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_bubble(char **a, int argc)
{
	int		i;
	char	*buf;
	int		n;

	i = 1;
	n = 2;
	while (n < argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(a[i], a[i + 1]) > 0)
			{
				buf = a[i + 1];
				a[i + 1] = a[i];
				a[i] = buf;
			}
			i++;
		}
		i = 0;
		n++;
	}
}

int		main(int argc, char *argv[])
{
	int i;

	i = 2;
	if (argc == 1)
		return (0);
	ft_bubble(argv, argc);
	while (i <= argc)
	{
		ft_putstr(argv[i - 1]);
		i++;
	}
	return (0);
}
