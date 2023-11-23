//
// Created by Student on 23. 11. 2023..
//

#include "predmet.h"
# include<iostream>
# include <cstring>

predmet::predmet(const char *n, int o) {
    strcpy(this->naziv,n);
    this -> ocjena = o;

}
void predmet::setNaziv() {
    std::cout<<"Unesite naziv predmeta: ";
    std::cin.getline(this->naziv,50);
    std::cin.ignore();
}

void predmet::setOcjena() {
    std::cout<<"Unesite ocjenu ";
    std::cin >> this->ocjena;
    std::cin.ignore();
}
char *predmet::getNaziv() {
    return naziv;
}
int predmet::getOcjena() {
    return ocjena;

}
std ::istream &operator >> (std::istream &stream, predmet &p){
    p.setNaziv();
    p.setOcjena();
    return stream;
}

std ::ostream &operator >> (std::ostream &stream, predmet &p){
    stream <<p.getNaziv() << " - ("<<p.getOcjena()<< ") " ;
    return stream;
}
predmet::predmet(const predmet &p) {
    strcpy(this->naziv, p.naziv);
    this -> ocjena = p.ocjena;

}