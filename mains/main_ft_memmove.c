/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 17:02:13 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/03 17:02:56 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_memmove.c"
#include<stdio.h>
int main()
{
	char s1[15] = "hola";
	char s2[15] = "adios";
	ft_memmove(s1, s2, sizeof(s2));
	printf("%s", s1);
}
