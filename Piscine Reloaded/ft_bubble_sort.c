/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:20:47 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/21 15:01:41 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	*ft_bubble(int *a, int size)
{
	int i;
	int buf;
	int n;

	i = 0;
	n = 1;
	while (n < size)
	{
		if (a[i] > a[i + 1])
		{
			buf = a[i + 1];
			a[i + 1] = a[i];
			a[i] = buf;
		}
		i++;
		n++;
	}
	return a;
}

int main(int argc, char *argv[])
{
	int i;
	int j;
	int size;
	int a [] = {1, 2, 6, 3, 4, 1, 3, 7, 9, 9, 3, 5, 4, 8};

	j = 0;
	size = 14;
	while (j < size)
	{
	printf("%d", a[j]);
	j++;
	}
	printf("\n");
	ft_bubble(a, size);
	j = 0;
	while (j < size)
	{
	printf("%d", a[j]);
	j++;
	}
	i = 2;
	if (argc == 1)
		return (0);
	return (0);
}
