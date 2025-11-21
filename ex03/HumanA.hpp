/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocalder <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:46:07 by jocalder          #+#    #+#             */
/*   Updated: 2025/11/21 14:46:08 by jocalder         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon  &weapon;
        std::string name;
    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();
        void    attack() const;
};

#endif
