/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojpark <soojpark@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 21:30:14 by soojpark          #+#    #+#             */
/*   Updated: 2021/01/09 15:06:28 by soojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*str_cpy(char *ret, const char *src, size_t ch)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		ret[ch++] = src[i++];
	ret[ch] = '\0';
	return (ret);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	if (!(ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	str_cpy(ret, s1, 0);
	str_cpy(ret, s2, ft_strlen(s1));
	return (ret);
}
