/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:51:47 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 16:00:28 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp_s;

	temp_s = (char *)s;
	while (*temp_s)
		temp_s++;
	if ((char)c == '\0')
		return (temp_s);
	while (temp_s != s)
		if (*(--temp_s) == (char)c)
			return (temp_s);
	return (NULL);
}
