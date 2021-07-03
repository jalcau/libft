/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:11:03 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 16:40:01 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
void	*ft_memset(void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*string;

	string = (unsigned char *) str;
	while (i < n)
	{
		string[i] = c;
		i++;
	}
	return ((void *) string);
}
