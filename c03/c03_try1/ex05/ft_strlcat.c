/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:28:43 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/08 18:39:20 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	char c; 
	int j = 0;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	printf("%s", dest);
	return dest;
}

int main(void)
{
	char src [4] ="toto";
	char dest [100] = "fjkdl";
	unsigned int size = 8;

	ft_strlcat(dest, src, size);
   return 0;	
}
