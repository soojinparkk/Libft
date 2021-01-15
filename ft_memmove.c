/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojpark <soojpark@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 22:45:00 by soojpark          #+#    #+#             */
/*   Updated: 2021/01/07 01:02:10 by soojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s2 > s1)
		ft_memcpy(s1, s2, n);
	else
		while (++i < n)
			((unsigned char *)s1)[n - i - 1] = ((unsigned char *)s2)[n - i - 1];
	return (s1);
}
