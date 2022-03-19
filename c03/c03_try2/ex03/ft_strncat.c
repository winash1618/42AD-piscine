/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:23:22 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/08 10:32:04 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	char c;
	int j = 0;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb)
	{
		dest[i] =src[j];
		i++;
		j++;
	}
	printf("%s", dest);
	return dest;
}

int main(void)
{
	char src [4] = "toto";
	char dest[100] = "fjkdl";
	unsigned int b = 2;

	ft_strncat(dest,src,b);
	return (0);
}
