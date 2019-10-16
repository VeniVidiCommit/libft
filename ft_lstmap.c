/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:29:26 by viroques          #+#    #+#             */
/*   Updated: 2019/10/16 18:27:45 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
    t_list  *new;
    t_list  *tmp;
    t_list  *begin;
    
    if (lst)
    {
        tmp = lst;
        begin = ft_lstnew(f(tmp->content));
        tmp = tmp->next;
        while (tmp)
        {
            new = ft_lstnew(f(tmp->content));
            ft_lstadd_back(&begin, new);
            tmp = tmp->next;
        }
        return (tmp);
    }
    return (NULL);
}