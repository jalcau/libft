/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:30:11 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/14 18:10:14 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] != '\0' && str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
			return (((unsigned char)str1[i] - (unsigned char)str2[i]));
		i++;
	}
	if (i == n)
		return (((unsigned char)str1[i - 1] - (unsigned char)str2[i - 1]));
	if (str1[i] == '\0' || str2[i] == '\0')
		return (((unsigned char)str1[i] - (unsigned char)str2[i]));
	return (0);
}
