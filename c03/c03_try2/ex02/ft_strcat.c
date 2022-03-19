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
	printf("%s", dest);
	return dest;
}

int main(void)
{
	
	char src [4] = "toto";
	char dest[100] = "fjkdl";

	ft_strcat(dest,src);
	return (0);
}
