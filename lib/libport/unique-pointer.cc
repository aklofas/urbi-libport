/*
 * Copyright (C) 2008-2010, Aldebaran Robotics
 *
 * This software is provided "as is" without warranty of any kind,
 * either expressed or implied, including but not limited to the
 * implied warranties of fitness for a particular purpose.
 *
 * See the LICENSE file for more information.
 */

#include <libport/unique-pointer.hh>

namespace libport
{
  UniquePointer::UniquePointer ()
    : set_()
  {}

  UniquePointer::~UniquePointer ()
  {}
}