/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:16:54 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/10 17:54:44 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char	*s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && n != 0)
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
				return (*s1 - *s2);
			if (*s1 < *s2)
				return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (*s2 && n != 0)
		return (-*s2);
	return (0);
}
