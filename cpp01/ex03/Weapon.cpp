/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-01-20 21:20:13 by jmehmy            #+#    #+#             */
/*   Updated: 2026-01-20 21:20:13 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
}

Weapon::~Weapon(void)
{

}
const std::string &Weapon::getType(void) const
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}