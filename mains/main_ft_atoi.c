/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:35:08 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/19 17:01:43 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../ft_atoi.c"
#include<stdio.h>
#include<stdlib.h>
int	main(void)
{
	char str[] = "-+48";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}