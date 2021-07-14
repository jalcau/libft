/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:33:34 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/05 17:17:38 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../libft.h"
#include"../ft_strlcat.c"
#include"../ft_strlen.c"
#include<stdio.h>
#include<string.h>
int	main(void)
{
	char	src[] = "mundo";
	char	dst[15] = "hola";
	printf("%ld", strlcat(dst, src, 7));
	printf("%ld", ft_strlcat(dst, src, 7));
	printf("%ld", strlcat(dst, src, 7));
}
