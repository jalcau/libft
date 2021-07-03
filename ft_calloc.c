/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:35:47 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 18:54:50 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include "ft_bzero.c"
#include <stdio.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;

	if (!(tab = (char *) malloc (nmemb * size)))
		return (0);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
