#include "Star.h"

Star::Star() : name(""), constellation(""), RA(), DEC(), diameter() {}

Star::Star(string& n, string& c, int ra, int dec, int d) {
    this->name = n;
    this->constellation = c;
    this->RA = ra;
    this->DEC = dec;
    this->diameter = d;
}

vector<string> Star::tokenize(string& str, char separator) {
    vector<string> result;
    stringstream ss(str);
    string token;
    while (getline(ss, token, separator))
        result.push_back(token);
    return result;
}

string Star::to_String() {
    return "Name: " + this->get_name() + " Constellation: " + this->get_constellation() + " RA: " + to_string(this->get_ra()) + " DEC: " +
        to_string(this->get_dec()) + " Diameter: " + to_string(this->get_diameter());
}

bool operator==(Star& p1, Star& p2) {
    return{
           p1.get_name() == p2.get_name() &&
           p1.get_constellation() == p2.get_constellation() &&
           p1.get_ra() == p2.get_ra() &&
           p1.get_dec() == p2.get_dec() &&
           p1.get_diameter() == p2.get_diameter()
    };
}

istream& operator>>(istream& is, Star& p) {
    string line;
    getline(is, line);
    vector<string> tokens = p.tokenize(line, ',');
    if (tokens.size() != 5)
        return is;
    p.set_name(tokens.at(0));
    p.set_constellation(tokens.at(1));
    p.set_ra(stoi(tokens.at(2)));
    p.set_dec(stoi(tokens.at(3)));
    p.set_diameter(stoi(tokens.at(4)));

    return is;
}

ostream& operator<<(ostream& os, Star& p) {
    os << p.get_name() << "," << p.get_constellation() << "," << to_string(p.get_ra()) << "," << to_string(p.get_dec()) << "," << to_string(p.get_diameter()) << endl;
    return os;
}