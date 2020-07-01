#pragma once
#include "Astro.h"
#include "Star.h"
#include <fstream>
#include <iostream>

using namespace std;

class Repo {
private:
	string astro_path, star_path;
	vector<Astronomer> astronomers;
	vector<Star> stars;

public:
	Repo(const string& a = "", const string& s = "") : astro_path(a), star_path(s) {
		if (astro_path.size()) load_astro();
		if (star_path.size()) load_stars();

	}
	void load_astro();
	void load_stars();
	vector<Astronomer> get_astros();
	vector<Star> get_stars();
	void write_astro(vector<Astronomer> o);
	void write_star(vector<Star> o);

	void add_astro(Astronomer& elem);
	void add_star(Star& elem);

	Star search_element(Star& elem);
	/*
	void delete_element(Object2& elem);
	void update_element(Object2& elem);
	void write_o2(vector<Object2> o);
	*/
	~Repo() {}
};