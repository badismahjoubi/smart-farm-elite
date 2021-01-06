#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>


#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "capteur.h"
int i;
void
on_ajouter_clicked                     (GtkWidget       *gestion,
                                        gpointer         user_data)
{

capteur c;
GtkWidget *entryType;
GtkWidget *entryId;
GtkWidget *entryMarque;
GtkWidget *entryValeur;
GtkWidget *entryMin;
GtkWidget *entryMax;
GtkWidget *labelType;
GtkWidget *labelId;
GtkWidget *labelMarque;
GtkWidget *labelValeur;
GtkWidget *labelMin;
GtkWidget *labelMax;
GtkWidget *existe;
GtkWidget *success;
int b=1;



entryType=lookup_widget(gestion,"combobox1");
entryId=lookup_widget(gestion,"id");
entryMarque=lookup_widget(gestion,"marque");
entryValeur=lookup_widget(gestion,"valeur");
entryMin=lookup_widget(gestion,"min");
entryMax=lookup_widget(gestion,"max");

labelType=lookup_widget(gestion,"label36");
labelId=lookup_widget(gestion,"label37");
labelMarque=lookup_widget(gestion,"label38");
labelValeur=lookup_widget(gestion,"label39");
labelMin=lookup_widget(gestion,"label40");
labelMax=lookup_widget(gestion,"label41");
existe=lookup_widget(gestion,"label34");
success=lookup_widget(gestion,"label35");
        strcpy(c.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(entryType)));
        strcpy(c.id,gtk_entry_get_text(GTK_ENTRY(entryId)));
	strcpy(c.marque,gtk_entry_get_text(GTK_ENTRY(entryMarque)));
	strcpy(c.valeur,gtk_entry_get_text(GTK_ENTRY(entryValeur)));
	strcpy(c.min,gtk_entry_get_text(GTK_ENTRY(entryMin)));
	strcpy(c.max,gtk_entry_get_text(GTK_ENTRY(entryMax)));

 gtk_widget_hide (success);
// controle saisie
if(strcmp(c.type,"")==0){
		  gtk_widget_show (labelType);
b=0;
}
else {
		  gtk_widget_hide(labelType);
}

if(strcmp(c.id,"")==0){
		  gtk_widget_show (labelId);
b=0;
}
else {
		  gtk_widget_hide(labelId);
}
if(strcmp(c.marque,"")==0){
		  gtk_widget_show (labelMarque);
b=0;
}
else {
		  gtk_widget_hide(labelMarque);
}
if(strcmp(c.valeur,"")==0){
		  gtk_widget_show (labelValeur);
b=0;
}
else {
		  gtk_widget_hide(labelValeur);
}
if(strcmp(c.min,"")==0){
		  gtk_widget_show (labelMin);
b=0;
}
else {
		  gtk_widget_hide(labelMin);
}
if(strcmp(c.max,"")==0){
		  gtk_widget_show (labelMax);
b=0;
}
else {
		  gtk_widget_hide(labelMax);
}


if(b==1){

       if(exist_capteur(c.id)==1)
        {

				  gtk_widget_show (existe);
        }
        else {
						  gtk_widget_hide (existe);
                ajouter_capteur(c);

						  gtk_widget_show (success);
        }
//mise a jour du treeView
        GtkWidget*p=lookup_widget(gestion,"treeview3");

        //AfficherCapteur(p,"capteur.txt");

}
}



void
on_treeview3_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	GtkTreeIter iter;
	gchar *type;
        gchar *id;
        gchar *marque;
        gchar *valeur;
	gchar *min;
	gchar *max;
	capteur k;
	
	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if (gtk_tree_model_get_iter(model, &iter, path))
	{
		gtk_tree_model_get (GTK_LIST_STORE(model), &iter, 0, &type, 1, &id, 2, &marque, 3, &valeur, 4, &min, 5, &max, -1);
		strcpy(k.type,type);
		strcpy(k.id,id);
		strcpy(k.marque,marque);
		strcpy(k.valeur,valeur);
		strcpy(k.min,min);
		strcpy(k.max,max);
		
		///////appele fonction suprrimer 
		///supprimer_capteur(c);
		
		afficher_capteur(treeview);
		
        

}
}
	


void
on_consulter_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *Affich;
GtkWidget *treevie;

Affich=lookup_widget(objet,"label6");

treevie=lookup_widget(objet,"treeview3");


afficher_capteur(treevie);

}


void
on_supprimer_clicked                   (GtkWidget       *gestion,
                                        gpointer         user_data)
{
 
   	GtkTreeModel     *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
        GtkWidget* p;
        GtkWidget *label;
        gchar *numero;
	gchar*type;
gchar*valeur;
gchar*marque ;
gchar*min;
gchar*max;//gchar* type gtk ==> chaine en c car la fonction gtk_tree_model_get naccepte que gchar*
        label=lookup_widget(gestion,"label44");
        p=lookup_widget(gestion,"treeview3");




        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(p));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))//test sur la ligne selectionnée
        {  gtk_tree_model_get (model,&iter,0,&type,1,&numero,2,&marque,3,&valeur,4,&min,5,&max,-1);
           gtk_list_store_remove(GTK_LIST_STORE(model),&iter);//supprimer la ligne du treeView

           supprimer_capteur(numero);// supprimer la ligne du fichier

           gtk_widget_hide (label);}
else{
                gtk_widget_show (label);
        }
}


void
on_chercher_clicked                    (GtkButton       *gestion,
                                        gpointer         user_data)
{
GtkWidget *p1;
GtkWidget *entry;
GtkWidget *labelid;
GtkWidget *nbResultat;
GtkWidget *message;
char id[30];
char chnb[30];
int b=0,nb;
entry=lookup_widget(gestion,"entry10");
labelid=lookup_widget(gestion,"label47");
p1=lookup_widget(gestion,"treeview3");
strcpy(id,gtk_entry_get_text(GTK_ENTRY(entry)));

if(strcmp(id,"")==0){
  gtk_widget_show (labelid);b=0;
}else{
b=1;
gtk_widget_hide (labelid);}

if(b==0){return;}else{

nb=ChercherCapteur(p1,"capteur.txt",id);
/* afficher le nombre de resultats obtenue par la recherche */
sprintf(chnb,"%d",nb);//conversion int==> chaine car la fonction gtk_label_set_text naccepte que chaine
nbResultat=lookup_widget(gestion,"label50");
message=lookup_widget(gestion,"label49");
gtk_label_set_text(GTK_LABEL(nbResultat),chnb);

gtk_widget_show (nbResultat);
gtk_widget_show (message);



}

}


void
on_Modifier_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
       	 


GtkWidget *combo,*btn;
combo=lookup_widget(objet_graphique,"combobox2");
btn=lookup_widget(objet_graphique,"modifier");
gtk_widget_set_sensitive ( btn, FALSE);//disable button
fichierRef();

char id[30];

FILE *f=NULL;
f = fopen("reference.txt","r");
if(f!=NULL)
{
 while (fscanf(f,"%s \n " ,id)!=EOF)
gtk_combo_box_append_text (GTK_COMBO_BOX(combo),(id));
}
fclose(f);
remove("reference.txt");

}



void
on_gestion2_clicked                    (GtkButton       *objet,
                                        gpointer         user_data)
{

GtkWidget *Gestion;
GtkWidget *Aceuill;

Gestion=lookup_widget(objet,"gestion1");
gtk_widget_destroy(Gestion);
Aceuill = create_Aceuill ();

/*Preparation Treeview*/
GtkWidget *p;
p=lookup_widget(Aceuill,"stattreeview");
i=0;
afficherCapteur(p,"capteur.txt");

gtk_widget_show(Aceuill);
}


void
on_Quitter_clicked                     (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *quitter;
quitter=lookup_widget(objet,"gestion1");
gtk_widget_destroy(quitter);
}


void
on_retour_clicked                      (GtkButton       *objet,
                                        gpointer         user_data)
{
GtkWidget *retour,*dd;
retour=lookup_widget(objet,"Aceuill");
gtk_widget_destroy(retour);
dd=create_gestion1();
gtk_widget_show(dd);
}


void
on_remplir_clicked                     (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *ref,*nom,*prenom,*tel,*fonction,*jour,*mois,*annee,*jour1,*mois1,*annee1,*identifiant;

identifiant=lookup_widget(objet_graphique,"combobox2");
nom=lookup_widget(objet_graphique,"type1");
prenom=lookup_widget(objet_graphique,"marque1");
tel=lookup_widget(objet_graphique,"valeur1");
fonction=lookup_widget(objet_graphique,"min1");

jour=lookup_widget(objet_graphique,"max1");

char var[10];
strcpy(var,gtk_combo_box_get_active_text(GTK_COMBO_BOX(identifiant)));
capteur c;
FILE *f=NULL;
f = fopen("capteur.txt","r");
if(f!=NULL)
{
 while (fscanf(f,"%s %s %s %s %s %s \n" ,c.type,c.id,c.marque,c.valeur,c.min,c.max)!=EOF)

{
if(strcmp(var,c.id)==0)
{
//gtk_entry_set_text (ref,t.ref);
gtk_entry_set_text (nom,c.type);
gtk_entry_set_text (prenom,c.marque);
gtk_entry_set_text (tel,c.valeur);
gtk_entry_set_text (fonction,c.min);
gtk_entry_set_text (jour,c.max);





}


}
}
fclose(f);
}


void
on_modifiercap_clicked                 (GtkButton       *objet_graphique,
                                        gpointer         user_data)
{

capteur p;
	GtkWidget *identifiant,*nom,*prenom,*tel,*jour, *mois, *annee, *fonction,*jour1, *mois1, *annee1 ;
	char ver[30];

	
	identifiant=lookup_widget(objet_graphique,"combobox2");
	nom=lookup_widget(objet_graphique,"type1");
	prenom=lookup_widget(objet_graphique,"marque1");
	tel=lookup_widget(objet_graphique, "valeur1");
	fonction=lookup_widget(objet_graphique, "min1");

	jour=lookup_widget(objet_graphique, "max1");
	
	strcpy(ver,gtk_combo_box_get_active_text(GTK_COMBO_BOX(identifiant)));
	

	
	strcpy(p.type,gtk_entry_get_text(GTK_ENTRY(nom)));
	strcpy(p.marque,gtk_entry_get_text(GTK_ENTRY(prenom)));
	strcpy(p.valeur,gtk_entry_get_text(GTK_ENTRY(tel)));
	strcpy(p.min,gtk_entry_get_text(GTK_ENTRY(fonction)));
	strcpy(p.max,gtk_entry_get_text(GTK_ENTRY(jour)));

	strcpy(p.id,gtk_combo_box_get_active_text(GTK_COMBO_BOX(identifiant)));
	
	





	modifier_capteur(p,ver);

	

	
	
	






}


void
on_buttonactu_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *AZwindowstatistiques;
//GtkWidget *stattreevie;
AZwindowstatistiques=lookup_widget(button,"Aceuill");
//stattreevie=lookup_widget(AZwindowstatistiques,"stattreeview");
//affichagestat(stattreevie);

/*refresh Treeview*/
GtkWidget *p;
p=lookup_widget(AZwindowstatistiques,"stattreeview");
afficherCapteur(p,"capteur.txt");

}


void
on_buttonstat_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
int t=0,h=0;
char chh[30],cht[30];
capteur c;
//GtkWidget *windowcapteurs;
GtkWidget *Aceuill;
GtkWidget *labelt;
GtkWidget *labelh;
GtkWidget *labelm;
GtkWidget *stattreeview;

Aceuill = lookup_widget(button,"Aceuill");
labelt=lookup_widget(Aceuill,"labelt");
labelh=lookup_widget(Aceuill,"labelh");


GtkWidget *p;
p=lookup_widget(Aceuill,"stattreeview");
afficherCapteurAlarmante(p,"capteur.txt",&t,&h);





sprintf(cht,"%d",t);
sprintf(chh,"%d",h);

gtk_label_set_text(labelt,cht);
gtk_label_set_text(labelh,chh);


gtk_widget_show(Aceuill);
}

