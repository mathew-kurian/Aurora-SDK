////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __MATRIXFACTORY_H__
#define __MATRIXFACTORY_H__

//+-----------------------------------------------------------------------------
//
//  Class:
//      MATRIXFACTORY
//
//  Synopsis:
//      Differentiates which of the two possible arcs could match the given arc
//      parameters.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////

#include "Dims.h"
#include "GXSettings.h"

namespace A2D {

	////////////////////////////////////////////////////////////////////////////////
	// FORWARD DECLARATIONS
	////////////////////////////////////////////////////////////////////////////////

	class Abstract;
	class Renderable;
	class AbstractComponent;
	class Camera;
	struct CameraProperties;
	struct RenderData;
	class BackBuffer;
	class MatrixFactory;
	class ModelFactory;
	class RootPane;
	class Window;

	////////////////////////////////////////////////////////////////////////////////
	// DECLARATION
	////////////////////////////////////////////////////////////////////////////////

	class MatrixFactory
	{

	public:

		// Factory
		static D3DXMATRIX         *     createDefaultWorldMatrix();
		static D3DXMATRIX         *     createDefaultProjectionMatrix(Dims * xWindowSize, GXSettings * xSettings);
		static D3DXMATRIX         *     createDefaultOrthogonalMatrix(Dims * xWindowSize, GXSettings * xSettings);


	};
}

#endif