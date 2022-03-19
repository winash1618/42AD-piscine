/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:23:22 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/10 17:56:19 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	count;

	count = 0;
	while (*(dest))
	{
		count++;
		dest++;
	}
	while (*src)
	{
		if (! nb--)
			break ;
		*(dest++) = *(src++);
		count++;
	}
	*dest = '\0';
	return (dest - count);
}