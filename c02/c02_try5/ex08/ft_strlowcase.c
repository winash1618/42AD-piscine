/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 00:28:28 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/13 09:56:10 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
		i++;
	}
	str -= i;
	return (str);
}
