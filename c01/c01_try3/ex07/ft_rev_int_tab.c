/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:15:20 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/07 18:34:53 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_rev_int_tab( int *tab, int size)
{
    int    tab2[size];
    int    i;

    i = size - 1;
    while (i >= 0)
    {
        tab2[size - i - 1] = *(tab + i);
        i--;
    }
    i=0;
    while (i < size)
    {
      tab[i] = tab2[i];
      i++;
    }
}


int main(void)
{
    int t[] = {1,7,6,4,3};
    int size = 5;
    ft_rev_int_tab(t, size);
    return (0);
}
