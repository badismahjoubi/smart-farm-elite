#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "capteur.h"
#include <gtk/gtk.h>

GtkListStore *adstore;/*creation du modele de type liste*/
GtkTreeViewColumn *adcolumn;/*visualisation des colonnes*/
GtkCellRenderer *cellad;/*afficheur de cellule(text,image..)*/
FILE *f;


int i;
enum
{
	ETYPE,
	EID,
	EMARQUE,
	EVALEUR,
	EMIN,
	EMAX,
	COLUMNS,
};



////////////////////////////////////////////////////////
void ajouter_capteur(capteur c)
{
FILE *f;
f=fopen("capteur.txt","a+");
if (f!=NULL)
{
fprintf(f,"%s %s %s %s %s %s \n" ,c.type,c.id,c.marque,c.valeur,c.min,c.max);
fclose(f);
}
}
//////////////////////////////////////
int exist_capteur(char*id){
FILE*f=NULL;
 capteur c;
f=fopen("capteur.txt","r");
while(fscanf(f,"%s %s %s %s %s %s \n",c.type,c.id,c.marque,c.valeur,c.min,c.max)!=EOF){
if(strcmp(c.id,id)==0)return 1;
}
fclose(f);
return 0;
}
/////////////////////////////////////////////////////
void afficher_capteur(GtkWidget *liste)
{
	GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter iter;
	GtkListStore *store;

	char type[30];
	char id[30];
	char marque[30];
	char valeur[30];
	char min[30];
	char max[30];
	store=NULL;

	FILE *f;
	
	store=gtk_tree_view_get_model(liste);
	if (store==NULL)
	{
	renderer = gtk_cell_renderer_text_new ();
	column = gtk_tree_view_column_new_with_attributes("type", renderer, "text",ETYPE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new ();
	column = gtk_tree_view_column_new_with_attributes("id", renderer, "text",EID,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new ();
	column = gtk_tree_view_column_new_with_attributes("marque", renderer, "text",EMARQUE,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	renderer = gtk_cell_renderer_text_new ();
	column = gtk_tree_view_column_new_with_attributes("valeur", renderer, "text",EVALEUR,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	

	renderer = gtk_cell_renderer_text_new ();
	column = gtk_tree_view_column_new_with_attributes("min", renderer, "text",EMIN,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	
	renderer = gtk_cell_renderer_text_new ();
	column = gtk_tree_view_column_new_with_attributes("max", renderer, "text",EMAX,NULL);
	gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	}
	
	store=gtk_list_store_new (COLUMNS, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

	f=fopen("capteur.txt","r");
	if(f==NULL)
	{
		return;
	}
	else
	{
		f= fopen("capteur.txt", "a+");
		while(fscanf(f,"%s %s %s %s %s %s \n" ,type,id,marque,valeur,min,max)!=EOF)
		{
			gtk_list_store_append (store, &iter);
			gtk_list_store_set (store, &iter, ETYPE, type, EID, id, EMARQUE, marque, EVALEUR, valeur, EMIN , min, EMAX, max, -1);
		}
		close(f);
		gtk_tree_view_set_model (GTK_TREE_VIEW(liste), GTK_TREE_MODEL (store));
		g_object_unref (store);
	}
}
////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
void supprimer_capteur(char numero[100]){
FILE*f=NULL;
FILE*f1=NULL;
capteur m ;
f=fopen("capteur.txt","r");

f1=fopen("ancien.txt","w");
while(fscanf(f,"%s %s %s %s %s %s\n",m.type,m.id,m.marque,m.valeur,m.min,m.max)!=EOF){
if(strcmp(numero,m.id)!=0)
fprintf(f1,"%s %s %s %s %s %s\n",m.type,m.id,m.marque,m.valeur,m.min,m.max);
}
fclose(f);
fclose(f1);
remove("capteur.txt");
rename("ancien.txt","capteur.txt");

}
///////////////////////////////////////////////////////////////////////////////////
int ChercherCapteur(GtkWidget* treeview1,char*l,char*type)
{
GtkListStore *adstore;/*creation du modele de type liste*/
GtkTreeViewColumn *adcolumn;/*visualisation des colonnes*/
GtkCellRenderer *cellad;/*afficheur de cellule(text,image..)*/
FILE *f;
capteur c;
int nb=0, j;

        /* Creation du modele */
        adstore = gtk_list_store_new(6,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
					G_TYPE_STRING,
                                     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %s %s \n",c.id,c.type,c.marque,c.valeur,c.min,c.max)!=EOF)
        {
	if( strcmp(type,c.type)==0){ nb++;
	GtkTreeIter pIter;
         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,c.id,
                            1,c.type,
                            2,c.marque,
                            3,c.valeur,
                            4,c.min,
				5,c.max,
                            -1);}
}
        fclose(f);

	/* Creation de la 1ere colonne */
if(j==0)
	{cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("id",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);


        /* Ajouter la 1er colonne à la vue */
	//gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


	/* Creation de la 2eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("type",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);
	/* Ajouter la 2emme colonne à la vue */
	//gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 3eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("marque",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);
	/* Ajouter la 3emme colonne à la vue */
	//gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("valeur",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
	/* Ajouter la 4emme colonne à la vue */
	//gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("min",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
	/* Ajouter la 5emme colonne à la vue */
	//gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 6eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("max",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);
	/* Ajouter la 6emme colonne à la vue */
	//gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);




	j++;}


 	gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );
return nb;
}
////////////////////////////////////////////////////////////////////////////////
void modifier_capteur(capteur c,char numero [30]){

supprimer_capteur(numero);
ajouter_capteur(c);


}
///////////////////////////////////////////////////////
void fichierRef() {

FILE*f=NULL;
FILE*f1=NULL;
capteur c;
f=fopen("capteur.txt","r");
f1=fopen("reference.txt","w+");
while (fscanf(f,"%s %s %s %s %s %s \n" ,c.type,c.id,c.marque,c.valeur,c.min,c.max)!=EOF)
{

fprintf(f1,"%s \n",c.id);

}

fclose(f);
fclose(f1);

}
//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void afficherCapteur(GtkWidget* treeview1,char*l){

capteur c;


        /* Creation du modele */
        adstore = gtk_list_store_new(6,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %s %s \n" ,c.type,c.id,c.marque,c.valeur,c.min,c.max)!=EOF)
        {GtkTreeIter pIter;

         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,c.type,
                            1,c.id,
                            2,c.marque,
                            3,c.valeur,
                            4,c.min,
                            5,c.max,
                            -1);}
        fclose(f);


if(i==0)
	{



        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("TYPE",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);
	
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("ID",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);

	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("MARQUE",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);

	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);









	/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("VALEUR",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
	/* Ajouter la 4emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("MIN",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
	/* Ajouter la 5emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 6eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("MAX",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);
	/* Ajouter la 6emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);




	i++;
}


 	gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );





}

///////////////////////////////////////////////////////////////////////////////
void afficherCapteurAlarmante(GtkWidget* treeview1,char*l,int*t,int*h)
{



capteur c;
float val,min,max;

        /* Creation du modele */
        adstore = gtk_list_store_new(6,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING,
                                     G_TYPE_STRING);
        /* Insertion des elements */
        f=fopen(l,"r");
while(fscanf(f,"%s %s %s %s %s %s \n" ,c.type,c.id,c.marque,c.valeur,c.min,c.max)!=EOF)
        {

sscanf(c.valeur,"%f",&val);  
sscanf(c.min,"%f",&min);  
sscanf(c.max,"%f",&max);  
if(val<min || val>max){

if(strcmp(c.type,"humidite")==0){
(*h)++;
}else{
(*t)++;
}

GtkTreeIter pIter;

         /* Creation de la nouvelle ligne */
         gtk_list_store_append(adstore, &pIter);
         /* Mise a jour des donnees */
         gtk_list_store_set(adstore, &pIter,
                            0,c.type,
                            1,c.id,
                            2,c.marque,
                            3,c.valeur,
                            4,c.min,
                            5,c.max,
                            -1);}
	}
        fclose(f);


if(i==0)
	{



        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("TYPE",
                                                            cellad,
                                                            "text", 0,
                                                            NULL);
	
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("ID",
                                                            cellad,
                                                            "text", 1,
                                                            NULL);

	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);


        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("MARQUE",
                                                            cellad,
                                                            "text", 2,
                                                            NULL);

	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);









	/* Creation de la 4eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("VALEUR",
                                                            cellad,
                                                            "text", 3,
                                                            NULL);
	/* Ajouter la 4emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 5eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("MIN",
                                                            cellad,
                                                            "text", 4,
                                                            NULL);
	/* Ajouter la 5emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);

	/* Creation de la 6eme colonne */
        cellad = gtk_cell_renderer_text_new();
        adcolumn = gtk_tree_view_column_new_with_attributes("MAX",
                                                            cellad,
                                                            "text", 5,
                                                            NULL);
	/* Ajouter la 6emme colonne à la vue */
	gtk_tree_view_append_column(GTK_TREE_VIEW(treeview1), adcolumn);




	i++;
}


 	gtk_tree_view_set_model ( GTK_TREE_VIEW (treeview1),
                                  GTK_TREE_MODEL(adstore)  );











}



