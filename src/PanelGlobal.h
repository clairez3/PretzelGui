//
//  PanelGlobal.h
//  BasicSample
//
//  Created by Charlie Whitney on 2/20/14.
//
//

#pragma once

#include "cinder/app/AppNative.h"
#include "cinder/gl/Gl.h"
#include "cinder/gl/TextureFont.h"

namespace Panel {

	class PanelGlobal {
	public:
		static PanelGlobal* getInstance();

		ci::Color P_GUI_BORDER;
		ci::Color P_BG_COLOR;
		ci::Color P_TAB_COLOR;
		ci::Color P_TEXT_COLOR;
		ci::Color P_OUTLINE_COLOR;
		ci::Color P_HIGHLIGHT_COLOR;
		ci::Color P_SLIDER_COLOR;

		ci::gl::TextureFontRef guiFont;

		void renderText(std::string text, ci::Vec2i pos = ci::Vec2i::zero());
		void renderTextRight(std::string text, ci::Vec2i pos = ci::Vec2i::zero());
		void renderTextCentered(std::string text, ci::Vec2i pos = ci::Vec2i::zero());

		void saveSettings();
		void loadSettings();

	private:
		PanelGlobal(){};
		PanelGlobal(PanelGlobal const&){};
		static PanelGlobal		*mInstance;

		void renderTextInternal(std::string text, ci::Vec2i pos, int align);
	};
}
