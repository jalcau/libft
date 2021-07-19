/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:21:44 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/17 16:42:30 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_strtrim.c"
#include"../ft_strchr.c"
#include"../ft_strlen.c"
#include"../ft_substr.c"
#include<stdio.h>
int	main(void)
{
	char s1[] = "  \t \t \n   \n\n\n\t";
	char set [] = " \n\t";
	printf("el string final es %s", ft_strtrim(s1,set));
	return (0);
}