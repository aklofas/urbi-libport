/*
 * Copyright (C) 2009-2010, Aldebaran Robotics
 *
 * This software is provided "as is" without warranty of any kind,
 * either expressed or implied, including but not limited to the
 * implied warranties of fitness for a particular purpose.
 *
 * See the LICENSE file for more information.
 */

#ifndef LIBPORT_SERIALIZE_EXCEPTION_HH
# define LIBPORT_SERIALIZE_EXCEPTION_HH

# include <stdexcept>

# include <serialize/export.hh>

namespace libport
{
  namespace serialize
  {
    class SERIALIZE_API Exception: public std::runtime_error
    {
    public:
      Exception(const std::string& msg);
    };
  }
}

#endif
