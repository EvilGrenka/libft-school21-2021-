/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 00:09:05 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 16:00:25 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*temp_haystack;
	size_t	len_needle;
	size_t	j;
	size_t	i;

	temp_haystack = (char *)haystack;
	len_needle = ft_strlen(needle);
	if (!len_needle)
		return (temp_haystack);
	if (ft_strlen(haystack) < len_needle || len < len_needle)
		return (NULL);
	i = 0;
	while (temp_haystack[i] && i <= len - len_needle)
	{
		j = 0;
		while (needle[j] && needle[j] == temp_haystack[i + j])
			j++;
		if (j == len_needle)
			return (&temp_haystack[i]);
		i++;
	}
	return (NULL);
}
