/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 14:21:30 by rnoriko           #+#    #+#             */
/*   Updated: 2021/05/01 20:02:23 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_get_count_words(char const *s, char c)
{
	char			*tmps;
	unsigned int	count_words;

	if (!*s)
		return (0);
	tmps = (char *)s;
	count_words = 0;
	while (*tmps && *tmps == c)
		tmps++;
	while (*tmps)
	{
		if (*tmps == c)
		{
			count_words++;
			while (*tmps && *tmps == c)
				tmps++;
			continue ;
		}
		tmps++;
	}
	if (*(--tmps) != c)
		count_words++;
	return (count_words);
}

static void	ft_get_word(char **src_str, unsigned int *word_len, char c)
{
	unsigned int	i;

	*src_str += *word_len;
	*word_len = 0;
	i = 0;
	while (**src_str == c && **src_str)
		(*src_str)++;
	while ((*src_str)[i])
	{
		if ((*src_str)[i] == c)
			return ;
		(*word_len)++;
		i++;
	}
}

static char	**ft_clear_after_alloc(char **arr_words)
{
	char	**tmp;

	if (!arr_words)
		return (NULL);
	tmp = arr_words;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(arr_words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	char			**arr_words;
	char			*src_str;
	unsigned int	word_len;

	if (!s)
		return (NULL);
	arr_words = (char **)malloc(sizeof(char *)
			* (ft_get_count_words(s, c) + 1));
	if (!arr_words)
		return (NULL);
	i = 0;
	src_str = (char *)s;
	word_len = 0;
	while (i < ft_get_count_words(s, c))
	{
		ft_get_word(&src_str, &word_len, c);
		arr_words[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!arr_words[i])
			return (ft_clear_after_alloc(arr_words));
		ft_strlcpy(arr_words[i], src_str, word_len + 1);
		i++;
	}
	arr_words[i] = NULL;
	return (arr_words);
}
