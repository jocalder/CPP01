/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:47:50 by marvin            #+#    #+#             */
/*   Updated: 2025/11/20 14:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string zombieName);
    ~Zombie();
    void    announce();
    void    setName(std::string zombie);
};

Zombie* zombieHorde(int N, std::string name);

#endif