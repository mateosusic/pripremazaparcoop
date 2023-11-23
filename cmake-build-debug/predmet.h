//
// Created by Student on 23. 11. 2023..
//

#ifndef UNTITLED_PREDMET_H
#define UNTITLED_PREDMET_H

#include <iostream>


class predmet {
private:
    char naziv[50];
    int ocjena;
public:
    predmet(const char* n, int o);
    predmet (const predmet& p);
    void setNaziv();
    void setOcjena();
    char * getNaziv();
    int getOcjena();
    friend std::istream& operator >>(std::istream& stream,predmet& p );
    friend std::ostream& operator <<(std::ostream& stream,predmet& p );
};


#endif //UNTITLED_PREDMET_H
