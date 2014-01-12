////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __ABSTRACTLISTENER_H__
#define __ABSTRACTLISTENER_H__

//+-----------------------------------------------------------------------------
//
//  Class: 
//      ABSTRACTLISTENER
//
//  Synopsis:
//      Abstract listener class for events.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////

#include "ExtLibs.h"

using namespace std;

namespace A2D {

	////////////////////////////////////////////////////////////////////////////////
	// FORWARD DECLARATIONS
	////////////////////////////////////////////////////////////////////////////////

	class Abstract;
	class AbstractEvent;
	class EventSource;

	////////////////////////////////////////////////////////////////////////////////
	// DEFINE
	////////////////////////////////////////////////////////////////////////////////

	////////////////////////////////////////////////////////////////////////////////
	// DECLARATION
	////////////////////////////////////////////////////////////////////////////////

	class AbstractListener
	{
	public:

		friend						EventSource;

		virtual ~AbstractListener();
		virtual STATUS notify(AbstractEvent * xEvent) = 0;

	protected:
		// Constructor is protected because this class is abstract.
		AbstractListener(int xID);

	public:

		bool operator==(const AbstractListener& xListener);

	public:

		const int					aID;

	protected:

		AbstractEvent			*	aHandledEvent;

	private:

		
		void					*	aRemoveTicket;

	};

}


#endif