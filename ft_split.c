/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojpark <soojpark@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 20:31:25 by soojpark          #+#    #+#             */
/*   Updated: 2021/01/08 22:25:41 by soojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_num(const char *s, char c)
{
	size_t	i;
	size_t	len;
	int		ret;

	i = 0;
	len = ft_strlen(s) - 1;
	ret = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			if (i != 0 && i != len)
				ret++;
		i++;
	}
	return (ret);
}

static char		*str_cpy(char *ret, const char *s, int start, int end)
{
	int		i;

	i = 0;
	while (start < end)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}

static void		*mem_free(char **mem, int max)
{
	int		i;

	i = 0;
	while (i < max)
		free(mem[i++]);
	free(mem);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**ret;
	int		i;
	int		start;
	int		end;

	if (!s || !(ret = (char **)malloc(sizeof(char *) * (check_num(s, c) + 1))))
		return (NULL);
	i = 0;
	end = 0;
	while (s[end] != '\0')
	{
		if (s[end] != c)
		{
			start = end;
			while (s[end] != c && s[end] != '\0')
				end++;
			if (!(ret[i] = (char *)malloc(end - start + 1)))
				return (mem_free(ret, i));
			str_cpy(ret[i++], s, start, end);
		}
		else
			end++;
	}
	ret[i] = 0;
	return (ret);
}
