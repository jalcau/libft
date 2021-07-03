/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:34:02 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/01 17:37:04 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"..\libft.h"
#include"..\ft_calloc.c"
#include<stdio.h>
int main()
{
    size_t size = sizeof(char);
    char * result;
    result = ft_calloc(3, size);
    int i = 0;
     while (i<3)
    {
        printf("%d", result[i]); 
        i++;
    }
   
}

