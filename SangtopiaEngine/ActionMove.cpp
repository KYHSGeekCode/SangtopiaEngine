#include "ActionMove.h"



ActionMove::ActionMove(Unit * unit, Path * path)
{
	this->subject = unit;
	this->path = path;
}


ActionMove::~ActionMove()
{
}

void * ActionMove::Invoke()
{
	//path�� ���� unit�� ��ǥ�� �ٲٸ� �� ������ ������ ���� ȣ���ϸ�, ����Ѵ�.
	std::vector<Coord*> coords = path->getCoords();
	for (auto const& coord : coords) {
		subject->MoveTo(coord);		//MoveTo updates coord, invokes the target and oirinal place
		SangGame::getGame()->getEngine()->refresh();
	}

}
