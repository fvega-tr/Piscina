 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:00:49 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/16 02:18:35 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
			{
				return (str + a);
			}
			b++;
		}
		a++;
	}
	return (NULL);
}
