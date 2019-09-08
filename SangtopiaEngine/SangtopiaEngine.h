#pragma once

// �� ����/�ε�, ����, ������Ʈ, ���� ��.
// �� �ǿ� ���ؼ��� �Ѵ�.

#include "SangGame.h"
class SangtopiaEngine
{
public:
	SangtopiaEngine();
	~SangtopiaEngine();
	// �� ������ �����. ������ �̸�, ���� ����, ������� ��, AI�� ��
	SangGame * NewGame(wchar_t * name, int w, int h, int players, int ais);
	void(*getInputFunction())(const std::vector<Action*>* actions);
private:
	void(*getInput)(const std::vector<Action*>* actions);
};

