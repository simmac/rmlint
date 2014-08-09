/**
 *  This file is part of rmlint.
 *
 *  rmlint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  rmlint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with rmlint.  If not, see <http:      //www.gnu.org/licenses/>.
 *
 * Authors:
 *
 *  - Christopher <sahib> Pahl 2010-2014 (https://github.com/sahib)
 *  - Daniel <SeeSpotRun> T.   2014-2014 (https://github.com/SeeSpotRun)
 *
 * Hosted on http://github.com/sahib/rmlint
 *
 */

#ifndef FILEMAP_H_INCLUDED
#define FILEMAP_H_INCLUDED

#include <glib.h>

/* typedef it, in case we need to exchange
 * the data structure at any point.
 */
typedef GSequence * RmOffsetTable;

/**
 * @brief Create 
 *
 * @param path
 *
 * @return 
 */
RmOffsetTable rm_offset_create_table(const char *path);

/**
 * @brief 
 *
 * @param offset_list
 * @param file_offset
 *
 * @return 
 */
guint64 rm_offset_lookup(RmOffsetTable table, guint64 file_offset);

#endif /* FILEMAP_H_INCLUDED */
