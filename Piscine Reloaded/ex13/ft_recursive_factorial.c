/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:36:47 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/07 18:02:27 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	printf("%d ", nb);
	return (ft_recursive_factorial(nb - 1) * nb);
}

int	main(void)
{
	int nb;

	scanf("%d", &nb);
	printf("\nfactorial(%d) = %d", nb, ft_recursive_factorial(nb));
	return (0);
}
