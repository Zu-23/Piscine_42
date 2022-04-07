/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:14:35 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/08/13 12:15:38 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char *ft_strdup(const char *s)
{
	int	i;
	int len;
	char *ptr;

	i = 0;
	len = 0;

	while (s[len])
		len++;
	p = (char *) malloc(len * sizeof(char));
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	return p;
}
			
