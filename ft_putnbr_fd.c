/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soojpark <soojpark@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 15:18:53 by soojpark          #+#    #+#             */
/*   Updated: 2021/01/08 15:30:09 by soojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cal_recur(long long n, int fd)
{
	char	c;

	if (n == 0)
		return ;
	cal_recur(n / 10, fd);
	c = n % 10 + 48;
	write(fd, &c, 1);
}

void		ft_putnbr_fd(int n, int fd)
{
	long long	tmp;
	char		c;

	tmp = n;
	if (tmp < 0)
	{
		tmp *= -1;
		write(fd, "-", 1);
	}
	cal_recur(tmp / 10, fd);
	c = tmp % 10 + 48;
	write(fd, &c, 1);
}
