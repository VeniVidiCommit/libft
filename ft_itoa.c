/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:09:00 by viroques          #+#    #+#             */
/*   Updated: 2019/10/13 22:09:33 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fill_string(int n, int index, char *str)
{
	if (n >= 10)
		ft_fill_string(n / 10, index - 1, str);
	str[index] = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nbr;
	size_t	size;

	size = 1;
	if (n < 0)
	{
		nbr = -n;
		size++;
	}
	else
		nbr = n;
	while (nbr >= 10)
	{
		nbr /= 10;
		size++;
	}
	str = malloc(sizeof(char) * size + 1);
	str[size] = '\0';
	ft_fill_string(ABS(n), (int)size - 1, str);
	if (n < 0)
		str[0] = '-';
	return (str);
}
