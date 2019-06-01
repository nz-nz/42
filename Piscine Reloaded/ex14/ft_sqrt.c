/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 18:08:24 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/07 19:09:23 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 2)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i % nb == 0)
		return (i);
	else
		return (0);
}

int	main(void)
{
	int nb;

	scanf("%d", &nb);
	printf("sqrt(%d) = %d", nb, ft_sqrt(nb));
	return (0);
}
