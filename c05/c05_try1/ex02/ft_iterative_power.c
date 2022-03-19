/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:58:26 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/13 21:16:57 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int p;
	int i;

	p = 1;
	i = 1;
	if (power < 0 )
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while ( i<= power)
		{
			p = p * nb;
			i++;
		}
		return (p);
	}
}
int main(void)
{
	printf("%d", ft_iterative_power(0, 4));
	return (0);
}
