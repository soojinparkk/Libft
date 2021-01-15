/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojpark <soojpark@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 21:39:33 by soojpark          #+#    #+#             */
/*   Updated: 2021/01/09 15:04:36 by soojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check(const char *b, const char *l, size_t i, size_t len)
{
	size_t	j;

	j = 0;
	while (l[j] != '\0' && i < len)
	{
		if (b[i++] == l[j++])
			continue;
		return (0);
	}
	if (l[j] != '\0')
		return (0);
	return (1);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
			if (check(big, little, i, len))
				return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
