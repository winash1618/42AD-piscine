/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 01:36:09 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/14 01:36:32 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime(int nb)
{
    int k, i, j;

    k = 1;
    i = 2;
    j = 2;
    while (k != 0)
    {
        i = 2;
        j = 2;
        while (i * i < nb)
        {
            if (nb % i == 0)
            {
                k = 1;
            }
            else
            {
                j++;
            }
            i++;
        }
        if (j == i)
        {
            break;
        }
        nb++;
    }
    return (nb);
}

int main (void)
{
    printf("%d", ft_find_next_prime(212));
    return (0);
}
