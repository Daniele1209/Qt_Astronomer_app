#include "Repo.h"

void Repo::load_astro() {
    ifstream f(this->astro_path);
    Astronomer curr;
    while (f >> curr)
    {
        astronomers.push_back(curr);
    }
}

void Repo::load_stars() {
    ifstream f(this->star_path);
    Star curr;
    while (f >> curr)
    {
        stars.push_back(curr);
    }
}

void Repo::write_astro(vector<Astronomer> o) {
    ofstream f{ this->astro_path };
    for (auto& part : o)
    {
        f << part;
    }
    f.close();
    o.clear();
}

void Repo::write_star(vector<Star> o) {
    ofstream f{ this->star_path };
    for (auto& part : o)
    {
        f << part;
    }
    f.close();
    o.clear();
}

vector<Astronomer> Repo::get_astros() {
    return this->astronomers;
}

vector<Star> Repo::get_stars() {
    return this->stars;
}

void Repo::add_star(Star& elem) {
    vector<Star> vect;
    vect = this->get_stars();
    for (auto curr : vect)
        if (curr == elem)
            throw exception("Element already present in the list!\n\n");
    vect.push_back(elem);
    this->stars = vect;
    this->write_star(vect);
}
/*
Object2 Repo2::search_element(Object2& elem) {
    vector<Object2> vect;
    vect = this->get_vector();
    for (auto curr : vect)
        if (curr == elem)
            return curr;
    throw exception("Element not found in the list!\n\n");
}
*/