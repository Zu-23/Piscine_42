/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhaddoum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 08:29:03 by zhaddoum          #+#    #+#             */
/*   Updated: 2021/08/13 08:50:49 by zhaddoum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_strrev(char *str)
{
	int i;
	int len;
	int sw;

	i = 0;
	len = 0;
	while (str[len])
		len++;
	while (str[i])
	{
		sw = str[i];
		str[i] = str[len];
		str[len] = str[i];
		len--;
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "hello world";
	printf("%s",ft_strrev(str));
}	
