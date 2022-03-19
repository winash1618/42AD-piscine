/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:44:29 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/13 08:39:36 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

/*	
int	main(void)
{
	char	*c;
	char	a[20] = "asdfgbvfed";
	char	b[] = "asdwerfvgbhnjm";
	c = ft_strncpy(a, b, 30);
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}*/
