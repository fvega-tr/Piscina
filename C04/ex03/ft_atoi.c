/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 03:43:43 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/18 16:30:50 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	contador(char *str)
{
	int a;

	a = 0;
	while ((str[a] == 32) || (str[a] > 8 && str[a] < 14))
		a++;
	if ((str[a] == 43) || (str[a] == 45) || (str[a] >= '0' && str[a] <= '9'))
		return (a);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int a;
	int neg;
	int num;

	neg = 0;
	num = 0;
	a = contador(str);
	while ((str[a] == 43) || (str[a] == 45) || (str[a] >= '0' && str[a] <= '9'))
	{
		if (str[a] == '-')
			neg++;
		if (str[a] >= '0' && str[a] <= '9')
		{
			while (str[a] >= '0' && str[a] <= '9')
			{
				num = num * 10 + str[a] - '0';
				a++;
			}
			if (neg % 2 == 1)
				num *= -1;
			return (num);
		}
		a++;
	}
	return (0);
}
