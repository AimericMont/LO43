#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

using namespace std;


class Personne {
protected:
    string firstName;
    string lastName;
public:
    Personne(){}
    Personne(const string& fn, const string& ln):firstName(fn),lastName(ln){}
    string getLastName(){return lastName;};
    string getFirstName(){return firstName;};
    Personne& operator=(Personne &p){
        firstName=p.firstName;
        lastName=p.lastName;
        return *this;
    };
};


class Player : public Personne {
    int overall;
    float power;
    float precision;
public :
    Player(){}
    Player(const string& fn, const string& ln,const int ov, const float po,const float pr):Personne(fn,ln),overall(ov),power(po),precision(pr){}
    int getOverall(){return overall;}
    float getPower(){return power;}
    float getPrecision(){return precision;}
    Player& operator=(Player &p){
        firstName=p.firstName;
        lastName=p.lastName;
        overall=p.overall;
        power=p.power;
        precision=p.precision;
        return *this;
    };
};


class Coach : public Personne{
    int impact;
public:
    Coach(){}
    Coach(const string& fn, const string& ln, const int im):Personne(fn,ln),impact(im){}
    int getImpact(){return impact;}
    Coach& operator=(Coach &p){
        firstName=p.firstName;
        lastName=p.lastName;
        impact=p.impact;
        return *this;
    };
};


#endif // PERSONNE_H
