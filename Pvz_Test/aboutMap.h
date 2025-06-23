#pragma once
#include <iostream>
#include <vector>
#include <easyx.h>

using namespace std;

class Lattice //基础格子
{
private:
	int width = 250; 
	int length = 250;
	IMAGE* style;

public:
	enum class time
	{
		Grass, //草地
		Water //泳池
	} now_Time;

	Lattice(const time& t);
	~Lattice();
};

class Map
{
private:
	vector<vector<Lattice>>* map; //地图
	
public:
	enum class time
	{
		Day, //白天
		Neight //黑夜
	} this_time;

	enum class style
	{
		Grass, //纯草地 5 * 10
		Pool //泳池 6 * 10
	} this_style;

	Map(time t, style s);
	~Map();
};
