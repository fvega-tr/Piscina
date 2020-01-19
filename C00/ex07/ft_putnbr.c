/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:23:36 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/21 18:36:29 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char w)
{
	write(1, &w, 1);
}

void	ft_putnbr(int nb)
{
    long aux;
    
    aux = nb;
	if (aux < 0)
	{
		ft_putchar('-');
		ft_putnbr(aux * -1);
	}
	else if (aux < 10)
	{
		ft_putchar(aux + '0');
	}
	else
	{
		ft_putnbr(aux / 10);
		ft_putchar(aux % 10 + '0');
	}
}
