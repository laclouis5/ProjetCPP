#ifndef Collection_h
#define Collection_h

#include <iostream>
#include <string>

#include "cpoint.h"

class Collection {
    
private:
    CPoint listPoints[100];
    int Size;
    int Ir;
    int Iw;
    
public:
    Collection();
    
    CPoint GetPoint();
    void AddPoint(CPoint _point);
    int GetRead();
    int GetWrite();
    int GetSize();
    bool IsEmpty();
    
    // ~Collection();
};

#endif /* Collection_h */
