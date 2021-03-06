/*
 * Copyright (C) 2010, Aldebaran Robotics
 *
 * This software is provided "as is" without warranty of any kind,
 * either expressed or implied, including but not limited to the
 * implied warranties of fitness for a particular purpose.
 *
 * See the LICENSE file for more information.
 */

namespace libport
{

  inline
  std::ostream&
  operator<<(std::ostream& o, const utsname& u)
  {
    return u.dump(o);
  }

}
