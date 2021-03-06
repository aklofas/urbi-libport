/*
 * Copyright (C) 2008, 2010, Aldebaran Robotics
 *
 * This software is provided "as is" without warranty of any kind,
 * either expressed or implied, including but not limited to the
 * implied warranties of fitness for a particular purpose.
 *
 * See the LICENSE file for more information.
 */

#ifndef LIBPORT_NETDB_H
# define LIBPORT_NETDB_H

# include <libport/detect-win32.h>

# if !defined WIN32 && !defined LIBPORT_WIN32
#  include <netdb.h>
# endif

#endif // LIBPORT_NETDB_H
