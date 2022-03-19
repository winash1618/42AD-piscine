/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:58:50 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/05 23:43:24 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
char *ft_strcpy(char *dest, char *src)
{
	int i; 

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	write(1 ,dest, i);
	return dest;
}

int main(void)
{
	char *dest, *src;

	src = "toto hdghdhfgh";
	ft_strcpy(dest, src);
	return (0);
}
