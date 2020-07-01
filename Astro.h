#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

class Astronomer {
private:
	string name;
	string constellation;

public:
	Astronomer();
	Astronomer(string& n, string& c);
	//getters
	string get_name() { return this->name; }
	string get_constellation() { return this->constellation; }

	//setters
	void set_name(string n) { name = n; }
	void set_constellation(string c) { constellation = c; }

	//string mode
	string to_String();

	//tokenize
	vector<string> tokenize(string& str, char separator);

	//operators
	friend bool operator==(Astronomer&, Astronomer&);
	friend istream& operator>>(istream& is, Astronomer& q);
	friend ostream& operator<<(ostream& os, const Astronomer& q);

	~Astronomer() {}
};