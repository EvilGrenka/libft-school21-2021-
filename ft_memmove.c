/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 16:45:19 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 16:00:01 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;

	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if (from == to || len == 0)
		return (dst);
	if (to < from)
		while (len--)
			*to++ = *from++;
	else
	{
		to += len;
		from += len;
		while (len--)
			*--to = *--from;
	}
	return (dst);
}
