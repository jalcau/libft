/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <alcauza@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:02:52 by jalcauza          #+#    #+#             */
/*   Updated: 2021/06/08 18:08:38 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*string_str;
	size_t	i;

	i = 0;
	string_str = (unsigned char *)str;
	if (string_str[0] == '\0')
		return (0);
	while (i < n)
	{
		if (string_str[i] == c)
			return ((void *)&string_str[i]);
		i++;
	}
	return (0);
}

