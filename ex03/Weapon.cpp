/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:07:23 by marvin            #+#    #+#             */
/*   Updated: 2025/11/20 17:07:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::weapon(): type("") {}

Weapon::Weapon(const std::string &type)
{
    this->type = type;
}

Weapon::~weapon() {}

const &Weapon::getType() const
{
    return (this->type);
}

void    Weapon::setType(const std::string &newType)
{
    this->type = newType;
}
