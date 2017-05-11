#include <iostream>
#include <string>


#include "cbitmap.h"
#include "cimage.h"
#include "cpoint.h"

#include "lectureFichier.h"
#include "Collection.h"

using namespace std;

int main(int argc, char * argv[]) {
    cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;
    cout << "(II) + Number of arguments = " << argc << endl;

    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image   = new CBitmap();
    string filename2 = "Sortie.bmp";

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(200, 200); // création d'une image noire
    
    CPoint point;
    Collection *collection();
    
    int color[3];
    color[0] = 2;
    color[1] = 4;
    color[2] = 8;
    
    point.RemplirPoint(12, 13, color, 75);
    collection->AddPoint(point);
    
    //lectureFichier(collection);
    
    image->setImage(img);
    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);

    return 1;
}
