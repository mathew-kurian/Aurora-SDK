////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __TEXT_H__
#define __TEXT_H__

//+-----------------------------------------------------------------------------
//
//  Class: 
//      TEXT
//
//  Synopsis:
//      Text class to be rendered.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////


#include "ExtLibs.h"
#include "TextFactory.h"

using namespace std;

namespace A2D {

	////////////////////////////////////////////////////////////////////////////////
	// DEFINE
	////////////////////////////////////////////////////////////////////////////////

	#define	FONT_VERTEX_MULTIPLIER			4
	#define FONT_INDEX_MULTIPLIER			6
	#define	TEXT_MAX_DEFAULT_CHARS			50

	////////////////////////////////////////////////////////////////////////////////
	// DECLARATION
	////////////////////////////////////////////////////////////////////////////////

	class Text
	{
		friend class TextFactory;
		friend class Graphics;

	public:

		Text(string xText);
		~Text();

		STATUS							initialize();

		void							setText(string * xText);

	private:

		ID3D10Buffer			*		aVertexBuffer = 0;
		ID3D10Buffer			*		aIndexBuffer = 0;

		int								aNumVertices = 0;
		int								aNumIndices = 0;

		string							aText;
	};

}





#endif