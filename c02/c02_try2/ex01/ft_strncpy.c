/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:44:29 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/11 01:07:20 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    i = 0;
    while ( i<n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(void)
{
    char dest[] = "fjdf", src[] = "fjdsf";

    ft_strncpy(dest, src, 5);
    return (0);
}
