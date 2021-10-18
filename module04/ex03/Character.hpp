/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysaito <ysaito@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:43:06 by ysaito            #+#    #+#             */
/*   Updated: 2021/09/13 20:32:46 by ysaito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
public:
	Character(std::string name);
	Character(const Character  &other);
	Character &operator=(const Character &other);
	virtual ~Character();
	std::string const & getName() const;
	AMateria *getMateriaInventry(int idx) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
private:
	AMateria	*materia_inventory_[4];
	std::string	name_;
};

#endif
