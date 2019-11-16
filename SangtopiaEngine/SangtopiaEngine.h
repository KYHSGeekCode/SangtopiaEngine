#pragma once

// �� ����/�ε�, ����, ������Ʈ, ���� ��.
// �� �ǿ� ���ؼ��� �Ѵ�.

#include "SangGame.h"
class SangGame;
class SangtopiaEngine
{
public:
	SangtopiaEngine();
	~SangtopiaEngine();
	// �� ������ �����. ������ �̸�, ���� ����, ������� ��, AI�� ��
	SangGame * NewGame(wchar_t * name, int w, int h, int players, int ais);
	void(*getInputFunction())(Player *player, const std::vector<Action*>* actions);
	void setInputFunction(void(*func)(Player * player, const std::vector<Action*>*actions));
	void setRenderer(void(*func)(SangGame * game));
	void refresh();
	static void Warn(const char * s);
	static void Info(const char * s);

private:
	void(*getInput)(Player * player, const std::vector<Action*>* actions);
	void(*Render)(SangGame * game);

};

