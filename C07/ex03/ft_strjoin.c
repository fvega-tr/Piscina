/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 00:23:22 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/25 11:32:43 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_sep(char *dest, char *sep, int j)
{
	int		k;

	k = 0;
	while (sep[k] != '\0')
	{
		dest[j] = sep[k];
		k++;
		j++;
	}
	return (j);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*dest;

	i = 0;
	if (size == 0)
	{
		dest = 0;
		return (dest);
	}
	dest = (char *)malloc(size * sizeof(char));
	while (i < size - 1)
	{
		k = 0;
		while (strs[i][j] != '\0')
		{
			dest[j] = strs[i][k];
			j++;
			k++;
		}
		j = ft_sep(dest, sep, j);
		i++;
	}
	return (dest);
}
