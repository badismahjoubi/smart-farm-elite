#include <gtk/gtk.h>
typedef struct
{
char id[30];
char type[30];

char marque[30];
char valeur[30];
char min[30];
char max[30];
} capteur;

void ajouter_capteur(capteur c);
void afficher_capteur(GtkWidget *liste);
int exist_capteur(char*id);
void supprimer_capteur(char numero[100]);
int ChercherCapteur(GtkWidget* treeview1,char*l,char*type);

void modifier_capteur(capteur c,char numero [30]);

//////////////
void afficherCapteur(GtkWidget* treeview1,char*l);
void afficherCapteurAlarmante(GtkWidget* treeview1,char*l,int*t,int*h);
