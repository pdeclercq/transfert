/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yforeau <yforeau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 01:31:12 by yforeau           #+#    #+#             */
/*   Updated: 2018/10/09 01:31:15 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	c;

	c = 97;
	while (c < 123)
		ft_putchar(c++);
}