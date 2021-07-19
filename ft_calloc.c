/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:35:47 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/17 16:06:31 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <stdio.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	tab = (char *)malloc(nmemb * size);
	if (!tab)
		return (0);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
