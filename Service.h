#pragma once
#include "Repo.h"
#include "StarsTableModel.h"

using namespace std;

class Service {
private:
	Repo& repo;
	StarsTableModel* model;

public:
	Service(Repo& r, StarsTableModel* m) : repo(r), model(m) {}

	vector<Astronomer> get_astro_list();
	vector<Star> get_star_list();
	vector<Star> get_star_const(string& cons);

	void add_star(string& name, string& constellation, int ra, int dec, int diameter);
};