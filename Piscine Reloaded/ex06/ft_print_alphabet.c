/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 10:57:01 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/07 11:47:57 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;
	int		i;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		c += i;
		ft_putchar(c);
		i++;
		c = 'a';
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
