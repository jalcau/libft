/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:35:41 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 18:51:28 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<strings.h>
void	ft_bzero(void *str, size_t n)
{
	size_t				i;
	unsigned char		*string;

	string = (unsigned char *) str;
	i = 0;
	while (i < n)
	{
		string[i] = '\0';
		i++;
	}
}
