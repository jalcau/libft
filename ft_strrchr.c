/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:17:12 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 15:56:24 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (j != 0)
		return ((char*) & str[j]);
	return (0);
}

int	main(void)
{
	char	s[20] = "llhola";
	int		c = 'l';
	char	*res;

	res = ft_strrchr(s, c);
	printf("%s", res);
}
