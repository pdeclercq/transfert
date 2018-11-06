/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yforeau <yforeau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 21:09:56 by yforeau           #+#    #+#             */
/*   Updated: 2018/11/04 19:11:45 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "s_conversion.h"

char	*s_conversion(va_list cur, va_list ref, t_params *conv)
{
	char	*str;

	if (!conv->arg)
		fetch(cur, 0, T_CHAR_P, (void *)(&str));
	else
		fetch(ref, conv->arg, T_CHAR_P, (void *)(&str));
	if (!str && (conv->precision > 5 || conv->precision < 0))
		return (ft_strdup("(null)"));
	else if (!str)
		return (ft_strdup(""));
	if (conv->precision < 0)
		return (ft_strdup(str));
	return (ft_strsub(str, 0, conv->precision));
}
