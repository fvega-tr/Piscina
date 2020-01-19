/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvega-tr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 14:07:37 by fvega-tr          #+#    #+#             */
/*   Updated: 2019/09/26 14:07:43 by fvega-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
int                        ft_strlen(char *str)
{
    int k;
    k = 0;
    while (*str != '\0')
    {
        k++;
        str++;
    }
    return (k);
}
char                    *ft_strcpy(char *dest, char *src)
{
    int c;
    c = 0;
    while (src[c] != '\0')
    {
        dest[c] = src[c];
        c++;
    }
    dest[c] = '\0';
    return (dest);
}
struct    s_stock_str        *ft_strs_to_tab(int ac, char **av)
{
    int                i;
    char            *puntero1;
    t_stock_str        *armario;
    armario = malloc(sizeof(t_stock_str) * (ac + 1));
    if (armario == NULL)
        return (0);
    i = 0;
    while (i < ac)
    {
        armario[i].size = ft_strlen(av[i]);
        armario[i].str = av[i];
        puntero1 = malloc(sizeof(char) * (armario[i].size + 1));
        armario[i].copy = ft_strcpy(puntero1, av[i]);
        i++;
    }
    armario[i].str = 0;
    return (armario);
}
