/*=========================================================================

  Program:   CMake - Cross-Platform Makefile Generator
  Module:    $RCSfile$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Kitware, Inc. All rights reserved.
  See Copyright.txt or http://www.cmake.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#ifndef cmCTestSVN_h
#define cmCTestSVN_h

#include "cmCTestVC.h"

/** \class cmCTestSVN
 * \brief Interaction with subversion command-line tool
 *
 */
class cmCTestSVN: public cmCTestVC
{
public:
  /** Construct with a CTest instance and update log stream.  */
  cmCTestSVN(cmCTest* ctest, std::ostream& log);

  virtual ~cmCTestSVN();
};

#endif