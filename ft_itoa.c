/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojpark <soojpark@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 23:03:54 by soojpark          #+#    #+#             */
/*   Updated: 2021/01/07 23:53:40 by soojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_num(long long n)
{
	int		ret;

	ret = 1;
	if (n < 0)
		ret++;
	while (n /= 10)
		ret++;
	return (ret);
}

static void	cal_num(char *ret, long long n)
{
	int		len;

	len = check_num(n);
	if (n < 0)
	{
		n *= -1;
		ret[0] = '-';
	}
	ret[len] = '\0';
	if (n == 0)
		ret[--len] = '0';
	while (n)
	{
		ret[--len] = n % 10 + 48;
		n /= 10;
	}
}

char		*ft_itoa(int n)
{
	long long	tmp;
	char		*ret;

	tmp = n;
	if (!(ret = (char *)malloc(check_num(tmp) + 1)))
		return (NULL);
	cal_num(ret, tmp);
	return (ret);
}
