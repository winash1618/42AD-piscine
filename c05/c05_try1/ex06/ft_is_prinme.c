/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prinme.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:13:09 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/13 23:59:29 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i, k;

	i = 2;
	k = 0;
	while (i * i < nb)
	{
		if (nb % i == 0)
		{
			k++;
		}
		if (i >= 46330)
		{
			break;
		}
		i++;
	}
	if(k > 0)
		return (0);
	else
		return (1);
}

int main(void)
{
	printf("%d", ft_is_prime(37));
	return (0);
}
