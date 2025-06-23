#include <vector>
#include <algorithm>
#include "aboutMap.h"

Lattice::Lattice(const time& t) : now_Time(t)
{
	if (t = Lattice::time::Grass)
	{
		loadimage(this->style, L"grass.png");
	}
}

Lattice::~Lattice()
{
	if (style != nullptr)
	{
		delete style;
	}
}

Map::Map(time t, style s) : this_time(t), this_style(s), map(new vector<vector<Lattice>>)
{
	if (this_style == Map::style::Grass)
	{
		//压入地图格式
		map->resize(5);
		for (int i = 0; i < 5; i++)
		{
			map->push_back(vector<Lattice>()); 
		}
		for (auto& v : *map)
		{
			v.reserve(10);
			for_each(v.begin(), v.end(), [](Lattice l) {
				l = Lattice(Lattice::time::Grass);
				});
		}
	}
	else
	{
		//压入地图格式
		map->resize(5);
		for (int i = 0; i < 5; i++)
		{
			map->push_back(vector<Lattice>());
		}
		for (auto& v : *map)
		{
			v.reserve(10);
			for_each(v.begin(), v.end(), [](Lattice l) {
				l = Lattice(Lattice::time::Grass);
				});
		}
	}
}

Map::~Map()
{
	if (map != nullptr)
	{
		delete map;
	}
}
