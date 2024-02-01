/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 23:22:15 by hramaros          #+#    #+#             */
/*   Updated: 2024/01/27 23:22:20 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_hash_table.h"

#define TABLE_SIZE 1000000

/*fonction de hashage*/
unsigned long int ft_hash(char *key)
{
    unsigned long int i;
    unsigned long int sum;
    
    i = 0;
    sum = 0;
    while (key[i])
    {
        sum += key[i];
        i++;
    }
    return (sum % TABLE_SIZE);
}

dico *find_hash(dico *table, char *key)
{
    unsigned long i;

    i = ft_hash(key);
    return (&table[i]);
}

void ft_set_table(dico *hash_table, char *key, char *value)
{
    unsigned long int i;
    
    if (!key || !value)
        printf("Erreur: {key, value} undefined !\n");

    dico element;
    element.key = key;
    element.value = value;

    i = ft_hash(key);

    hash_table[i] = element;
    if (!hash_table[i].key || !hash_table[i].value)
        printf("Erreur: lors de l'ajout a la table de hashage\n");    
    return ;
}

/*testeur*/
/*
int main(void)
{
    dico *hash_table;
    hash_table = malloc(sizeof(dico) * TABLE_SIZE);

    ft_set_table(hash_table, "10", "dix");

    printf("%s\n", hash_table[ft_hash("10")].value);
    free(hash_table);
    return (0);
}
*/
