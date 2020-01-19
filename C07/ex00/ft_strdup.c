/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:05:01 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/24 16:47:33 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		cont;
	int		i;
	char	*dest;

	cont = 0;
	i = 0;
	while (src[cont] != '\0')
		cont++;
	dest = (char*)malloc(cont * sizeof(char));
	if (src == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
