/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yforeau <yforeau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:55:29 by yforeau           #+#    #+#             */
/*   Updated: 2018/11/04 19:21:01 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c_conversion.h"

char	*c_conversion(va_list cur, va_list ref, t_params *conv)
{
	size_t		l;
	t_uchar		nb;
	char		*str;

	if (!conv->arg)
		fetch(cur, 0, T_CHAR | C_UNSIGNED, (void *)(&nb));
	else
		fetch(ref, conv->arg, T_CHAR | C_UNSIGNED, (void *)(&nb));
	l = nb < 0x80 ? 2 : 3;
	str = ft_strnew(sizeof(char) * l);
	if (l == 2)
		*str = (char)nb;
	else
	{
		str[0] = 0xc0 | (nb >> 6);
		str[1] = 0x80 | (nb & 0x3f);
	}
	str[l - 1] = 0;
	return (str);
}
