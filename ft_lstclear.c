/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:17:46 by viroques          #+#    #+#             */
/*   Updated: 2019/10/15 17:27:03 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    
    if (lst)
    {
        while (*lst)
        {
            tmp = (*lst)->next;
            ft_lstdelone(*lst, del);
            (*lst) = tmp;
        }
}