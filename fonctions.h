#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "client.h"





typedef struct {
	Jeu jeu;
	Date date;
	int nbPdisp; //nb de places dispo
	int nbPtot; //nb de places totales
} Afternoon;



void printMenu(int *choix); // Done
void Menu (); // Done

Jeu readJeu(FILE *fe); //Done
Jeu **loadGameList (int *nb); // Done
int findJeu(Jeu **tJeu, int nb, char *nom, bool *t); //DICHOTOMIQUE VOIR COURS //TODO DOESN'T WORK

void newEmprunt(char *nom, char *prenom, char *game, Jeu **tJeu, int nbj, Client **tCli, int nbc); //Done
//void saveEmp()

Afternoon * newAfternoon(Jeu jeu, Date date, int nbtot); // Done
void regForAfternoon(Client client, Afternoon aftern); //Done

int subDate(Date d1, Date d2); // Done