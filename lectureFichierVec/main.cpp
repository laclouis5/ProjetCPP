//
//  main.cpp
//  lectureFichierVec
//
//  Created by Louis Lac on 09/05/2017.
//  Copyright © 2017 Louis Lac. All rights reserved.
//

#include <iostream>

#include "lectureFichier.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    if(lectureFichier() < 0)
        cerr << "Erreur dans l'execution de la lecture\n" << endl;
    
    return 0;
}
