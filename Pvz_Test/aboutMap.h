#pragma once
#include <iostream>
#include <vector>
#include <easyx.h>

using namespace std;

class Lattice //��������
{
private:
	int width = 250; 
	int length = 250;
	IMAGE* style;

public:
	enum class time
	{
		Grass, //�ݵ�
		Water //Ӿ��
	} now_Time;

	Lattice(const time& t);
	~Lattice();
};

class Map
{
private:
	vector<vector<Lattice>>* map; //��ͼ
	
public:
	enum class time
	{
		Day, //����
		Neight //��ҹ
	} this_time;

	enum class style
	{
		Grass, //���ݵ� 5 * 10
		Pool //Ӿ�� 6 * 10
	} this_style;

	Map(time t, style s);
	~Map();
};
