////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __IMS_H__
#define __IMS_H__

//+-----------------------------------------------------------------------------
//
//  Class:  
//      IMS
//
//  Synopsis:
//      Texture container class.
//
//------------------------------------------------------------------------------

namespace A2D {
	
	////////////////////////////////////////////////////////////////////////////////
	// DECLARATION
	////////////////////////////////////////////////////////////////////////////////

	struct Dims
	{
		int				aWidth;
		int				aHeight;

		static void	memcpySSE2(Dims * xDest, const Dims * xSrc);
	};
}

#endif