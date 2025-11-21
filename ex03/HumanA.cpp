/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <jocalder@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:55:50 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/21 16:26:14 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: weapon(weapon), name(name) {}

HumanA::~HumanA() {}


void	HumanA::attack() const
{
	std::cout << this->name << ": attacks whit their: " << this->weapon.getType() << std::endl;
}
