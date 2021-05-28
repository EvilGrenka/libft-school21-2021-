/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 11:45:57 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 15:59:58 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	limit;
	void	*temp_s1;
	void	*temp_s2;

	temp_s1 = (void *)s1;
	temp_s2 = (void *)s2;
	limit = 0;
	while (limit++ < n)
	{
		if (*(unsigned char *)temp_s1 != *(unsigned char *)temp_s2)
			return (*(unsigned char *)temp_s1 - *(unsigned char *)temp_s2);
		temp_s1++;
		temp_s2++;
	}
	return (0);
}
