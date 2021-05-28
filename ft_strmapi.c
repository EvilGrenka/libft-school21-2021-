/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 23:32:03 by rnoriko           #+#    #+#             */
/*   Updated: 2021/04/30 16:00:22 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmpstr;
	size_t	i;

	if (!s)
		return (NULL);
	tmpstr = ft_strdup(s);
	if (!tmpstr)
		return (NULL);
	i = 0;
	while (tmpstr[i])
	{
		tmpstr[i] = (*f)(i, tmpstr[i]);
		i++;
	}
	return (tmpstr);
}
