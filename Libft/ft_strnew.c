/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htynisha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 20:28:44 by htynisha          #+#    #+#             */
/*   Updated: 2019/06/18 21:21:08 by htynisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *str;
	size_t i;
	
	i = 0;
	str = (char *)malloc((size++) * sizeof(char));
	str = 0;
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
