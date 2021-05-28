/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 12:47:19 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 16:00:18 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t dstsize)
{
	size_t	l_destination;
	size_t	l_source;
	size_t	i_dest;
	size_t	i_src;

	l_destination = ft_strlen(destination);
	l_source = ft_strlen(source);
	i_dest = l_destination;
	i_src = 0;
	if (dstsize > 0 && l_destination < dstsize - 1)
	{
		while (source[i_src] && l_destination + i_src < dstsize - 1)
		{
			destination[i_dest] = source[i_src];
			i_dest++;
			i_src++;
		}
		destination[i_dest] = '\0';
	}
	if (l_destination >= dstsize)
		l_destination = dstsize;
	return (l_destination + l_source);
}
