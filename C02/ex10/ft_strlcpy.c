/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:17:17 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/15 00:06:21 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		b++;
	if (size == 0)
		return (b);
	while (i < size - 1)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
			src[i]++;
		}
		else
		{
			dest[i] = '\0';
			return (j);
		}
		a++;
	}
	dest[i] = '\0';
	return (i);
}
