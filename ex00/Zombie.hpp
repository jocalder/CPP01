/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:41 by marvin            #+#    #+#             */
/*   Updated: 2025/11/20 11:03:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>
#include <cctype>
#include <string>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string zombie);
	~Zombie();
	void	announce();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
#endif