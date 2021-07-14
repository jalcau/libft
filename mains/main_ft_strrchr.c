/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:10:56 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/14 17:49:53 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_strrchr.c"
#include"../ft_strlen.c"
#include<stdio.h>

int	main(void)
{
	char	s[20] = "abbbbbbbb";
	int		c = 'a';
	char	*res;
	char	*org;

	res = ft_strrchr(s, c);
	org = strchr(s, c);
	printf("%s \n", res);
	printf("%s", org);
	
}
