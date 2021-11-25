/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:45:41 by abhousse          #+#    #+#             */
/*   Updated: 2021/11/16 22:15:27 by abhousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_number(const char *s, char c)
{
	int		number;
	int		i;

	number = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] && s[i + 1] == c)
			number++;
		i++;
	}
	i--;
	if (i >= 0 && s[i] != c)
		number++;
	return (number);
}

char	**free_tab(char **tab, int n)
{
	while (--n >= 0)
		free(tab[n]);
	free(tab);
	return (0);
}

char	*def_word(char *s, int *len, char c)
{
	int		count;
	char	*temp;
	int		i;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	temp = &s[i];
	while (s[i] != '\0' && s[i] != c)
	{
		count++;
		i++;
	}
	*len = count;
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	int		words;
	char	*temp;
	char	**split;

	if (!s)
		return (0);
	words = word_number(s, c);
	temp = (char *)s;
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (0);
	len = 0;
	i = 0;
	while (i < words)
	{
		temp = def_word(temp + len, &len, c);
		split[i] = (char *)malloc(len + 1);
		if (!split[i])
			return (free_tab(split, i));
		ft_strlcpy (split[i++], temp, len + 1);
	}
	split[i] = NULL;
	return (split);
}
