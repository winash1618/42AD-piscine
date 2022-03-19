/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 01:36:09 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/18 00:38:16 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long long int	i;
	long long int	nbr;

	nbr = nb;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i * i <= nbr)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}
/*
int main (void)
{
	printf("%d -> %d\n", -2516, ft_find_next_prime(-2516));
        printf("%d -> %d\n", 0, ft_find_next_prime(0));
        printf("%d -> %d\n", 1, ft_find_next_prime(1));
        printf("%d -> %d\n", 2, ft_find_next_prime(2));
        printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
        printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
        printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
        printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
        printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
        printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
        printf("%d -> %d\n", 58368, ft_find_next_prime(58368));
        printf("%d -> %d\n", 381954, ft_find_next_prime(381954));
        printf("%d -> %d\n", 384019, ft_find_next_prime(384019));
        printf("%d -> %d\n", 150051, ft_find_next_prime(150051));
        printf("%d -> %d\n", 97318, ft_find_next_prime(97318));
        printf("%d -> %d\n", 242732, ft_find_next_prime(242732));
        printf("%d -> %d\n", 311646, ft_find_next_prime(311646));
        printf("%d -> %d\n", 112698, ft_find_next_prime(112698));
        printf("%d -> %d\n", 335421, ft_find_next_prime(335421));
        printf("%d -> %d\n", 331849, ft_find_next_prime(331849));
        printf("%d -> %d\n", 22091, ft_find_next_prime(22091));
        printf("%d -> %d\n", 67680, ft_find_next_prime(67680));
        printf("%d -> %d\n", 367201, ft_find_next_prime(367201));
        printf("%d -> %d\n", 289379, ft_find_next_prime(289379));
        printf("%d -> %d\n", 15977, ft_find_next_prime(15977));
        printf("%d -> %d\n", 387693, ft_find_next_prime(387693));
        printf("%d -> %d\n", 57968, ft_find_next_prime(57968));
        printf("%d -> %d\n", 149628, ft_find_next_prime(149628));
        printf("%d -> %d\n", 63614, ft_find_next_prime(63614));
        printf("%d -> %d\n", 87174, ft_find_next_prime(87174));
        printf("%d -> %d\n", 284298, ft_find_next_prime(284298));
        printf("%d -> %d\n", 91281, ft_find_next_prime(91281));
        printf("%d -> %d\n", 415893,ft_find_next_prime(415893));
        printf("%d -> %d\n", 296217, ft_find_next_prime(296217));
        printf("%d -> %d\n", 336537, ft_find_next_prime(336537));
        printf("%d -> %d\n", 94366, ft_find_next_prime(94366));
        printf("%d -> %d\n", 293024, ft_find_next_prime(293024));
        printf("%d -> %d\n", 353965, ft_find_next_prime(353965));
        printf("%d -> %d\n", 224431, ft_find_next_prime(224431));
        printf("%d -> %d\n", 85175, ft_find_next_prime(85175));
        printf("%d -> %d\n", 162489, ft_find_next_prime(162489));
        printf("%d -> %d\n", 1211, ft_find_next_prime(1211));
        printf("%d -> %d\n", 6844, ft_find_next_prime(6844));
        printf("%d -> %d\n", 3775, ft_find_next_prime(3775));
        printf("%d -> %d\n", 370379, ft_find_next_prime(370379));
        printf("%d -> %d\n", 376524, ft_find_next_prime(376524));
        printf("%d -> %d\n", 333009, ft_find_next_prime(333009));
        printf("%d -> %d\n", 151252, ft_find_next_prime(151252));
        printf("%d -> %d\n", 268501, ft_find_next_prime(268501));
        printf("%d -> %d\n", 162525, ft_find_next_prime(162525));
        printf("%d -> %d\n", 74462, ft_find_next_prime(74462));
        printf("%d -> %d\n", 64229, ft_find_next_prime(64229));
        printf("%d -> %d\n", 345832, ft_find_next_prime(345832));
        printf("%d -> %d\n", 218236, ft_find_next_prime(218236));
        printf("%d -> %d\n", 45291, ft_find_next_prime(45291));
        printf("%d -> %d\n", 407678, ft_find_next_prime(407678));
        printf("%d -> %d\n", 178432, ft_find_next_prime(178432));
        printf("%d -> %d\n", 167174, ft_find_next_prime(167174));
        printf("%d -> %d\n", 299784, ft_find_next_prime(299784));
        printf("%d -> %d\n", 61705, ft_find_next_prime(61705));
        printf("%d -> %d\n", 211734, ft_find_next_prime(211734));
        printf("%d -> %d\n", 27417, ft_find_next_prime(27417));
        printf("%d -> %d\n", 19741, ft_find_next_prime(19741));
        printf("%d -> %d\n", 235654, ft_find_next_prime(235654));
        printf("%d -> %d\n", 310574, ft_find_next_prime(310574));
        printf("%d -> %d\n", 390877, ft_find_next_prime(390877));
        printf("%d -> %d\n", 196400, ft_find_next_prime(196400));
        printf("%d -> %d\n", 258353, ft_find_next_prime(258353));
        printf("%d -> %d\n", 120118, ft_find_next_prime(120118));
        printf("%d -> %d\n", 257848, ft_find_next_prime(257848));
        printf("%d -> %d\n", 95035, ft_find_next_prime(95035));
        printf("%d -> %d\n", 86863, ft_find_next_prime(86863));
        printf("%d -> %d\n", 271187, ft_find_next_prime(271187));
        printf("%d -> %d\n", 286558, ft_find_next_prime(286558));
        printf("%d -> %d\n", 252133, ft_find_next_prime(252133));
        printf("%d -> %d\n", 250213, ft_find_next_prime(250213));
        printf("%d -> %d\n", 28518, ft_find_next_prime(28518));
        printf("%d -> %d\n", 100712, ft_find_next_prime(100712));
        printf("%d -> %d\n", 151402, ft_find_next_prime(151402));
        printf("%d -> %d\n", 422461, ft_find_next_prime(422461));
        printf("%d -> %d\n", 84336, ft_find_next_prime(84336));
        printf("%d -> %d\n", 298362, ft_find_next_prime(298362));
        printf("%d -> %d\n", 345749, ft_find_next_prime(345749));
        printf("%d -> %d\n", 27012, ft_find_next_prime(27012));
        printf("%d -> %d\n", 31119, ft_find_next_prime(31119));
        printf("%d -> %d\n", 67484, ft_find_next_prime(67484));
        printf("%d -> %d\n", 341420, ft_find_next_prime(341420));
        printf("%d -> %d\n", 179117, ft_find_next_prime(179117));
        printf("%d -> %d\n", 294833, ft_find_next_prime(294833));
        printf("%d -> %d\n", 353779, ft_find_next_prime(353779));
        printf("%d -> %d\n", 119221, ft_find_next_prime(119221));
        printf("%d -> %d\n", 348606, ft_find_next_prime(348606));
        printf("%d -> %d\n", 216511, ft_find_next_prime(216511));
        printf("%d -> %d\n", 272326, ft_find_next_prime(272326));
        printf("%d -> %d\n", 373703, ft_find_next_prime(373703));
        printf("%d -> %d\n", 7627, ft_find_next_prime(7627));
        printf("%d -> %d\n", 73169, ft_find_next_prime(73169));
        printf("%d -> %d\n", 91090, ft_find_next_prime(91090));
        printf("%d -> %d\n", 374748, ft_find_next_prime(374748));
        printf("%d -> %d\n", 140254, ft_find_next_prime(140254));
        printf("%d -> %d\n", 149984, ft_find_next_prime(149984));
        printf("%d -> %d\n", 106468, ft_find_next_prime(106468));
        printf("%d -> %d\n", 190438, ft_find_next_prime(190438));
        printf("%d -> %d\n", 412650, ft_find_next_prime(412650));
        printf("%d -> %d\n", 240110, ft_find_next_prime(240110));
        printf("%d -> %d\n", 343023, ft_find_next_prime(343023));
        printf("%d -> %d\n", 369381, ft_find_next_prime(369381));
        printf("%d -> %d\n", 28667, ft_find_next_prime(28667));
        printf("%d -> %d\n", 396286, ft_find_next_prime(396286));
        printf("%d -> %d\n", 288767, ft_find_next_prime(288767));	
}*/