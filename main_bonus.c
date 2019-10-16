/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:18:04 by viroques          #+#    #+#             */
/*   Updated: 2019/10/16 18:27:45 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_plusone(void *s)
{
	printf("passage %s\n", s);
}
int		main(void)
{
	t_list	*begin;
	t_list	*elem;
	t_list	*tmp;

	begin = ft_lstnew("bonjour");
	elem = ft_lstnew("hellow");
	ft_lstadd_back(&begin, elem);
	// tmp = begin;
	// ft_lstiter(begin, &ft_plusone);
	tmp = ft_lstmap(begin, &ft_plusone);
	while (tmp)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	while (begin)
	{
		printf(" ori %s\n", begin->content);
		begin = begin->next;
	}
}
