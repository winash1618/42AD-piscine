/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:28:43 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/10 17:48:55 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		k++;
	}	
	k = i + k;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (k);
}

int main(void)
{
	char s1[100] = "Hello hiisfd";
	char s2[] = "Hello me";
	char sr1[100] = "Hello hiisfd";
	char sr2[] = "Hello me";
	printf("%u\t", ft_strlcat(s1, s2, 100));
	printf("%lu", strlcat(sr1, sr2, 100));
	printf("%s %s", s1, sr1);
	return 0;
	}
