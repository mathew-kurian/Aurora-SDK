#include "../../../Include/Linux/ExtLibs.h"
#include "../../../Include/Linux/Frame.h"
//#include "../../../Include/Windows/XWindow.h"

using namespace A2D;

////////////////////////////////////////////////////////////////////////////////
// PLATFORM COMPATIBLE IMPLEMENTATION
////////////////////////////////////////////////////////////////////////////////

Frame::Frame() {}

Frame::~Frame(){}

////////////////////////////////////////////////////////////////////////////////
// ABSTRACTFRAME
////////////////////////////////////////////////////////////////////////////////

void Frame::createPlatformCompatibleWindow(AbstractWindow ** xWindow)
{
    *xWindow = new XWindow(this);
    ((XWindow*)xWindow)->createCompatibleWindow(true);
}