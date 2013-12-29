/*
 * Copyright (C) 2009-2010, Aldebaran Robotics
 *
 * This software is provided "as is" without warranty of any kind,
 * either expressed or implied, including but not limited to the
 * implied warranties of fitness for a particular purpose.
 *
 * See the LICENSE file for more information.
 */

#ifdef _MSC_VER

# include <direct.h>

inline
int
mkdir(const char *path, mode_t)
{
  return _mkdir(path);
}

#endif
