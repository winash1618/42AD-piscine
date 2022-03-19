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
#include <unistd.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	char c; 
	unsigned int j = 0;
	unsigned int k = 0;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		k++;
	}	
	k = k + i;
	while (src[i] != '\0' && i < size-1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	printf("%s", dest);

	return k;
}

int main()
{
	char src[] = "Hello there, Venus";
	char dest[19] = "Ayo, ";
	unsigned int t;
	t = (ft_strlcat(dest, src, 12));
	printf("\nCopied '%s' into '%s', length %d\n",
			src,
			dest,
			t);
	return 0;
}

