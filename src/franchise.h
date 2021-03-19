#ifndef FRANCHISE_H
#define FRANCHISE_H
#include "personne.h"
#include <string>
#include "liste.h"

using namespace std;

class Franchise {
public:
    string city;
    string name;
    string abreviation;
    liste<Player> lpr;
    Coach headCoach;
    int ovr;
public :
    Franchise(){}
    Franchise(const string& ct, const string& nm, const string& ab, liste<Player>& lp, const Coach& co,const int ov):city(ct),name(nm),abreviation(ab),lpr(lp),headCoach(co),ovr(ov){}
    string getCity(){return city;}
    string getName(){return name;}
    string getAbreviation(){return abreviation;}
    int getOvr(){return ovr;}
};


#endif // FRANCHISE_H
