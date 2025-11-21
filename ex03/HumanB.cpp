/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:56:42 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/21 16:45:25 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
	: weapon(NULL), name(name) {}

HumanB::~HumanB() {}

void	HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void	HumanB::attack() const
{
	if (this->name.empty())
		std::cout << this->name << ": attacks with their: " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << ": has no weapon to attack." << std::endl;
}
