/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 21:50:05 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/25 22:21:26 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int q;
	int *p;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	q = max - min - 1;
	if (min == 0 || (min < 0 && max >= 0))
		q = max - min;
	p = (int *)malloc(sizeof(int) * q);
	while (i < q)
	{
		p[i] = min + i;
		i++;
	}
	printf("%d\n", q);
	i = 0;
	while (i < q)
	{
		printf("%d", p[i]);
		i++;
	}
	printf("\n");
	return (p);
}

int main(void)
{
	int *o;

	o = 0;
	ft_range(-10, 10);
	return (0);
}
