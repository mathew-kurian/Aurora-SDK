
#include "Core/ExtLibs.h"

// Required for Windows
#ifdef _WIN32
#include "Windows/ExtLibs.h"
#include "Windows/Frame.h"
#endif

// Required for Linux
#ifdef __linux__
#include "Linux/ExtLibs.h"
#include "Linux/Frame.h"
#endif
