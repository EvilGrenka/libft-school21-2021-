/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 22:04:20 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 16:01:03 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	mem_offset;

	mem_offset = 0;
	while (mem_offset < n)
	{
		*(unsigned char *)(s + mem_offset) = 0;
		mem_offset++;
	}
}
