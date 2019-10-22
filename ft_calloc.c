/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:45:41 by victorianro       #+#    #+#             */
/*   Updated: 2019/10/22 14:34:41 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    if (!(ptr = malloc(sizeof(nmemb) * size)))
        return (NULL);
    ft_bzero(ptr, size);
    return (ptr);
}
