/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#include "ags/shared/gui/guiinv.h"
#include "ags/shared/gui/guimain.h"
#include "ags/engine/ac/draw.h"
#include "ags/shared/ac/gamesetupstruct.h"
#include "ags/engine/ac/gamestate.h"
#include "ags/engine/ac/characterextras.h"
#include "ags/shared/ac/spritecache.h"
#include "ags/shared/gfx/bitmap.h"
#include "ags/globals.h"

namespace AGS3 {

namespace AGS {
namespace Shared {

int GUIInvWindow::GetCharacterId() const {
	if (CharId < 0)
		return _GP(game).playercharacter;

	return CharId;
}

void GUIInvWindow::Draw(Bitmap *ds) {
	const bool enabled = IsGUIEnabled(this);
	if (!enabled && (_G(gui_disabled_style) == GUIDIS_BLACKOUT))
		return;

	// backwards compatibility
	_GP(play).inv_numinline = ColCount;
	_GP(play).inv_numdisp = RowCount * ColCount;
	_GP(play).obsolete_inv_numorder = _G(charextra)[_GP(game).playercharacter].invorder_count;
	// if the user changes top_inv_item, switch into backwards
	// compatibiltiy mode
	if (_GP(play).inv_top)
		_GP(play).inv_backwards_compatibility = 1;
	if (_GP(play).inv_backwards_compatibility)
		TopItem = _GP(play).inv_top;

	// draw the items
	const int leftmost_x = X;
	int at_x = X;
	int at_y = Y;
	int lastItem = TopItem + (ColCount * RowCount);
	if (lastItem > _G(charextra)[GetCharacterId()].invorder_count)
		lastItem = _G(charextra)[GetCharacterId()].invorder_count;

	for (int item = TopItem; item < lastItem; ++item) {
		// draw inv graphic
		draw_gui_sprite(ds, _GP(game).invinfo[_G(charextra)[GetCharacterId()].invorder[item]].pic, at_x, at_y, true);
		at_x += data_to_game_coord(ItemWidth);

		// go to next row when appropriate
		if ((item - TopItem) % ColCount == (ColCount - 1)) {
			at_x = leftmost_x;
			at_y += data_to_game_coord(ItemHeight);
		}
	}

	if (!enabled &&
		_G(gui_disabled_style) == GUIDIS_GREYOUT &&
		_GP(play).inventory_greys_out == 1) {
		// darken the inventory when disabled
		GUI::DrawDisabledEffect(ds, RectWH(X, Y, Width, Height));
	}
}

} // namespace Shared
} // namespace AGS
} // namespace AGS3
