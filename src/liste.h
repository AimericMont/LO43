#ifndef __LISTE_H
#define __LISTE_H
#include <iostream>
#include "personne.h"

using namespace std;

template<typename T>
class liste {
    T tete;
    liste* reste;
public :
    T& getTete(){
        return tete;
    }

    liste():reste(NULL) {};

    liste(liste &l){
        if(l.reste==NULL){
            reste=NULL;
        }
        else
        {
            tete = l.tete;
            reste = new liste (*l.reste);
        }
    }
    ~liste() {delete reste;};
    int length (){
        if (reste==NULL)
            return 0;
        else
            return 1 + reste->length();  //return 1 + (*reste).length();
    }
    liste& operator=(liste &l){
        if(this!=NULL){
            delete reste;
            if(l.reste==NULL)
                reste=NULL;
            else{
                tete=l.tete;
                reste = new liste (* l.reste);
            }
        }
        return *this;
    };
    void ajouter (int pas, T& elt)
    {
        if(pas==0 || reste==NULL)
        {
                liste* temp = new liste();
                temp->tete=tete;
                temp->reste=reste;
                tete=elt;
                reste=temp;
        }
        else
        {
            (*reste).ajouter(pas-1,elt);
        }
    };
    void retirer (int pos){

        if(pos==0 || reste==NULL)
        {
            liste* temp;
            temp=reste;
            reste=reste->reste;
            tete=reste->tete;
            temp->reste=NULL;
            delete temp;

        }
        else
        {
            (*reste).retirer(pos-1);
        }
    };
    liste& autoconcat(liste& l){
        if (l.reste!=NULL){
            ajouter(this->length(),l.tete);
            autoconcat(*l.reste);
        }
        return *this;
    }
    T& operator[] (int pos){
        if(reste==NULL || pos==0)
            return tete;
        else
            return (*reste)[pos-1];
    }
    friend ostream & operator<<(ostream &o, liste& l)
    {
        if(l.reste!=NULL){
            cout << l.tete << endl;
            cout << *(l.reste);
        }
        return o;
    }
};

#endif
