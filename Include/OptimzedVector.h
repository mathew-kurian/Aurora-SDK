////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __RENDERABLE_H__
#define __RENDERABLE_H__

//+-----------------------------------------------------------------------------
//
//  Class:
//      RENDERABLE
//
//  Synopsis:
//      Differentiates which of the two possible arcs could match the given arc
//      parameters.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////

#include "Abstract.h"

namespace A2D {

	////////////////////////////////////////////////////////////////////////////////
	// DECLARATION
	////////////////////////////////////////////////////////////////////////////////

	struct Node
	{

	};

	template <class T>
	class DoubleLinkedList : public Abstract
	{

	private:

		
		int								aAmortizeValue;


	public:

		// Implementation
		// { ABSTRACT }
		virtual HRESULT                 initialize() = 0;
		virtual void                    Deinitialize() = 0;
		virtual LPCWSTR                 getClass() = 0;
		virtual LPCWSTR                 toString() = 0;
		virtual bool                    operator==(Abstract * xAbstract) = 0;

	};
}
#endif
