#include <stdio.h>
#include <stdlib.h>
#define TAILLE_BATEAU 3
#define TAILLE_FLOTTE 5
//BUT : Produire un code en C de la bataille navale
//ENTREE : On entre des points
//SORTIE : Le programme nous dit si on touche les points ou non

//TYPE STRUCT
typedef struct Cellule
{
    int x;
    int y;

}Cellule;



typedef struct Bateau
{
    Cellule cel[TAILLE_BATEAU];

}Bateau;



typedef struct Flotte
{
    Bateau bat[TAILLE_FLOTTE];

}Flotte;




//ENUM à utiliser pour les fonction de vérification
enum BOOL{
    True,False, //True=0, False=1,
};



//PROTO
Cellule creeCellule(int x, int y);
Bateau creeBateau(Cellule cel1,Cellule cel2,Cellule cel3);
void creeFlotte(Flotte *flotte);
enum BOOL verifCellule(Cellule cel1, Cellule cel2);



//MAIN
int main()
{
    Flotte flotte[2]; // pour 0 1 donc 2 joueurs
    int x;
    int y;



    creeCellule(x,y);

    return 0;
}




//FONCTIONS ET PROCEDURES
Cellule creeCellule(int x, int y)
{
    Cellule cel;
    cel.x=x;
    cel.y=y;

    return cel;
}



Bateau creeBateau(Cellule cel1,Cellule cel2,Cellule cel3)
{

    Bateau bat;

    bat.cel[0] = cel1;
    bat.cel[1] = cel2;
    bat.cel[2] = cel3;


    return bat;
}



void creeFlotte(Flotte *flotte)
{

    flotte[0].bat[0] = creeBateau(creeCellule(1,1),creeCellule(1,2),creeCellule(1,3));
    flotte[0].bat[1] = creeBateau(creeCellule(4,6),creeCellule(4,7),creeCellule(4,8));
    flotte[0].bat[2] = creeBateau(creeCellule(7,3),creeCellule(8,3),creeCellule(9,3));
    flotte[0].bat[3] = creeBateau(creeCellule(3,1),creeCellule(3,2),creeCellule(3,3));
    flotte[0].bat[4] = creeBateau(creeCellule(7,9),creeCellule(8,9),creeCellule(9,9));

    flotte[1].bat[0] = creeBateau(creeCellule(5,1),creeCellule(6,1),creeCellule(7,1));
    flotte[1].bat[1] = creeBateau(creeCellule(3,3),creeCellule(4,3),creeCellule(5,3));
    flotte[1].bat[2] = creeBateau(creeCellule(8,3),creeCellule(8,4),creeCellule(8,5));
    flotte[1].bat[3] = creeBateau(creeCellule(1,6),creeCellule(1,7),creeCellule(1,8));
    flotte[1].bat[4] = creeBateau(creeCellule(6,8),creeCellule(7,8),creeCellule(8,8));


}

enum BOOL verifCellule(Cellule cel1, Cellule cel2)
{
    if(cel1.x==cel2.x && cel1.y==cel2.y)
    {
        return True;

    }else
    {
        return False;
    }

}


enum BOOL verifBateau(Cellule celtest, Bateau *bat)
{


    if (verifCellule == False)
    {
        if ((celtest == bat.cel[0]) || (celtest == bat.cel[1]) || (celtest == bat.cel[2]))
        {
            return True;

        }else
        {
            return False;
        }
    }
}
