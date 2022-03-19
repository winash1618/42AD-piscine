/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:15:20 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/06 23:56:10 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab( int *tab, int size)
{
	int	tab2[];
	int	i;

	tab2[] = {1, 2, 3, 4, 5};
	i = size - 1;
	while (i >= 0)
	{
		tab2[size - i] = *(tab + i);
		i--;
	}
}
