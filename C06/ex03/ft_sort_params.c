/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 00:43:00 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/23 16:11:15 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0' && s2[a] != '\0')
		a++;
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_print(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	k = 1;
	while (k < argc)
	{
		i = 1;
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				j = 0;
				while (argv[i][j] != '\0' && argv[i + 1][j] != '\0')
				{
					ft_swap(&argv[i][j], &argv[i + 1][j]);
					j++;
				}
			}
			i++;
		}
		k++;
	}
	ft_print(argc, argv);
}
