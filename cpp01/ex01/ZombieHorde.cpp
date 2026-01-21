/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 09:46:19 by jmehmy            #+#    #+#             */
/*   Updated: 2026-01-20 09:46:19 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    Zombie *horde; 
    
    i = 0;
    if (N <= 0)
        return NULL;
    horde = new Zombie[N];
    while(i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return(horde);
}