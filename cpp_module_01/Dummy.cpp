/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 08:10:19 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 08:11:53 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy(void)
{
	this->type = "Target Practice Dummy";
}

Dummy::~Dummy(void)
{
}

Dummy *	Dummy::clone(void) const
{
	return (new Dummy());
}
