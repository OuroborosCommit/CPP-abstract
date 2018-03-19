#pragma once
#include<iostream>
using namespace std;


class geometrie
{
protected:
int dim1,dim2;
public:
    geometrie();
    void setDim(int,int);
    //Methode abstraite
    virtual void affiche() = 0;

};
