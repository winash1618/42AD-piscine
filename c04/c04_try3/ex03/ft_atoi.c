/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:52:46 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/17 10:47:53 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char	*str)
{
	int	num;
	int	count_minus;

	num = 0;
	count_minus = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\f'
		|| *str == '\r' || *str == '\v' )
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			count_minus = -count_minus;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * count_minus);
}
/*
int	main(void)
{
	char	a[] = " ---+---+12 s34ab567";

	printf("%d", ft_atoi(a));
}*/
