/*
  This file is part of Pack My Sprites.

  Pack My Sprites is free software: you can redistribute it and/or modify it
  under the terms of the GNU General Public License as published by
  the Free Software Foundation, version 3 of the License.

  Pack My Sprites is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Pack My Sprites.  If not, see <http://www.gnu.org/licenses/>.
 */
/**
 * \file
 * \brief The description of a layer in the xcf file.
 * \author Julien Jorge
 */
#ifndef __SDC_LAYER_INFO_HPP__
#define __SDC_LAYER_INFO_HPP__

#include <claw/rectangle.hpp>

namespace sdc
{
  /**
   * \brief The informations of a layer.
   * \author Julien Jorge
   */
  struct layer_info
  {
    /** \brief The position and the size of the layer in the source image. */
    claw::math::rectangle<int> box;

    /** \brief The index of the layer. */
    unsigned int index;

    /** \brief */
  }; // struct layer_info

} // namespace sdc

#endif // __SDC_LAYER_INFO_HPP__
