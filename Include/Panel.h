///////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __PANEL_H__
#define __PANEL_H__

//+-----------------------------------------------------------------------------
//
//  Struct:
//      PANEL
//
//  Synopsis:
//      Differentiates which of the two possible arcs could match the given arc
//      parameters.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////

#include "Component.h"
#include "ImageProperties.h"

namespace A2D {

	////////////////////////////////////////////////////////////////////////////////
	// FORWARD DECLARATIONS
	////////////////////////////////////////////////////////////////////////////////

	class Abstract;
	class Container;
	class Window;
	class Component;
	
	////////////////////////////////////////////////////////////////////////////////
	// DECLARATION
	////////////////////////////////////////////////////////////////////////////////

	class Panel : public Component
	{
	public:

		float translationX = 0;
		float translationXG1 = 10;
		float translationYG1 = 10;
		float translationY = 0;
		float translationYDirection = 1;
		float translationXDirection = 1;
		float translationXDirectionG1 = 1;
		float translationYDirectionG1 = 1;
		

	public:

		virtual LPCWSTR                 getClass();
		virtual LPCWSTR                 toString();
	};
}

#endif
