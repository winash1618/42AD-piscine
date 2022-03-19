/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:23:22 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/10 14:51:19 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>


char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
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
	return (dest);
}
int main(void)
{
	char dest[15] = "hi hello";
	char src[] = "hey ihfd";
	char dest1[15] = "hi hello";
	char src1[] = "hey ihfd";

	ft_strncat(dest, src, 6);
	strncat(dest1, src1, 6);

	printf("%s    %s", dest, dest1);
	return (0);
}
