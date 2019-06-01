/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:54:44 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/07 12:03:05 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	c;
	int		i;

	c = '0';
	i = 0;
	while (i < 10)
	{
		ft_putchar(c += i);
		i++;
		c = '0';
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
