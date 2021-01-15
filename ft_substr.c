/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojpark <soojpark@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 22:01:19 by soojpark          #+#    #+#             */
/*   Updated: 2021/01/07 00:24:50 by soojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	str_len;
	char	*ret;

	if (!s)
		return (NULL);
	if (!(ret = (char *)malloc(len + 1)))
		return (NULL);
	i = 0;
	str_len = ft_strlen(s);
	while (i < len && start < str_len)
		ret[i++] = s[start++];
	ret[i] = '\0';
	return (ret);
}
