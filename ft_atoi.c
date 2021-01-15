/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojpark <soojpark@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 20:57:48 by soojpark          #+#    #+#             */
/*   Updated: 2021/01/09 14:37:08 by soojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_isspace(const char *str, int i)
{
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		ret;

	sign = 1;
	ret = 0;
	i = check_isspace(str, 0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && str[i] <= '9')
			ret = (ret * 10) + (str[i++] - '0');
		else
			break ;
	}
	ret *= sign;
	return (ret);
}
