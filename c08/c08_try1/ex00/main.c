/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 06:11:40 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/15 06:18:50 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "ft.h"

int main(void)
{
	char str[] = "fjlsdfj";
	char str2[] = "fdshfasdjf";

	printf("%d", ft_strcmp(str, str2));
	return (0);
}
