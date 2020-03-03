/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:48:43 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/04 00:50:19 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>

class Human
{
    private :

    std::string *_target; // can be usefull to point to target adrr and use his properties
        
    void meleeAttack(std::string const &target)
    {
        std::cout << "Melee attack against " << target << '\n';
    }
    void rangedAttack(std::string const &target)
    {
        std::cout << "Ranged attack against " << target << '\n';
    }
    void intimidatingShout(std::string const target)
    {
        std::cout << target << "is intimidated\n";
    }

    
    void *_rangedAttack; // hoe to fck i cp addr ?????????
    void *_intimidatingShout;
        
    public :

    Human();

    void action(std::string const &action_name, std::string const &target)
    {

        std::cout << "options: melee, range, other\n";
        
        void (*p[3])(std::string const &target);
        p[0] = _meleeAttack;
        p[1] = _rangedAttack;
        p[2] = _intimidatingShout;

        const char  *names[3];
        names[0] = "melee";
        names[1] = "range";
        names[2] = "other";

        int i = -1;
        while (names[i])
        {
            char cstr[action_name.size() + 1];
            std::copy(action_name.begin(), action_name.end(), cstr);
            if (std::strcmp(names[i], cstr))
                p[i](target);
        }
    }
};

#endif
