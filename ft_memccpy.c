/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 15:22:28 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 15:59:55 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	size_t	l;

	l = 0;
	while (l < n)
	{
		*(unsigned char *)(destination + l) = *(unsigned char *)(source + l);
		if (*(unsigned char *)(source + l) == (unsigned char)c)
			return (destination + (++l));
		l++;
	}
	return (NULL);
}
