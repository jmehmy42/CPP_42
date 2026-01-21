/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 09:38:42 by jmehmy            #+#    #+#             */
/*   Updated: 2026-01-20 09:38:42 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* hZombie;

    hZombie = newZombie("HeapZombie");
    hZombie->announce();

    randomChump("StackZombie");

    delete hZombie;
    return (0);
}
