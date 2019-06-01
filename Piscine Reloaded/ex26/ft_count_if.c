/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 20:01:54 by htynisha          #+#    #+#             */
/*   Updated: 2019/05/07 21:14:50 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			sum++;
		i++;
	}
	return (sum);
}

int	f(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	i = ft_count_if(argv, &f);
	printf("%d", i);
	return (0);
}
