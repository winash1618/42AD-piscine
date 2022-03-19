/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 08:59:31 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/07 10:16:04 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0') 
{
		if (*s1 > *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s2 > *s1)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	} 
	return (0);
}

int main(void)
{
	char s1[] = "abcd";
	char s2[] = "abddd";
	int i = ft_strcmp(s1, s2);
	printf("%d", i);
	return (0);
}
