/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:11:32 by rnoriko           #+#    #+#             */
/*   Updated: 2021/10/20 15:43:38 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem_alloc;

	mem_alloc = malloc(size * count);
	if (!mem_alloc)
		return (NULL);
	ft_memset(mem_alloc, 0, size * count);
	return (mem_alloc);
}
