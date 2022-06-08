/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:05:23 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 12:43:03 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{}

SpellBook::~SpellBook(void)
{
	if (this->spellBook.size() > 0)
	{
		std::map<std::string, ASpell *>::iterator it = this->spellBook.begin();
		std::map<std::string, ASpell *>::iterator ite = this->spellBook.end();
		while (it != ite)
		{
			delete it->second;
			it++;
		}
	}
}

void	SpellBook::learnSpell(ASpell * spell)
{
	if (spell)
	//this->spellBook.insert(std::pair<std::string, ASpell *>(spell->getName(), spell));
		this->spellBook[spell->getName()] = spell;
}

void	SpellBook::forgetSpell(std::string const & spellName)
{
	std::map<std::string, ASpell *>::iterator it = this->spellBook.find(spellName);

	if (it != this->spellBook.end())
	{
		delete it->second;
		this->spellBook.erase(it);
	}
}

ASpell *	SpellBook::createSpell(std::string const & spellName)
{
	std::map<std::string, ASpell *>::iterator it = this->spellBook.find(spellName);

	if (it != this->spellBook.end())
	{
		return (it->second->clone());
	}
	return (NULL);
}


