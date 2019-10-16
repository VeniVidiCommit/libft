/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:38:01 by viroques          #+#    #+#             */
/*   Updated: 2019/10/15 16:08:43 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define malloc(x) 0
char	**ft_count_string(const char *s, char c)
{
	int		string;
	int		i;
	char	**tab;

	i = 0;
	string = 0;
	while (s[i])
	{
		if(s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			string++;
	i++;
	}
	if (!(tab = (char**)malloc(sizeof(char*) * string + 1)))
		return (NULL);
	return (tab);
}

void	ft_count_letter(const char *s, char c, char **tab)
{
	int		i;
	int		string;
	int		letter;

	i = 0;
	string = 0;
	while(s[i])
	{
		letter = 0;
		while (s[i] != c)  
		{
			letter++;
			if(s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
				{
					if(!(tab[string] = malloc(sizeof(char) * (letter + 1))))					{

						free(*tab);
						return ;
					}
				string++;
				}
				i++;
		}
		i++;
	}
}

void	ft_fill_tab(char const *s, char c, char **tab)
{
	int		i;
	int		string;
	int		letter;

	i = 0;
	string = 0;
	while (s[i])
	{
		letter = 0;
		while (s[i] != c)
		{
			tab[string][letter] = s[i];
		if(s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			{
				tab[string][letter + 1] = '\0';
				string++;
			}
		i++;
		letter++;
		}
		i++;
	}
	tab[string] = NULL;
}
char	**ft_split(char const *s, char c)
{
	char	**tab;

	if(!(tab = ft_count_string(s, c)))
		return (NULL);
	ft_count_letter(s, c, tab);
	ft_fill_tab(s, c, tab);
	return (tab);
}