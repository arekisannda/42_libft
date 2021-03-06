/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achan <achan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:44:24 by achan             #+#    #+#             */
/*   Updated: 2016/12/03 07:23:16 by achan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_general.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (!s)
		return ;
	if (!(*f))
		return ;
	while (*s)
	{
		(*f)(s);
		s++;
	}
}
