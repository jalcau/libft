/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcauza <jalcauza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:46:19 by jalcauza          #+#    #+#             */
/*   Updated: 2021/07/17 18:47:21 by jalcauza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstlast(t_list *lst)
{
	while (lst != '\0')
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}
