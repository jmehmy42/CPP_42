/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 09:40:12 by jmehmy            #+#    #+#             */
/*   Updated: 2026-01-20 09:40:12 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName)
{
    _name = zombieName;
    std::cout << "Constructor Zombie " << _name << " is created" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Destructor Zombie " << _name << " is destroyed" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}