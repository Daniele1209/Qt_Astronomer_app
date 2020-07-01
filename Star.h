#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

class Star {
private:
	string name;
	string constellation;
	int RA;
	int DEC;
	int diameter;

public:
	Star();
	Star(string& n, string& c, int ra, int dec, int d);
	//getters
	int get_ra() { return this->RA; }
	int get_dec() { return this->DEC; }
	string get_name() { return this->name; }
	string get_constellation() { return this->constellation; }
	int get_diameter() { return this->diameter; }

	//setters
	void set_ra(int i) { RA = i; }
	void set_dec(int i) { DEC = i; }
	void set_name(string nm) { name = nm; }
	void set_constellation(string c) { constellation = c; }
	void set_diameter(int i) { diameter = i; }


	//string mode
	string to_String();

	//tokenize
	vector<string> tokenize(string& str, char separator);

	//operators
	friend bool operator==(Star&, Star&);
	friend istream& operator>>(istream& is, Star& p);
	friend ostream& operator<<(ostream& os, Star& p);

	~Star() {}
};