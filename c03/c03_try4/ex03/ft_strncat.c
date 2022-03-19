/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:23:22 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/09 19:11:12 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	char	c;
	int		j;

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
