/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 09:45:51 by jmehmy            #+#    #+#             */
/*   Updated: 2026-01-20 09:45:51 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int i;
    int size;

    i = 0;
    size = 5;
    Zombie *horde = zombieHorde(size, "Zombie");
    while(i < size)
    {
        horde[i].announce();
        i++;
    }
    delete [] horde;
    return (0);
}
