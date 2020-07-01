#include "Astro.h"

Astronomer::Astronomer() : name(""), constellation("") {}

Astronomer::Astronomer(string& n, string& c) {
    this->name = n;
    this->constellation = c;
}

string Astronomer::to_String()
{
    return "Name: " + this->get_name() + " Constellation: " + this->get_constellation();
}

vector<string> Astronomer::tokenize(string& str, char separator) {
    vector<string> result;
    stringstream ss(str);
    string token;
    while (getline(ss, token, separator))
        result.push_back(token);
    return result;
}

bool operator==(Astronomer& q1, Astronomer& q2) {

    return{
        q1.get_name() == q2.get_name() &&
        q1.get_constellation() == q1.get_constellation()
    };
}

istream& operator>>(istream& is, Astronomer& q) {
    string line;
    getline(is, line);
    vector<string> tokens = q.tokenize(line, ',');
    if (tokens.size() != 2)
        return is;
    q.set_name(tokens.at(0));
    q.set_constellation(tokens.at(1));
    return is;
}

ostream& operator<<(ostream& os, const Astronomer& q) {

    os << q.name << "," << q.constellation << endl;
    return os;
}
