/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekorley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 05:40:00 by ekorley           #+#    #+#             */
/*   Updated: 2016/09/24 05:44:03 by ekorley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	void		*rest_of_s1;
	char		*result;

	rest_of_s1 = ft_memchr(s1, 0, 1000);
	result = (char *)ft_memcpy(rest_of_s1, s2, n);
	ft_strcat(result, "\0");
	return (result);
}