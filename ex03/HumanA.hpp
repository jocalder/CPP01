/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:19:10 by marvin            #+#    #+#             */
/*   Updated: 2025/11/20 17:19:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon  &weapon;
        std::string name
    public:
        HumanA(const std::string &name, Weapon &weapon)
        ~HumanA();
        void    attack() const;
};