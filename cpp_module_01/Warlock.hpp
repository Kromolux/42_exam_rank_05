/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:09:15 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:51:25 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	public:

		Warlock(std::string const & newName, std::string const & newTitle);
		~Warlock(void);

		std::string const & getName(void) const;
		std::string const & getTitle(void) const;

		void	setTitle(std::string const & newTitle);
		void	introduce(void) const;

		void	learnSpell(ASpell * spell);
		void	forgetSpell(std::string const & spellName);
		void	launchSpell(std::string const & spellName, ATarget const & target) const;

	protected:


	private:

		Warlock(void);
		Warlock(Warlock & obj);
		Warlock & operator=(Warlock const & rhs);
		std::string		name;
		std::string		title;
		std::map<std::string, ASpell *> spellBook;
};

#endif