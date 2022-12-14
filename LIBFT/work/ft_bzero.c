/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:35:35 by ababdelo          #+#    #+#             */
/*   Updated: 2022/10/30 08:49:52 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void	*s, size_t n)
{
	char	*c;
	size_t	index;

	index = 0;
	c = s;
	while (index < n)
	{
		c[index] = 0;
		index++;
	}
}
