
#include "../../include/Pipeline.h"

using namespace A2D;

Pipeline::Pipeline() : aLifeCycle(Pipeline::aGlobalLifeCycle - 1) {} // Offset by 1

Pipeline::Pipeline(Pipeline * xPipeline){}

// initialize to value
int Pipeline::aGlobalLifeCycle = 0;

void Pipeline::nextLifeCycle()
{
	aGlobalLifeCycle++;
}

/////////////////////////////////////////////////////////////////////////////
// REQUIRED BY _ABSTRACT
////////////////////////////////////////////////////////////////////////////

LPCWSTR Pipeline::getClass()
{
	return L"Pipeline";
}

LPCWSTR Pipeline::toString()
{
	return L"Pipeline";
}

bool Pipeline::operator==(Abstract * xAbstract)
{
	return false;
}

HRESULT Pipeline::initialize()
{
	return NULL;
}

void Pipeline::Deinitialize()
{
	for (int i = 0; i < aLength; i++)
	{
		if (aPipelineComps[i])
		{
			aPipelineComps[i]->Deinitialize();
			delete aPipelineComps[i];
			aPipelineComps[i] = 0;
		}
	}
}