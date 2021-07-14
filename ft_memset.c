/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:11:03 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/05 17:52:31 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memset(void *str, int c, size_t n)
{
	size_t				i;
	unsigned char		*string;

	i = 0;
	string = (unsigned char *) str;
	while (i < n)
	{
		string[i] = (unsigned char) c;
		i++;
	}
	return ((void *) string);
}
