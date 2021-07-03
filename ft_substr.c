/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:00:39 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 18:24:07 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	if (s[0] == '\0' || !(dest = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (s[i] != '\0' && j < len)
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[30] = "hola soy Jorge";

	printf("%s", ft_substr(s1, 1, 9));
}