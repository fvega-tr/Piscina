/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorres- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 21:18:58 by atorres-          #+#    #+#             */
/*   Updated: 2019/09/10 23:53:02 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		c;
	int		f;

	c = 0;
	f = 0;
	while ((f < y) && (x > 0))
	{
		while (c < x)
		{
			if (c == 0 && (f == 0 || f == (y - 1)))
				ft_putchar('A');
			else if (c == (x - 1) && (f == 0 || f == (y - 1)))
				ft_putchar('C');
			else if ((c > 0 && c < (x - 1)) && (f > 0 && f < (y - 1)))
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		c = 0;
		f++;
	}
}
