/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:56:48 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 12:17:27 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
# include "ASpell.hpp"
# include <map>

class SpellBook
{
	public:
		SpellBook(void);
		~SpellBook(void);

		void		learnSpell(ASpell * spell);
		void		forgetSpell(std::string const & spellName);
		ASpell *	createSpell(std::string const & spellName);

	protected:

	private:

		SpellBook(SpellBook & obj);
		SpellBook & operator=(SpellBook const & rhs);
		std::map<std::string, ASpell *> spellBook;
		
};

#endif