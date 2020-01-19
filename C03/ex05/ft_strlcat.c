/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 02:21:34 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/17 16:35:33 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	a = 0;
	b = 0;
	c = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
		b++;
	if (size <= a)
		b += size;
	else
		b += a;
	while (src[c] != '\0' && a + 1 < size)
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a] = '\0';
	return (b);
}
