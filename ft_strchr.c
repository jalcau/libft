/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 19:11:07 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/05 19:36:53 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && c != *str)
		str++;
	if (c == *str)
		return ((char *)str);
	return (0);
}
