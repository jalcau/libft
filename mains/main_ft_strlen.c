/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:39:30 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 18:30:38 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../ft_strlen.c"
#include<stdio.h>
int main()
{
	char *string = "hola jorge alcauzar";
	printf("%ld", ft_strlen(string));
	printf("%ld", strlen(string));
}