/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababdelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:23:31 by ababdelo          #+#    #+#             */
/*   Updated: 2022/10/30 08:50:10 by ababdelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	int	res;

	if (c >= 32 && c <= 126)
		res = 1;
	else
		res = 0;
	return (res);
}
