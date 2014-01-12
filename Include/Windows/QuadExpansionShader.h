////////////////////////////////////////////////////////////////////////////////
// GAURDS
////////////////////////////////////////////////////////////////////////////////

#ifndef __QUADEXPANSIONSHADER_H__
#define __QUADEXPANSIONSHADER_H__

//+-----------------------------------------------------------------------------
//
//  Class: 
//      ABSTRACTTEXTURESHADER
//
//  Synopsis:
//      Texture quad.
//
//------------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////////
// INCLUDE
////////////////////////////////////////////////////////////////////////////////

#include "../_A2DCommon.h"

#include "ExtLibs.h"
#include "Texture.h"
#include "AbstractShader.h"

namespace A2D {

	////////////////////////////////////////////////////////////////////////////////
	// DECLARATION
	////////////////////////////////////////////////////////////////////////////////

	class QuadExpansionShader : public AbstractShader
	{
	public:

		QuadExpansionShader(ID3D10Device ** xDevice);
		virtual ~QuadExpansionShader();
		
	private:

		static ID3D10Effect			*	aQuadEffect;
		static ID3D10EffectShaderResourceVariable*   aTexturePtr;
		static Texture				*	aTexture;

	public:

		///////////////////////////////////////////////////////////
		// INLINE FUNCTION
		///////////////////////////////////////////////////////////

		inline void QuadExpansionShader::setTexture(Texture * xTexture)
		{
			aTexture = xTexture;
			aHasAlpha = xTexture->hasAlpha();

			// Bind and update the texture.
			// Also cache the texture while doing so.!!!!
			aTexturePtr->SetResource(static_cast<ID3D10ShaderResourceView*>(xTexture->getPlatformCompatibleResource()));
		}

	protected:

		virtual ID3D10Effect		**	getEffect();
		virtual LPCWSTR					getEffectName();
		virtual STATUS					getUsableVariablePointers(ID3D10Effect * xEffect);
		virtual STATUS					createPolygonLayout(D3D10_INPUT_ELEMENT_DESC ** xPolygonLayout);
		virtual unsigned int			getPolygonLayoutElementCount();
		virtual	LPCSTR					getTechniqueName();
	};
}

#endif