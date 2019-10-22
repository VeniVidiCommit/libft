/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:07:54 by victorianro       #+#    #+#             */
/*   Updated: 2019/10/22 20:29:54 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *nptr)
{
    int i; 
    int negativ;
    int number;

    number = 0;
    negativ = 1;
    i = 0;
    while (ft_isspace(nptr[i]) == 1)
        i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i] == '-')
            negativ = -1;
        i++;
    }
    while (ft_isdigit(nptr[i]) == 1)
    {
        number = number * 10 + (nptr[i] - 48);
        i++; 
    }
    return (number * negativ);
}