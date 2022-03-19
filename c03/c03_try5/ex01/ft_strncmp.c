/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 10:16:54 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/09 18:53:02 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	c_strncmp(char *s1, char *s2, unsigned int n)
{
	int	j;

	j = 0;
	while (j < n)
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		s1++;
		s2++;
		j++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (*s1 != '\0' || *s2 != '\0')
	{
		s1++;
		s2++;
		i++;
	}
	s1 = s1 - i;
	s2 = s2 - i;
	if (n > i)
	{
		return (1);
	}
	else if (i >= n)
	{
		return (c_strncmp(s1, s2, n));
	}
	return (0);
}
