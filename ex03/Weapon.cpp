/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:45:44 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/21 14:45:46 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
    this->type = type;
}

Weapon::~Weapon() {}

const std::string   &Weapon::getType() const
{
    return (this->type);
}

void    Weapon::setType(const std::string &newType)
{
    this->type = newType;
}
