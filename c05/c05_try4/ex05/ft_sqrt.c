/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:49:31 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/17 09:40:28 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long int	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}
/*
int main(void)
{
        printf("sqrt of %d is %d\n", -2225, ft_sqrt(-2225));
        printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
        printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
        printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
        printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
        printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
        printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
        printf("sqrt of %d is %d\n", 606784689, ft_sqrt(606784689));
        printf("sqrt of %d is %d\n", 1020169896, ft_sqrt(1020169896));
        printf("sqrt of %d is %d\n", 726949444, ft_sqrt(726949444));
        printf("sqrt of %d is %d\n", 2050088481, ft_sqrt(2050088481));
        printf("sqrt of %d is %d\n", 590441401, ft_sqrt(590441401));
        printf("sqrt of %d is %d\n", 885623330, ft_sqrt(885623330));
        printf("sqrt of %d is %d\n", 1348652176, ft_sqrt(1348652176));
        printf("sqrt of %d is %d\n", 175780204, ft_sqrt(175780204));
        printf("sqrt of %d is %d\n", 1516868809, ft_sqrt(1516868809));
        printf("sqrt of %d is %d\n", 1536191559, ft_sqrt(1536191559));
}*/