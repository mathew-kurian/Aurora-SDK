#include "../../../include/Core/ExtLibs.h"
#include "../../../include/Core/FocusListener.h"
#include "../../../Include/Core/Component.h"

using namespace A2D;

FocusListener::FocusListener() :
FocusListener("DefaultFocusListener")
{}

FocusListener::FocusListener(string xString) :
aName(xString), AbstractListener(A2D_LISTENER_FOCUS)
{}


FocusListener::~FocusListener(){}

STATUS FocusListener::notify(AbstractEvent * xEvent)
{
	return notify((FocusEvent*)xEvent);
}

STATUS FocusListener::notify(FocusEvent * xEvent)
{

	int id = xEvent->getID();

	if (id == FocusEvent::FOCUS_GAINED)
	{
		focusGained(xEvent);
	}
	else if (id == FocusEvent::FOCUS_LOST)
	{
		focusLost(xEvent);
	}
	else
	{
		SYSOUT_STR("Id not recognized");
	}
	if (xEvent->isConsumed()) { return STATUS_OK; }
	else return STATUS_FAIL;
}

void FocusListener::focusGained(FocusEvent * xEvent)
{
	// do something
	SYSOUT_STR("Handling focus gained.");
}

void FocusListener::focusLost(FocusEvent * xEvent)
{
	// do something
	SYSOUT_STR("Handling focus lost.");
}

void FocusListener::print() const
{
	SYSOUT_F("%s", aName.c_str());
}
