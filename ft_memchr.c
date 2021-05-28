/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 11:29:09 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 15:59:56 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*tmp_s;
	size_t	limit;

	tmp_s = (void *)s;
	limit = 0;
	while (limit < n)
	{
		if (*(unsigned char *)tmp_s == (unsigned char)(c))
			return (tmp_s);
		tmp_s++;
		limit++;
	}
	return (NULL);
}
