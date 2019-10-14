/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:18:04 by viroques          #+#    #+#             */
/*   Updated: 2019/10/14 22:20:23 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	// void	*content;
	// t_list	*elem;
	// char 	a[] = "ewoifjeowifjewoifj";
	// int b;

	// b = 42;
	// elem = ft_lstnew(&b);
	// printf("%d\n", *(int*)elem->content);

	// list_add_front
	t_list *new;
	t_list *begin;
	t_list *alst;
	t_list	*elem;
	t_list	*elem2;
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	begin = ft_lstnew("toto");
	new = ft_lstnew("toto");
	begin->next = new;
	alst = ft_lstnew("mouvtop");
	ft_lstadd_front(&begin, alst);
	elem2 = ft_lstnew("fin");
	ft_lstadd_back(&begin, elem2);
	while (alst)
	{
		printf("%s\n", (char*)alst->content);
		alst = alst->next;
	}
	printf("%d\n", ft_lstsize(begin));

}
