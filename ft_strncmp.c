/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:30:11 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 18:55:06 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	const char	*string1 = s1;
	const char	*string2 = s2;

	i = 0;
	while (i < n)
	{
		if (string1[i] != string2[i])
			return ((unsigned char)(string1[i]) - (unsigned char)string2[i]);
		i++;
	}
	return (0);
}
