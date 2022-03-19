/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:25:26 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/08 10:19:43 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char *ft_strcat(char *dest, char *src)
{
	
	int i;
	char c;
	int j = 0;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	char s1[10] = "This is ";
	char s2[] = "programiz.com";
	int i;
	ft_strcat(s1, s2);
	printf("%s\n", s1);


	char str1[10] = "This is ", str2[] = "programiz.com";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, str2);

   puts(str1);
   puts(str2);


	return 0;
}	

