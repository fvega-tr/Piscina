/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:26:57 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/21 06:46:26 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int fac;

	fac = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fac *= nb;
		nb--;
	}
	return (fac);
}
