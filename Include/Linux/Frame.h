////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __FRAME_H__
#define __FRAME_H__

//+-----------------------------------------------------------------------------
//
//  Class:
//      FRAME
//
//  Synopsis:
//      Differentiates which of the two possible arcs could match the given arc
//      parameters.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////

#include "../Core/AbstractFrame.h"
//#include "Thread.h"

namespace A2D {

	////////////////////////////////////////////////////////////////////////////////
	// DECLARATION
	////////////////////////////////////////////////////////////////////////////////

    class Frame : public AbstractFrame
    {

		////////////////////////////////////////////////////////////////////////////////
		// PLATFORM COMPATIBLE IMPLEMENTATION
		////////////////////////////////////////////////////////////////////////////////

	public:

        Frame();

        virtual ~Frame();

	protected:

        virtual void		createPlatformCompatibleWindow(AbstractWindow ** xWindow);

    };
}
#endif
