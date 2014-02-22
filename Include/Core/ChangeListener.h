////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __ChangeListener_H__
#define __ChangeListener_H__

//+-----------------------------------------------------------------------------
//
//  Class:  
//      DRAWABLE
//
//  Synopsis:
//      Texture container class.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////

#include "../_A2DCommon.h"

namespace A2D {

	class ChangeListener
	{

	public:

		void*		m_ticket;

		virtual void update(void * x_param, int x_id) IMPLEMENT;
	};

}

#endif