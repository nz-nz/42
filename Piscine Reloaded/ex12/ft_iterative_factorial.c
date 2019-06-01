/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:35:29 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/07 14:33:33 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int f;
	int i;

	f = 1;
	i = 1;
	if (nb > 0 && nb < 13)
	{
		while (i < nb + 1)
		{
			f *= i;
			i++;
		}
		return (f);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(3));
	return (0);
}
