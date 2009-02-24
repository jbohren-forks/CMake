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
#ifndef cmCTestVC_h
#define cmCTestVC_h

#include "cmStandardIncludes.h"

class cmCTest;

/** \class cmCTestVC
 * \brief Base class for version control system handlers
 *
 */
class cmCTestVC
{
public:
  /** Construct with a CTest instance and update log stream.  */
  cmCTestVC(cmCTest* ctest, std::ostream& log);

  virtual ~cmCTestVC();

  /** Command line tool to invoke.  */
  void SetCommandLineTool(std::string const& tool);

  /** Top-level source directory.  */
  void SetSourceDirectory(std::string const& dir);

protected:

  // Instance of cmCTest running the script.
  cmCTest* CTest;

  // A stream to which we write log information.
  std::ostream& Log;

  // Basic information about the working tree.
  std::string CommandLineTool;
  std::string SourceDirectory;
};

#endif