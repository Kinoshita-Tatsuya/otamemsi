#pragma once

#include<iostream>
#include<string.h>
#include"SoundLib/Headers/SoundsManager.h"

#ifdef _DEBUG
#pragma comment(lib,"SoundLib/Debug/SoundLib.lib")

#else 
#pragma comment(lib,"SoundLib/Release/SoundLib.lib")
#endif // DEBUG

class Animal
{
private:

	int m_nameNum;

public:
	void GetName(int nameNum);
	
	void Nakigoe();
};

extern Animal animal;
