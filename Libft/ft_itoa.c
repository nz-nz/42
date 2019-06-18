/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 18:43:48 by htynisha          #+#    #+#             */
/*   Updated: 2019/06/18 21:22:06 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	ln;
	long	lnbuf;
	int		ng;
	int		i;
	char	*str;

	ln = n;
	lnbuf = ln;
	ng = 0;
	i = 0;
	if (ln < 0)
	{
		ng = 1;
		ln *= -1;
	}
	while (ln)
	{
		ln /= 10;
		i++;
	}
	ln = lnbuf;
	if (ng)
	{
		str = ft_strnew(i++);
		str[0] = '-';
	}
	else
		str = ft_strnew(i);
	while (ln)
	{
		str[i] = (char)(ln % 10) + '0';
		i--;
	}
	return (str);
}
