/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:20:31 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 16:00:19 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t dstsize)
{
	size_t	srclen;

	if (!source)
		return (0);
	srclen = ft_strlen(source);
	if (srclen + 1 < dstsize)
	{
		ft_memcpy(destination, source, srclen + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(destination, source, dstsize - 1);
		destination[dstsize - 1] = '\0';
	}
	return (srclen);
}
