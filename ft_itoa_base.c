/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 21:09:00 by viroques          #+#    #+#             */
/*   Updated: 2020/02/13 22:41:19 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_fill_string(unsigned int n, int index, char *str, char *base)
{
	unsigned int base_len;

	base_len = (unsigned int)ft_strlen(base);
	if (n >= base_len)
		ft_fill_string(n / base_len, index - 1, str, base);
	str[index] = base[n % base_len];
}

static void		ft_absolute_value(int n, unsigned int *nbr, int *size)
{
	if (n < 0)
	{
		*nbr = -n;
		*size += 1;
	}
	else
		*nbr = n;
}

char			*ft_itoa_base(int n, char *base)
{
	char			*str;
	unsigned int	nbr;
	int				size;
	unsigned int	len_base;

	len_base = (unsigned int)ft_strlen(base);
	size = 1;
	ft_absolute_value(n, &nbr, &size);
	while (nbr >= len_base)
	{
		nbr /= len_base;
		size++;
	}
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	ft_fill_string(n < 0 ? -n : n, size - 1, str, base);
	if (n < 0)
		str[0] = '-';
	return (str);
}
