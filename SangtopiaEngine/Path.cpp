#include "Path.h"



Path::Path()
{
}


Path::~Path()
{
	
}

void Path::Append(Coord * c)
{
	coords.push_back(c);
}

const std::vector<Coord*> Path::getCoords()
{
	return coords;
}

/*
void Path::FilterAndAdd(Coord * center, std::function<bool(Coord*)> filter,int depth = 1)
{
	if (depth < 1)
		return;
	Coord * newCenter;
	
	//8���� ���� ����
	//���Ǹ���-> �߰� & �߰�Ž��
	//�ƴϸ� �н�
	Coord ** surrounds = center->getSurroundings();
	for (int i = 0; i < 8; i++)
	{
		newCenter = surrounds[i];
		if (filter(newCenter))
		{
			for (auto const& value : coords) {
				/* std::cout << value; ... *
			}
		}
	}
	if(depth>1)
		FilterAndAdd(newCenter, filter, depth - 1);

}
*/