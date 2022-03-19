/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:45:18 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/14 14:26:22 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ip = NULL;
	int *sp;
	int i;

	i = 0;
	sp = (int *) malloc((max - min)*sizeof(int));
	if (max <= min)
	{
		return (ip); 
	}
	else 
	{
		while (min < max)
		{
			sp[i]  = min;
			min++;
			printf("%d", sp[i]);
			i++;
		}
	}
	return (sp);
}

int main(void)
{
	ft_range(41, 14);
	// printf("%d", c[1]);
	return (0);
}
