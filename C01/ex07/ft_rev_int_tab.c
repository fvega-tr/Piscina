/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 04:29:41 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/10 20:58:34 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int rev;

	i = 0;
	while (i < (size / 2))
	{
		rev = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = rev;
		i++;
	}
}
