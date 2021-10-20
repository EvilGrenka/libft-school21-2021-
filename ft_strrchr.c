/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:51:47 by rnoriko           #+#    #+#             */
/*   Updated: 2021/10/20 04:02:09 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*end_s;

	end_s = (char *)s;
	while (*end_s)
		end_s++;
	if (*end_s == (char)c)
		return (end_s);
	while (end_s-- != s)
		if (*end_s == (char)c)
			return (end_s);
	return (NULL);
}
