/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:44:29 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/05 23:53:21 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while ( i<n)
	{
		dest[i] = src[i];
		i++;
	}
	write( 1 , dest , i);
	
	return dest;
}

int main(void)
{
	char *dest, *src;

	src = "toto";
	ft_strncpy(dest, src, 2);
	return (0);
}
