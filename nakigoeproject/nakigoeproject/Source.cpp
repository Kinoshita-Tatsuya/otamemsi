#include"Header.h"

using namespace std;

Animal animal;

SoundLib::SoundsManager soundsManager;
//�����̏�����
bool isSuccess = soundsManager.Initialize();

void Init()
{
	static bool isFirstFrame = true;

	if (isFirstFrame)
	{
		isSuccess = soundsManager.AddFile("Audio/dog1.mp3", _T("DogBGM"));
		isSuccess = soundsManager.AddFile("Audio/cat15.mp3", _T("CatBGM"));

		isFirstFrame = false;
	}
}

void Animal::GetName(int nameNum)
{
	m_nameNum = nameNum;
}

void Animal::Nakigoe()
{
	animal.GetName(m_nameNum);

	switch (m_nameNum)
	{
	case 1:
		isSuccess = soundsManager.Start(_T("DogBGM"));

		break;

	case 2:
		isSuccess = soundsManager.Start(_T("CatBGM"));

		break;
	}
}

int main()
{
	int nameNum = 0;

	Init();

	cout << "1���Q�������Ă�������" << endl;
	cout << "�����L�̖�������܂�" << endl;
	cout << "1,�� , 2,�L" << endl;

	cin >> nameNum;

	if (nameNum == 1 || nameNum == 2)
	{
		animal.Nakigoe();
	}

	while (1);
	return 0;
}
