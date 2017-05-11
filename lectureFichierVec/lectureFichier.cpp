#include "lectureFichier.h"
#include "cpoint.h"

using namespace std;

void getColor(int COULEUR, int *couleur)
{
    couleur[0] = COULEUR/1000000;
    couleur[1] = COULEUR/1000 - 1000*couleur[0];
    couleur[2] = COULEUR - 1000*couleur[1] - 1000000*couleur[0];
}

int lectureFichier(Collection *collection)
{
    ifstream fileIn("/Users/laclouis5/Documents/Etudes/Enseirb-Matmeca/Cours E2/Prog C++/LectureFichierVec/fichier_initial.txt", ios::in);
    
    if(fileIn)
    {
        while(fileIn.eof() == 0)
        {
            cout << "Fichier en cours de lecture ...\n" << endl;
            
            string SHAPE = "";
            fileIn >> SHAPE;
        
            int X = 0, Y = 0, X1 = 0, X2 = 0, Y1 = 0, Y2 = 0, Z = 0, COULEUR = 0, TRANSP = 0, LONGUEUR = 0, HAUTEUR = 0, RAYON = 0;
            int couleur[3];
            
            if(SHAPE == "POINT")
            {
                fileIn >> X >> Y >> COULEUR >> TRANSP >> Z;

                getColor(COULEUR, couleur);
                
                cout << "Forme : " << SHAPE << "\nX : " << X << "\nY : " << Y << "\nCouleur : " << COULEUR << "\nTransparence : " << TRANSP << "\nPlan : " << Z << "\n" << endl;
                
                // collection->AddPoint(CPoint(X, Y, couleur, TRANSP));
            }
            
            else if(SHAPE.compare("LIGNE") == 0)
            {
                fileIn >> X1 >> Y1 >> X2 >> Y2 >> COULEUR >> TRANSP >> Z;

                getColor(COULEUR, couleur);
                
                cout << "Forme : " << SHAPE << "\nX1 : " << X1 << "\nY1 : " << Y1 << "\nX2 : " << X2 << "\nY2 : " << Y2 << "\nCouleur : " << COULEUR << "\nTransparence : " << TRANSP << "\nPlan : " << Z << "\n" << endl;
            }
            
            else if(SHAPE == "RECTANGLE")
            {
                fileIn >> X >> Y >> LONGUEUR >> HAUTEUR >> COULEUR >> TRANSP >> Z;
                
                getColor(COULEUR, couleur);
                
                cout << "Forme : " << SHAPE << "\nX : " << X << "\nY : " << Y << "\nLONGUEUR : " << LONGUEUR << "\nHAUTEUR : " << HAUTEUR << "\nCouleur : " << COULEUR << "\nTransparence : " << TRANSP << "\nPlan : " << Z << "\n" << endl;
            }
            
            else if(SHAPE == "CARRE")
            {
                fileIn >> X >> Y >> LONGUEUR >> COULEUR >> TRANSP >> Z;
                
                getColor(COULEUR, couleur);
                
                cout << "Forme : " << SHAPE << "\nX : " << X << "\nY : " << Y << "\nLONGUEUR : " << LONGUEUR << "\nCouleur : " << COULEUR << "\nTransparence : " << TRANSP << "\nPlan : " << Z << "\n" << endl;
            }
            
            else if(SHAPE == "CERCLE")
            {
                fileIn >> X >> Y >> RAYON >> COULEUR >> TRANSP >> Z;
                
                getColor(COULEUR, couleur);
                
                cout << "Forme : " << SHAPE << "\nX : " << X << "\nY : " << Y << "\nRayon : " << RAYON << "\nCouleur : " << COULEUR << "\nTransparence : " << TRANSP << "\nPlan : " << Z << "\n" << endl;
            }
            
            else if(SHAPE == "RECTANGLES")
            {
                fileIn >> X >> Y >> LONGUEUR >> HAUTEUR >> COULEUR >> TRANSP >> Z;
                
                getColor(COULEUR, couleur);
                
                cout << "Forme : " << SHAPE << "\nX : " << X << "\nY : " << Y << "\nLONGUEUR : " << LONGUEUR << "\nHAUTEUR : " << HAUTEUR << "\nCouleur : " << COULEUR << "\nTransparence : " << TRANSP << "\nPlan : " << Z << "\n" << endl;
            }
            
            else if(SHAPE == "CARRES")
            {
                fileIn >> X >> Y >> LONGUEUR >> COULEUR >> TRANSP >> Z;
                
                getColor(COULEUR, couleur);
                
                cout << "Forme : " << SHAPE << "\nX : " << X << "\nY : " << Y << "\nLONGUEUR : " << LONGUEUR << "\nCouleur : " << COULEUR << "\nTransparence : " << TRANSP << "\nPlan : " << Z << "\n" << endl;
            }
            
            else if(SHAPE == "CERCLES")
            {
                fileIn >> X >> Y >> RAYON >> COULEUR >> TRANSP >> Z;
                
                getColor(COULEUR, couleur);
                
                cout << "Forme : " << SHAPE << "\nX : " << X << "\nY : " << Y << "\nRayon : " << RAYON << "\nCouleur : " << COULEUR << "\nTransparence : " << TRANSP << "\nPlan : " << Z << "\n" << endl;
            }
        
            else
            {
                cerr << "Type de figure non trouvé\n" << endl;
                return -1;
            }
        }
        
        fileIn.close();
        
        cout << "Fichier lu avec succès !\n" << endl;
    }
    
    else
    {
        cerr << "Impossible d'ouvrir le fichier\n" << endl;
        return -2;
    }
    
    return 0;
}
