
#include "../../include/ExtLibs.h"
#include "../../include/DXShaderUtils.h"

using namespace A2D;

HRESULT DXShaderUtils::LoadShaderFromFile(LPCWSTR xFilename, ID3D10Device * aDXDevice, ID3D10Effect ** xEffect)
{
	ID3D10Blob* errorMessage;

	// initialize the error message.
	errorMessage = 0;

	// Load the shader in from the file.
	SAFELY(D3DX10CreateEffectFromFile(xFilename, NULL, NULL, "fx_4_0", D3D10_SHADER_ENABLE_STRICTNESS, 0,
		aDXDevice, NULL, NULL, xEffect, &errorMessage, NULL));

	return S_OK;
}

void DXShaderUtils::SysOut(ID3D10Blob * xErrorMessage, LPCWSTR * xFilename){}

HRESULT DXShaderUtils::CreatePNGCompatibleBlendStates(ID3D10Device * aDXDevice, ID3D10BlendState ** xBlendState, ID3D10BlendState ** xBlendDisabledState)
{
	D3D10_BLEND_DESC blendDesc;

	ZeroMemory(&blendDesc, sizeof(blendDesc));
	blendDesc.BlendEnable[0] = TRUE;
	blendDesc.RenderTargetWriteMask[0] = D3D10_COLOR_WRITE_ENABLE_ALL;
	blendDesc.SrcBlend = D3D10_BLEND_SRC_ALPHA;
	blendDesc.DestBlend = D3D10_BLEND_INV_SRC_ALPHA;
	blendDesc.BlendOp = D3D10_BLEND_OP_ADD;
	blendDesc.SrcBlendAlpha = D3D10_BLEND_ONE;
	blendDesc.DestBlendAlpha = D3D10_BLEND_ZERO;
	blendDesc.BlendOpAlpha = D3D10_BLEND_OP_ADD;

	SAFELY(aDXDevice->CreateBlendState(&blendDesc, xBlendState));

	blendDesc.BlendEnable[0] = FALSE;

	SAFELY(aDXDevice->CreateBlendState(&blendDesc, xBlendDisabledState));

	return S_OK;
}