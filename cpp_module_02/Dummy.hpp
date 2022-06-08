/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 08:07:47 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 08:10:11 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef DUMMY_HPP
# define DUMMY_HPP
# include "ATarget.hpp"

class Dummy : public ATarget
{

	public:

		Dummy(void);
		~Dummy(void);

		Dummy *	clone(void) const;

	protected:

	private:

};

#endif