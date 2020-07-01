#include "Service.h"

void Service::add_star(string& name, string& conste, int ra, int dec, int diam)
{
	if (name == "" || diam <= 0)
		throw exception("Invalid Star");
	vector<Star> st = this->repo.get_stars();
	for(auto& a : st)
		if(a.get_name() == name)
			throw exception("Star already exists !");
	this->repo.add_star(Star(name, conste, ra, dec, diam));
	this->model->update();
}

vector<Star> Service::get_star_list() {
	return this->repo.get_stars();
}

vector<Star> Service::get_star_const(string& cons) {
	vector<Star> st = this->get_star_list();
	vector<Star> aux;
	for (auto& t : st)
		if (t.get_constellation() == cons)
			aux.push_back(t);
	return aux;
}
