/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 01:37:58 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 16:00:00 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t	mem_offset;

	if (!destination && !source)
		return (NULL);
	mem_offset = 0;
	while (mem_offset < n)
	{
		*(unsigned char *)(destination + mem_offset)
			= *(unsigned char *)(source + mem_offset);
		mem_offset++;
	}
	return (destination);
}
