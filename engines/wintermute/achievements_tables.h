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

namespace Wintermute {

struct AchievementDescriptionList {
	const char *gameId;
	Common::AchievementsPlatform platform;
	const char *appId;
};

static const AchievementDescriptionList achievementDescriptionList[] = {
	{"alphapolaris", Common::STEAM_ACHIEVEMENTS, "405780"},
	{"carolreed10", Common::STEAM_ACHIEVEMENTS, "337130"},
	{"carolreed11", Common::STEAM_ACHIEVEMENTS, "340370"},
	{"corrosion", Common::STEAM_ACHIEVEMENTS, "349140"},
	{"drdoylemotch", Common::STEAM_ACHIEVEMENTS, "574420"},
	{"erinmyers", Common::STEAM_ACHIEVEMENTS, "1064660"},
	{"juliastars", Common::GALAXY_ACHIEVEMENTS, "1457085654"},
	{"juliastars", Common::STEAM_ACHIEVEMENTS, "257690"},
	{"juliauntold", Common::GALAXY_ACHIEVEMENTS, "1457085654"},
	{"juliauntold", Common::STEAM_ACHIEVEMENTS, "257690"},
	{"reversion1", Common::STEAM_ACHIEVEMENTS, "270570"},
	{"reversion2", Common::STEAM_ACHIEVEMENTS, "281060"},
	{"reversion3", Common::STEAM_ACHIEVEMENTS, "281080"},
	{"oknytt", Common::STEAM_ACHIEVEMENTS, "286320"},
	{"sotv1", Common::STEAM_ACHIEVEMENTS, "286360"},
	{"sotv2", Common::STEAM_ACHIEVEMENTS, "378630"},
	{"thelostcrowngha", Common::STEAM_ACHIEVEMENTS, "291710"},

	{0, Common::UNK_ACHIEVEMENTS, 0}
};

} // End of namespace Wintermute
