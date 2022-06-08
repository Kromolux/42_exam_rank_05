/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:52:45 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 10:53:09 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIREBALL_HPP
# define FIREBALL_HPP
# include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
	
		Fireball(void);
		~Fireball(void);
		
		Fireball *	clone(void) const;

	protected:

	private:
	
};

#endif