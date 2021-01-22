/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viroques <viroques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 21:15:27 by viroques          #+#    #+#             */
/*   Updated: 2021/01/22 16:17:30 by viroques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strnchr(char *s, int c, int n)
{
	int i;

	i = 0;
	while (s[i] != '\0' && i < n)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}

static char		*ft_strndup(char *s)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i] && s[i] != '\n')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_cutncpy_stock(char **stock)
{
	int		i;
	char	*toto;

	i = 0;
	toto = *stock;
	while (toto[i])
	{
		if (toto[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	if (!(*stock = ft_substr(toto, i, ft_strlen(toto))))
		return (-1);
	free(toto);
	return (0);
}

static int		ft_readnstock(int fd, char *buff, char **stock)
{
	int		read_bytes;
	char	*tmp;
	
	while ((read_bytes = read(fd, buff, BUFFER_SIZE)))
	{
		buff[read_bytes] = '\0';
		tmp = *stock;
		if (!(*stock = ft_strjoin(tmp, buff)))
			return (-1);
		free(tmp);
		if (ft_strnchr(buff, '\n', BUFFER_SIZE))
			break;
	}
	return (read_bytes);
}

int				get_next_line(int fd, char **line)
{
	char			buff[BUFFER_SIZE + 1];
	static char		*stock;
	int				read_bytes;

	if (read(fd, NULL, 0) < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	if (!stock)
	{
		if (!(stock = malloc(sizeof(char))))
			return (-1);
		stock[0] = '\0';
	}
	if ((read_bytes = ft_readnstock(fd, buff, &stock)) == -1)
		return (-1);
	*line = ft_strndup(stock);
	if (!ft_strnchr(stock, '\n', ft_strlen(stock)))
	{
		free(stock);
		stock = NULL;
		return (0);
	}
	if (ft_cutncpy_stock(&stock) == -1)
		return (-1);
	return (1);
}
