/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:35:41 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 17:36:39 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include"ft_memset.c"
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
/*
int	main(void)
{
	char	s[15] = "holaaaaaaaaaaaa";
	int i;
	i = 0;
	//bzero(s,1);
	ft_bzero(s, 10);
	//printf("%s", s);

	while(i < 15)
	{
	printf("\n%d%c", i,s[i]);
		i++;
	}
	return (0);
	
*/
