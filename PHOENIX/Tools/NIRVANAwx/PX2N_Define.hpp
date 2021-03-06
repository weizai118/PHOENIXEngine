// PX2N_Define.hpp

#ifndef PX2N_DEFINE_HPP
#define PX2N_DEFINE_HPP

#include "PX2N_Pre.hpp"
#include "PX2APoint.hpp"
#include "PX2Float3.hpp"

namespace NA
{

	inline PX2::APoint wxPointToAPointLeftAxis(wxPoint &point, wxSize &size)
	{
		return PX2::APoint((float)point.x, 0.0f, (float)(size.GetHeight() - point.y));
	}

	inline wxColour Float3TowxColour(const PX2::Float3 &color)
	{
		return wxColour((unsigned char)(color[0] * 255.0f),
			unsigned char(color[1] * 255.0f), unsigned char(color[2] * 255.0f));
	}

	struct PinData
	{
	public:
		PinData()
		{
			TheBook = 0;
			TheWindow = 0;
		}
		~PinData()
		{
		}

		wxAuiNotebook *TheBook;
		wxWindow *TheWindow;
		wxPoint Pos;
		wxSize Size;
		wxString Caption;
	};

	class PX2wxAuiNotebook;

	struct WindowObj
	{
		WindowObj()
		{
			TheWindow = 0;
			NoteBook = 0;
		}
		~WindowObj() {}

		std::string Name;
		std::string Caption;
		wxWindow *TheWindow;

		PX2wxAuiNotebook *NoteBook;
	};

}

#endif