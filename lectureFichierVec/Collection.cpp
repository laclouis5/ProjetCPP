//
//  Collection.cpp
//  LectureFichierVec
//
//  Created by Louis Lac on 10/05/2017.
//  Copyright © 2017 Louis Lac. All rights reserved.
//

#include "Collection.h"

Collection::Collection() : Ir(0), Iw(0), Size(100)
{
    
}

int Collection::GetWrite() {
    return Iw;
}

int Collection::GetRead() {
    return Ir;
}

int Collection::GetSize() {
    return Size;
}

bool Collection::IsEmpty() {
    return (Iw - Ir)>0;
}

void Collection::AddPoint(CPoint _point) {
    listPoints[Iw] = _point;
    if(Iw == Size) Iw = 0;
    else Iw++;
}

CPoint Collection::GetPoint() {
    CPoint point = listPoints[Ir];
    if (Ir == Size) Ir = 0;
    else Ir ++;
    
    return point;
}
