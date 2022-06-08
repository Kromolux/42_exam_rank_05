/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 08:01:58 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 08:05:12 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FWOOSH_HPP
# define FWOOSH_HPP
# include "ASpell.hpp"

class Fwoosh : public ASpell
{
	public:
	
		Fwoosh(void);
		~Fwoosh(void);
		
		Fwoosh *	clone(void) const;

	protected:

	private:
	
};

#endif