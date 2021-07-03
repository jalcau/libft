/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:37:53 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 18:20:58 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"
#include "ft_strlen.c"
#include "ft_strchr.c"
#include "ft_substr.c"
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	int		i;

	i = 0;
	j = 0;
	if (s1[0] == '\0' || set[0] == '\0')
		return (0);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j != 0 && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, (j + 1) - i));	
}

int	main(void)
{
	char s1[] = "\t \t \n   \n\n\n\t";
	char set [] = " \t";
	printf("el string final es %s", ft_strtrim(s1,set));
	return (0);
}
