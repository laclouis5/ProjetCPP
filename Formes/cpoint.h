#ifndef CPOINT_H
#define CPOINT_H

#include <iostream>
#include <string>

#include "cpixel.h"
#include "cimage.h"

class CPoint {

private:
    int X;
    int Y;
    int Z;
    int couleur[3];
    int transp;

public:
    CPoint();
    CPoint(int _X, int _Y, int _couleur[3]);
    CPoint(int _X, int _Y, int _couleur[3], int _transp);
    CPoint(int _X, int _Y, int _couleur[3], int _transp, int _Z);
    // ~CPoint();

    void RemplirPoint(int _X, int _Y, int _couleur[3], int _transp);
    
    void Tracer(CImage img);
    
    int GetX() const;
    int GetY() const;
    int GetZ() const;

};

#endif // CPOINT_H
