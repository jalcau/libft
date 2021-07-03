/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:10:21 by jalcauza          #+#    #+#             */
/*   Updated: 2021/06/08 19:10:21 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include<string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *string1;
	unsigned char *string2;
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	size_t i;
	i = 0;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return (string1[i] - string2[i]);
		i++;
	}

	return (0);
}

