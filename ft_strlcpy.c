/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:36:15 by victorianro       #+#    #+#             */
/*   Updated: 2019/10/11 20:55:29 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char * src, size_t size)
{
    size_t i;

    i = 0;
    while(dest[i] && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}
