#include"DxLib.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1) return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	//ƒ}ƒbƒv‚Ì“Ç‚İ‚İ‚ª‚Å‚«‚È‚­‚È‚Á‚½‚ç
	if ()
}