/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:02:52 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/05 18:32:49 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*string_str;
	size_t			i;

	i = 0;
	string_str = (unsigned char *)str;
	if (string_str[0] == '\0')
		return (0);
	while (i < n)
	{
		if (string_str[i] == (unsigned char)c)
			return (&string_str[i]);
		i++;
	}
	return (0);
}
