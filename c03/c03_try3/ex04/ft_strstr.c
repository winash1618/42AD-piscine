/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:33:13 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/08 10:49:12 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find)
{
	int i;
	int k = 0;
	int j = 0;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			str[j] = to_find[j];
			i++;
			j++;
			if(to_find[j] == '\0')
			{
				break;
			}
		}
		i++;
	}
	while (str[j] != '\0')
	{
		str[j] = '\0';
		j++;	
	}
	return str;
}
int main()
{
	char s1[100] = "This is ";
	char s2[] = "is";
	size_t i = 2;
	char *s = ft_strstr(s1, s2);
	printf("%s\n", s);
	
	i = 2;
	char str1[100] = "This is ", str2[] = "isnt";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
  char *t = strstr(str1, str2);

   puts(t);
   puts(str2);


	return 0;
}	

