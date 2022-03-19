/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:33:13 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/10 14:58:24 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h>


int	cfinder(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j + 1] == '\0')
			{
				k = i - j;
				break ;
			}
		}
		if (k > 0)
		{
			break ;
		}
		i++;
	}
	return (k);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = cfinder(str, to_find);
	while (str[k] != '\0')
	{
		str[i] = str[k];
		k++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main(void)
{
	char dest[15] = "hi hello";
	char src[] = "he";
	char dest1[15] = "hi hello";
	char src1[] = "he";

	ft_strstr(dest, src);
	strstr(dest1, src1);

	printf("%s\n%s", dest, dest1);
	return (0);
}

