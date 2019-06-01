/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 13:09:14 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/07 13:19:22 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int buf;

	buf = *a;
	*a = *b;
	*b = buf;
}

int		main(void)
{
	int a;
	int b;

	a = 10;
	b = 5;
	printf("a=%d b=%d\n", a, b);
	ft_swap(&a, &b);
	printf("a=%d b=%d", a, b);
	return (0);
}
