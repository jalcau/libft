/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:22:05 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/14 16:57:02 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_array(char const *s, char c, char **array, size_t arraysize)
{
	size_t	str_len;
	size_t	array_len;
	size_t	i;
	char	*str;

	str_len = 0;
	array_len = 0;
	i = 0;
	while (arraysize > array_len)
	{
		while (s[i] != c)
		{
			str_len++, i++;
		}
		if (str_len > 0)
		{
			str = ft_calloc(str_len + 1, sizeof(char));
			ft_memcpy(str, s + i - str_len, str_len);
			array[array_len] = str;
			array_len++;
			str_len = 0;
		}
		i++;
	}
}

static size_t	ft_arraylen(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	count;

	i = 0;
	len = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (len != 0)
				count++;
			len = 0;
		}
		else
			len++;
		i++;
	}
	if (len != 0)
		len = 1;
	else
		len = 0;
	return (count + len);
}

char	**ft_split(char const *s, char c)
{
	size_t	array_size;
	char	**array;

	if (!s)
		return (NULL);
	array_size = ft_arraylen(s, c);
	array = malloc ((array_size + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	ft_array(s, c, array, array_size);
	array[array_size] = NULL;
	return (array);
}
