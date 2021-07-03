/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:10:56 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 17:11:33 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_strrchr.c"
#include<stdio.h>

int	main(void)
{
	char	s[20] = "llhola";
	int		c = 'l';
	char	*res;

	res = ft_strrchr(s, c);
	printf("%s", res);
}
