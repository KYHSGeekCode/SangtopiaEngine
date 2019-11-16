#pragma once
//���� �κа� �Ű� ������ ������.
// ��ü: Parameter
// 
//��ü�� ����. Parameter Unit
// �̵�: path			class Path
// ����: from, to		class IAttackable, class IBeatable
// �Ǽ�: where, what	class Coord, class Overlay
// �ı�: where			class Coord
// ����: who, where	    class ICapturable, class Construction	
// 
class Action
{
public:
	Action();
	~Action();
	//Parameter ** parameters;
	//int length;
	//Parameter *subject;

	enum ActionType
	{
		ACTION_MOVE,
		ACTION_ATTACK,
		ACTION_CONSTRUCT,
		ACTION_DESTROY,
		ACTION_CAPTURE
	};

	virtual void * Invoke()=0;
};

