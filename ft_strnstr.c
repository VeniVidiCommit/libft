/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:03:30 by victorianro       #+#    #+#             */
/*   Updated: 2019/10/11 20:55:42 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const   char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;
  
    i = 0;
    j = 0;
    while (s1[i] && i < n)
    {
        j = 0;
        while(s1[i] == s2[j] && j < n)
        {
            i++;
            j++;
            if (s2[j] == '\0')
                return ((char*)&s1[i - j]);
        }
        i++;
    }
    return (NULL);
}