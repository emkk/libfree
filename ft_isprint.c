/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:07:27 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/25 19:55:31 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ismiscellanous(int c)
{
	return ((32 <= c && c <= 47)
			|| (58 <= c && c <= 64)
			|| (91 <= c && c <= 96)
			|| (123 <= c && c <= 126));
}

int		ft_isprint(int c)
{
	return (ft_isalnum(c) || ft_ismiscellanous(c));
}
