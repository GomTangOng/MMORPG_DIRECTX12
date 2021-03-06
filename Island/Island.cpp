// Island.cpp: 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "WinApplication.h"
#include "IslandApplication.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	IslandApplication island(1280, 720, L"D3D12 Hello Window");
	return WinApplication::Run(&island, hInstance, nCmdShow);
}
