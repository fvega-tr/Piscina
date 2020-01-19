/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:56:13 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/15 01:00:28 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_aux(char *str, int i)
{
	if (str[i - 1] > 64 && str[i - 1] < 91)
		str[i] = str[i] + 32;
	else if (str[i - 1] > 96 && str[i - 1] < 123)
		str[i] = str[i] + 32;
	else if (str[i - 1] > 47 && str[i - 1] < 58)
		str[i] = str[i] + 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] > 0 && str[i - 1] < 48)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 57 && str[i - 1] < 65)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 90 && str[i - 1] < 97)
				str[i] = str[i] - 32;
			else if (str[i - 1] > 122 && str[i - 1] <= 127)
				str[i] = str[i] - 32;
		}
		else if (str[i] > 64 && str[i] < 91)
			ft_aux(str, i);
		++i;
	}
	return (str);
}

int main()
{
	char a[] = "  hola, +cómo estás? 42palabras cuarenta-y-dos; cincuenta+y+uno";
	ft_strcapitalize(a);
	printf("%s", a);
}
