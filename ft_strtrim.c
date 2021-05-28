/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:02:39 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 16:00:51 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search_character(char character, char const *set)
{
	char	*tmpstr;

	tmpstr = (char *)set;
	while (*tmpstr)
		if (*tmpstr++ == character)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmpstr;
	size_t	begin;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	begin = 0;
	while (s1[begin] && ft_search_character(s1[begin], set))
		begin++;
	end = ft_strlen(s1);
	while (end > begin && ft_search_character(s1[end - 1], set))
		end--;
	tmpstr = (char *)malloc(sizeof(char) * (end - begin + 1));
	if (!tmpstr)
		return (NULL);
	i = 0;
	while (begin < end)
		tmpstr[i++] = s1[begin++];
	tmpstr[i] = '\0';
	return (tmpstr);
}
