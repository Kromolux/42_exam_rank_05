/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:55:40 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 10:56:00 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
# include "ATarget.hpp"

class BrickWall : public ATarget
{

	public:

		BrickWall(void);
		~BrickWall(void);

		BrickWall *	clone(void) const;

	protected:

	private:

};

#endif