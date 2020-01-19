/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 01:47:01 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/17 18:47:50 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	if (n == 0)
		return (0);
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0' && a < n - 1)
	{
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
