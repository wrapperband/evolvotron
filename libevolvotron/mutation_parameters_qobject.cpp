/**************************************************************************/
/*  Copyright 2012 Tim Day                                                */
/*                                                                        */
/*  This file is part of Evolvotron                                       */
/*                                                                        */
/*  Evolvotron is free software: you can redistribute it and/or modify    */
/*  it under the terms of the GNU General Public License as published by  */
/*  the Free Software Foundation, either version 3 of the License, or     */
/*  (at your option) any later version.                                   */
/*                                                                        */
/*  Evolvotron is distributed in the hope that it will be useful,         */
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of        */
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         */
/*  GNU General Public License for more details.                          */
/*                                                                        */
/*  You should have received a copy of the GNU General Public License     */
/*  along with Evolvotron.  If not, see <http://www.gnu.org/licenses/>.   */
/**************************************************************************/

/*! \file
  \brief Implementation of class MutationParametersQObject.
*/

#include "libevolvotron_precompiled.h"

#include "mutation_parameters_qobject.h"

MutationParametersQObject::MutationParametersQObject(uint seed,bool autocool,bool debug_mode,QObject* parent)
  :QObject(parent)
  ,MutationParameters(seed,autocool,debug_mode)
{}

MutationParametersQObject::~MutationParametersQObject()
{}

void MutationParametersQObject::report_change()
{
  emit changed();
}