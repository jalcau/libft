/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:35:54 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 17:36:42 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
int	ft_isalnum(int c)
{
	if (!(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' ))
		if (!(c >= '0' && c <= '9' ))
			return (0);
	return (1);
}

int	main(void)
{
	printf("%d", ft_isalnum('\n'));
}
