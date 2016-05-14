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
#pragma once

#include "pms/resources/layer.hpp"

#include <claw/rectangle.hpp>

#include <unordered_map>
#include <vector>

namespace pms
{
  namespace layout
  {
    class description
    {
    public:
      struct sprite
      {
        std::string image_id;
        std::string name;
        claw::math::rectangle< int > source_box;
        claw::math::rectangle< int > result_box;
        std::vector< resources::layer > layers;
        std::vector< resources::layer > mask;
        bool rotated;
        bool bleed;
      };

      typedef std::unordered_map< std::string, std::string > id_to_file_map;
      
    private:
      typedef std::vector< sprite > sprite_list;

    public:
      typedef sprite_list::iterator sprite_iterator;
      typedef sprite_list::const_iterator const_sprite_iterator;

    public:
      const_sprite_iterator get_sprite_by_name( const std::string& n ) const;
      void add_sprite( const sprite& spr );

      const_sprite_iterator sprite_begin() const;
      const_sprite_iterator sprite_end() const;

      sprite_iterator sprite_begin();
      sprite_iterator sprite_end();

      std::size_t sprite_count() const;

      void erase_sprite( const sprite_iterator& it );

      std::string to_string() const;

    public:
      std::string output_name;
      std::size_t width;
      std::size_t height;
      std::size_t margin;

      id_to_file_map images;

    private:
      sprite_list sprites;
    };
  }
}
