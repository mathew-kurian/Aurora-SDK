////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __ACTIONLISTENER_H__
#define __ACTIONLISTENER_H__

//+-----------------------------------------------------------------------------
//
//  Class: 
//      ACTIONLISTENER
//
//  Synopsis:
//      Listener class for action events such as when a component gets clicked.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////

#include "../_A2DCommon.h"

#include "ExtLibs.h"
#include "ActionEvent.h"
#include "AbstractListener.h"

using namespace std;

namespace A2D {

	////////////////////////////////////////////////////////////////////////////////
	// FORWARD DECLARATIONS
	////////////////////////////////////////////////////////////////////////////////

	class AbstractListener;
	class ActionEvent;

	////////////////////////////////////////////////////////////////////////////////
	// DEFINE
	////////////////////////////////////////////////////////////////////////////////

	#define A2D_LISTENER_ACTION			0x7000

	////////////////////////////////////////////////////////////////////////////////
	// DECLARATION
	////////////////////////////////////////////////////////////////////////////////

	class ActionListener : public AbstractListener
	{
	public:
		ActionListener();
		ActionListener(string xString);
		virtual ~ActionListener();

		STATUS							notify(ActionEvent * xEvent);
		void							print() const;
		virtual void					actionPerformed(ActionEvent * xEvent);

	public:


	protected:

		STATUS							notify(AbstractEvent * xEvent);

	private:
		ActionListener(const ActionListener&);
		ActionListener& operator()(const ActionListener&);

		string							aName;
	};

}


#endif