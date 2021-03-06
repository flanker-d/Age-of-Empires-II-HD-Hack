// AoE_HD_Trainer.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Player.h"
#include "Console.h"

using namespace std;

int main()
{
	g_pConsole->Init();
	g_pAOEMemory->Init();

	if (g_pAOEMemory->IsRunning()) {

		while (true) {

			if(KeyDown(VK_F1))
				g_pPlayer->AddWood();

			if (KeyDown(VK_F2))
				g_pPlayer->AddFood();

			if (KeyDown(VK_F3))
				g_pPlayer->AddGold();

			if (KeyDown(VK_F4))
				g_pPlayer->AddStone();

			Sleep(50);
		}

	}
	else {
		cout << "error: game not found.\n";
	}

    return 0;
}

