/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 18:27:15 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/21 21:28:12 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int res;
	int i;

	res = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
