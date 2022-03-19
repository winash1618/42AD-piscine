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
#include <string.h>
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
	nb = nb + i;
	while (src[j] != '\0' && i < nb)
	{
		dest[i] = src[j];
                i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	char s1[100] = "This is ";
	char s2[] = "programiz.com";
	unsigned int i = 2;
	ft_strncat(s1, s2, 2);
	printf("%s\n", s1);
	
	char str1[100] = "This is ", str2[] = "programiz.com";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strncat(str1, str2, i);

   puts(str1);
   puts(str2);


	return 0;
}	
