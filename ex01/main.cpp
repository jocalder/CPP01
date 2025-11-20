/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:52:23 by marvin            #+#    #+#             */
/*   Updated: 2025/11/20 14:52:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 6;
    Zombie *horde = zombieHorde(N, "Pepe");
    for (int i = 0; i < N; ++i)
    {
        horde[i].announce();
        std::cout << i << std::endl;
    }
    delete[] horde;
    return (0);
}