/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achan <achan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 01:22:41 by achan             #+#    #+#             */
/*   Updated: 2016/12/01 08:12:41 by achan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_general.h"

char	*ft_strncat(char *s1, char const *s2, size_t len)
{
	char	*ret;

	ret = s1;
	while (*s1)
		s1++;
	while (len-- && *s2)
		*s1++ = *s2++;
	*s1 = 0;
	return (ret);
}
