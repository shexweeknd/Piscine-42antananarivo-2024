/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brouillon.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 01:03:48 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/24 01:04:48 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main(void)
{
    char    s1[] = "aze";
    char    s2[] = "az";
    unsigned int n;
    int ret;

    n = 6;
    ret = strncmp(s1, s2, n);
    printf("%d\n", ret);
    return (0);
}

