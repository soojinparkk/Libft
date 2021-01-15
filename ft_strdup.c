/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojpark <soojpark@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 20:41:59 by soojpark          #+#    #+#             */
/*   Updated: 2021/01/06 21:26:15 by soojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ret;
	int		i;

	i = -1;
	if (!(ret = (char *)malloc(ft_strlen(str) + 1)))
		return (NULL);
	while (str[++i] != '\0')
		ret[i] = str[i];
	ret[i] = '\0';
	return (ret);
}
