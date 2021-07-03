/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:35:03 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 17:37:01 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"..\libft.h"
#include"..\ft_bzero.c"
#include<stdio.h>
int	main(void)
{
	char	s[15] = "holaaaaaaaaaaaa";
	int i;
	i = 0;
	//bzero(s,1);
	ft_bzero(s, 15);
	//printf("%s", s);

	while(i < 19)
	{
	printf("\n%d%c", i,s[i]);
		i++;
	}
	return (0);
}