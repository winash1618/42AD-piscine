/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 09:29:06 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/23 21:21:26 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int count;
	int *ptr;
	int *pt = 0;

	count = 0;
	ptr = (int *) malloc(max - min);
   	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
		count++;
	}
	ptr = ptr - count;

	*range = ptr;
	free(ptr);
	return (max - min);
}

int main(void)
{
	int *range;
	int pt = ft_ultimate_range(range, -5, 5);
	int i = 0;
	while(i < 10)
	{
		printf("%d ", &range);
		range++;
		i++;
	}
	return (0);

}
