////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __POINT_H__
#define __POINT_H__

//+-----------------------------------------------------------------------------
//
//  Class:  
//      POINT
//
//  Synopsis:
//      Texture container class.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// DECLARATION
////////////////////////////////////////////////////////////////////////////////

namespace A2D {

	struct Point
	{
		float			aX;
		float			aY;

		inline Point() :
			aX(0.0f),
			aY(0.0f)
		{
		}

		inline Point(float x_x, float x_y) :
			aX(x_x),
			aY(x_y)
		{
		}
	};
}

#endif