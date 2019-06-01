/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:49:47 by htynisha          #+#    #+#             */
/*   Updated: 2019/04/09 21:22:22 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

int		main(void)
{
	char *dest;
	char *s1;

	s1 = "creature";
	dest = s1;
	printf("orig %s\n", strdup(s1));
	printf("after creat addres %p, %p, %s, %c", dest, &dest, dest, dest[0]);
	printf("\nmy %s", ft_strdup(s1));
	return (0);
}
