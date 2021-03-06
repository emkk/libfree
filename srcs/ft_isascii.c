/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 18:04:13 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/23 18:04:59 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks to see if a character is a valid ascii value.
*/

int		ft_isascii(int c)
{
	return ((0 <= c) && (c <= 127));
}
