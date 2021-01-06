/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_Aceuill (void)
{
  GtkWidget *Aceuill;
  GtkWidget *vpaned1;
  GtkWidget *fixed5;
  GtkWidget *fixed1;
  GtkWidget *retour;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label63;
  GtkWidget *notebook;
  GtkWidget *fixed3;
  GtkWidget *id;
  GtkWidget *marque;
  GtkWidget *valeur;
  GtkWidget *min;
  GtkWidget *max;
  GtkWidget *label11;
  GtkWidget *label12;
  GtkWidget *label10;
  GtkWidget *label9;
  GtkWidget *label8;
  GtkWidget *label7;
  GtkWidget *ajouter;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label13;
  GtkWidget *label35;
  GtkWidget *label34;
  GtkWidget *label36;
  GtkWidget *label37;
  GtkWidget *label38;
  GtkWidget *label39;
  GtkWidget *label40;
  GtkWidget *label41;
  GtkWidget *combobox1;
  GtkWidget *label4;
  GtkWidget *fixed4;
  GtkWidget *marque1;
  GtkWidget *valeur1;
  GtkWidget *label54;
  GtkWidget *label53;
  GtkWidget *label52;
  GtkWidget *label51;
  GtkWidget *min1;
  GtkWidget *label55;
  GtkWidget *max1;
  GtkWidget *label57;
  GtkWidget *type1;
  GtkWidget *label64;
  GtkWidget *combobox2;
  GtkWidget *remplir;
  GtkWidget *modifier;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label65;
  GtkWidget *modifiercap;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image10;
  GtkWidget *label66;
  GtkWidget *label5;
  GtkWidget *fixed2;
  GtkWidget *treeview3;
  GtkWidget *supprimer;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label42;
  GtkWidget *label43;
  GtkWidget *consulter;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label45;
  GtkWidget *entry10;
  GtkWidget *label46;
  GtkWidget *label50;
  GtkWidget *chercher;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label48;
  GtkWidget *label44;
  GtkWidget *label47;
  GtkWidget *label49;
  GtkWidget *label6;
  GtkWidget *fixed7;
  GtkWidget *stattreeview;
  GtkWidget *label70;
  GtkWidget *labelt;
  GtkWidget *labelh;
  GtkWidget *buttonstat;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image11;
  GtkWidget *label72;
  GtkWidget *buttonactu;
  GtkWidget *alignment12;
  GtkWidget *hbox12;
  GtkWidget *image12;
  GtkWidget *label73;
  GtkWidget *label71;
  GtkWidget *label67;

  Aceuill = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Aceuill), _("Gestion Capteur"));

  vpaned1 = gtk_vpaned_new ();
  gtk_widget_show (vpaned1);
  gtk_container_add (GTK_CONTAINER (Aceuill), vpaned1);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_paned_pack1 (GTK_PANED (vpaned1), fixed5, FALSE, TRUE);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_paned_pack2 (GTK_PANED (vpaned1), fixed1, TRUE, TRUE);

  retour = gtk_button_new ();
  gtk_widget_show (retour);
  gtk_fixed_put (GTK_FIXED (fixed1), retour, 640, 8);
  gtk_widget_set_size_request (retour, 130, 40);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (retour), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label63 = gtk_label_new_with_mnemonic (_("Retourner"));
  gtk_widget_show (label63);
  gtk_box_pack_start (GTK_BOX (hbox8), label63, FALSE, FALSE, 0);

  notebook = gtk_notebook_new ();
  gtk_widget_show (notebook);
  gtk_fixed_put (GTK_FIXED (fixed1), notebook, 0, 48);
  gtk_widget_set_size_request (notebook, 800, 500);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (notebook), fixed3);

  id = gtk_entry_new ();
  gtk_widget_show (id);
  gtk_fixed_put (GTK_FIXED (fixed3), id, 176, 128);
  gtk_widget_set_size_request (id, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (id), 8226);

  marque = gtk_entry_new ();
  gtk_widget_show (marque);
  gtk_fixed_put (GTK_FIXED (fixed3), marque, 176, 192);
  gtk_widget_set_size_request (marque, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (marque), 8226);

  valeur = gtk_entry_new ();
  gtk_widget_show (valeur);
  gtk_fixed_put (GTK_FIXED (fixed3), valeur, 176, 264);
  gtk_widget_set_size_request (valeur, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (valeur), 8226);

  min = gtk_entry_new ();
  gtk_widget_show (min);
  gtk_fixed_put (GTK_FIXED (fixed3), min, 248, 344);
  gtk_widget_set_size_request (min, 48, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (min), 8226);

  max = gtk_entry_new ();
  gtk_widget_show (max);
  gtk_fixed_put (GTK_FIXED (fixed3), max, 440, 344);
  gtk_widget_set_size_request (max, 48, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (max), 8226);

  label11 = gtk_label_new (_("Min"));
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed3), label11, 192, 352);
  gtk_widget_set_size_request (label11, 49, 17);

  label12 = gtk_label_new (_("Max"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed3), label12, 384, 352);
  gtk_widget_set_size_request (label12, 49, 17);

  label10 = gtk_label_new (_("Valeur:"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed3), label10, 96, 272);
  gtk_widget_set_size_request (label10, 64, 24);

  label9 = gtk_label_new (_("Marque:"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed3), label9, 80, 192);
  gtk_widget_set_size_request (label9, 80, 32);

  label8 = gtk_label_new (_("Identifiant:"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed3), label8, 72, 136);
  gtk_widget_set_size_request (label8, 96, 24);

  label7 = gtk_label_new (_("Type:"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed3), label7, 104, 56);
  gtk_widget_set_size_request (label7, 41, 17);

  ajouter = gtk_button_new ();
  gtk_widget_show (ajouter);
  gtk_fixed_put (GTK_FIXED (fixed3), ajouter, 560, 120);
  gtk_widget_set_size_request (ajouter, 112, 32);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (ajouter), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label13 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label13);
  gtk_box_pack_start (GTK_BOX (hbox1), label13, FALSE, FALSE, 0);

  label35 = gtk_label_new (_("<span foreground=\"blue\" ><b> Capteur  ajout\303\251 avec succes !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label35, 528, 8);
  gtk_widget_set_size_request (label35, 216, 32);
  gtk_label_set_use_markup (GTK_LABEL (label35), TRUE);

  label34 = gtk_label_new (_("<span foreground=\"black\" ><b> capteur  existant !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label34, 568, 56);
  gtk_widget_set_size_request (label34, 160, 32);
  gtk_label_set_use_markup (GTK_LABEL (label34), TRUE);

  label36 = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir Type !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label36, 369, 40);
  gtk_widget_set_size_request (label36, 104, 40);
  gtk_label_set_use_markup (GTK_LABEL (label36), TRUE);

  label37 = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir Identifiant !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label37, 378, 128);
  gtk_widget_set_size_request (label37, 128, 24);
  gtk_label_set_use_markup (GTK_LABEL (label37), TRUE);

  label38 = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir Marque !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label38, 368, 200);
  gtk_widget_set_size_request (label38, 128, 24);
  gtk_label_set_use_markup (GTK_LABEL (label38), TRUE);

  label39 = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir Valeur !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label39, 370, 272);
  gtk_widget_set_size_request (label39, 120, 16);
  gtk_label_set_use_markup (GTK_LABEL (label39), TRUE);

  label40 = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir valeur Min !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label40, 200, 392);
  gtk_widget_set_size_request (label40, 152, 32);
  gtk_label_set_use_markup (GTK_LABEL (label40), TRUE);

  label41 = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir valeur  Max !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label41, 416, 392);
  gtk_widget_set_size_request (label41, 160, 32);
  gtk_label_set_use_markup (GTK_LABEL (label41), TRUE);

  combobox1 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (combobox1);
  gtk_fixed_put (GTK_FIXED (fixed3), combobox1, 176, 48);
  gtk_widget_set_size_request (combobox1, 160, 32);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("temperature"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1), _("humidite"));

  label4 = gtk_label_new (_("Ajouter"));
  gtk_widget_show (label4);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 0), label4);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (notebook), fixed4);

  marque1 = gtk_entry_new ();
  gtk_widget_show (marque1);
  gtk_fixed_put (GTK_FIXED (fixed4), marque1, 152, 128);
  gtk_widget_set_size_request (marque1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (marque1), 8226);

  valeur1 = gtk_entry_new ();
  gtk_widget_show (valeur1);
  gtk_fixed_put (GTK_FIXED (fixed4), valeur1, 152, 184);
  gtk_widget_set_size_request (valeur1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (valeur1), 8226);

  label54 = gtk_label_new (_("Min :"));
  gtk_widget_show (label54);
  gtk_fixed_put (GTK_FIXED (fixed4), label54, 128, 296);
  gtk_widget_set_size_request (label54, 49, 17);

  label53 = gtk_label_new (_("Valeur :"));
  gtk_widget_show (label53);
  gtk_fixed_put (GTK_FIXED (fixed4), label53, 88, 192);
  gtk_widget_set_size_request (label53, 49, 17);

  label52 = gtk_label_new (_("Marque :"));
  gtk_widget_show (label52);
  gtk_fixed_put (GTK_FIXED (fixed4), label52, 72, 128);
  gtk_widget_set_size_request (label52, 72, 24);

  label51 = gtk_label_new (_("Type :"));
  gtk_widget_show (label51);
  gtk_fixed_put (GTK_FIXED (fixed4), label51, 80, 56);
  gtk_widget_set_size_request (label51, 65, 25);

  min1 = gtk_entry_new ();
  gtk_widget_show (min1);
  gtk_fixed_put (GTK_FIXED (fixed4), min1, 184, 280);
  gtk_widget_set_size_request (min1, 48, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (min1), 8226);

  label55 = gtk_label_new (_("Max :"));
  gtk_widget_show (label55);
  gtk_fixed_put (GTK_FIXED (fixed4), label55, 304, 288);
  gtk_widget_set_size_request (label55, 48, 24);

  max1 = gtk_entry_new ();
  gtk_widget_show (max1);
  gtk_fixed_put (GTK_FIXED (fixed4), max1, 360, 280);
  gtk_widget_set_size_request (max1, 48, 40);
  gtk_entry_set_invisible_char (GTK_ENTRY (max1), 8226);

  label57 = gtk_label_new ("");
  gtk_widget_show (label57);
  gtk_fixed_put (GTK_FIXED (fixed4), label57, 480, 24);
  gtk_widget_set_size_request (label57, 49, 17);

  type1 = gtk_entry_new ();
  gtk_widget_show (type1);
  gtk_fixed_put (GTK_FIXED (fixed4), type1, 152, 56);
  gtk_widget_set_size_request (type1, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (type1), 8226);

  label64 = gtk_label_new (_("choissir id :"));
  gtk_widget_show (label64);
  gtk_fixed_put (GTK_FIXED (fixed4), label64, 120, 8);
  gtk_widget_set_size_request (label64, 160, 32);

  combobox2 = gtk_combo_box_new_text ();
  gtk_widget_show (combobox2);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox2, 288, 16);
  gtk_widget_set_size_request (combobox2, 64, 31);

  remplir = gtk_button_new_with_mnemonic (_("Remplir"));
  gtk_widget_show (remplir);
  gtk_fixed_put (GTK_FIXED (fixed4), remplir, 616, 88);
  gtk_widget_set_size_request (remplir, 88, 32);

  modifier = gtk_button_new ();
  gtk_widget_show (modifier);
  gtk_fixed_put (GTK_FIXED (fixed4), modifier, 608, 32);
  gtk_widget_set_size_request (modifier, 96, 40);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (modifier), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label65 = gtk_label_new_with_mnemonic (_("Valider"));
  gtk_widget_show (label65);
  gtk_box_pack_start (GTK_BOX (hbox9), label65, FALSE, FALSE, 0);

  modifiercap = gtk_button_new ();
  gtk_widget_show (modifiercap);
  gtk_fixed_put (GTK_FIXED (fixed4), modifiercap, 336, 392);
  gtk_widget_set_size_request (modifiercap, 96, 40);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (modifiercap), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image10 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox10), image10, FALSE, FALSE, 0);

  label66 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label66);
  gtk_box_pack_start (GTK_BOX (hbox10), label66, FALSE, FALSE, 0);

  label5 = gtk_label_new (_("Modifier"));
  gtk_widget_show (label5);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 1), label5);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (notebook), fixed2);

  treeview3 = gtk_tree_view_new ();
  gtk_widget_show (treeview3);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview3, 72, 72);
  gtk_widget_set_size_request (treeview3, 432, 264);

  supprimer = gtk_button_new ();
  gtk_widget_show (supprimer);
  gtk_fixed_put (GTK_FIXED (fixed2), supprimer, 224, 376);
  gtk_widget_set_size_request (supprimer, 112, 40);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (supprimer), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label42 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label42);
  gtk_box_pack_start (GTK_BOX (hbox2), label42, FALSE, FALSE, 0);

  label43 = gtk_label_new ("");
  gtk_widget_show (label43);
  gtk_fixed_put (GTK_FIXED (fixed2), label43, 288, 8);
  gtk_widget_set_size_request (label43, 49, 17);

  consulter = gtk_button_new ();
  gtk_widget_show (consulter);
  gtk_fixed_put (GTK_FIXED (fixed2), consulter, 344, 376);
  gtk_widget_set_size_request (consulter, 112, 40);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (consulter), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label45 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label45);
  gtk_box_pack_start (GTK_BOX (hbox3), label45, FALSE, FALSE, 0);

  entry10 = gtk_entry_new ();
  gtk_widget_show (entry10);
  gtk_fixed_put (GTK_FIXED (fixed2), entry10, 640, 128);
  gtk_widget_set_size_request (entry10, 136, 24);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry10), 8226);

  label46 = gtk_label_new (_("Identifiant:"));
  gtk_widget_show (label46);
  gtk_fixed_put (GTK_FIXED (fixed2), label46, 536, 128);
  gtk_widget_set_size_request (label46, 96, 24);

  label50 = gtk_label_new ("");
  gtk_widget_show (label50);
  gtk_fixed_put (GTK_FIXED (fixed2), label50, 576, 256);
  gtk_widget_set_size_request (label50, 56, 40);

  chercher = gtk_button_new ();
  gtk_widget_show (chercher);
  gtk_fixed_put (GTK_FIXED (fixed2), chercher, 656, 184);
  gtk_widget_set_size_request (chercher, 104, 40);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (chercher), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label48 = gtk_label_new_with_mnemonic (_("Chercher"));
  gtk_widget_show (label48);
  gtk_box_pack_start (GTK_BOX (hbox4), label48, FALSE, FALSE, 0);

  label44 = gtk_label_new (_("<span foreground=\"black\" ><b>Selectionner un capteur !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed2), label44, 160, 24);
  gtk_widget_set_size_request (label44, 208, 25);
  gtk_label_set_use_markup (GTK_LABEL (label44), TRUE);

  label47 = gtk_label_new (_("<span foreground=\"black\" ><b>Saisir Id !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed2), label47, 664, 56);
  gtk_widget_set_size_request (label47, 104, 40);
  gtk_label_set_use_markup (GTK_LABEL (label47), TRUE);

  label49 = gtk_label_new (_("<span foreground=\"blue\" ><b>Resultat(s) obtenu(s)</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed2), label49, 624, 248);
  gtk_widget_set_size_request (label49, 168, 56);
  gtk_label_set_use_markup (GTK_LABEL (label49), TRUE);

  label6 = gtk_label_new (_("Afficher/Suprrimer/Chercher"));
  gtk_widget_show (label6);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 2), label6);

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_container_add (GTK_CONTAINER (notebook), fixed7);

  stattreeview = gtk_tree_view_new ();
  gtk_widget_show (stattreeview);
  gtk_fixed_put (GTK_FIXED (fixed7), stattreeview, 64, 32);
  gtk_widget_set_size_request (stattreeview, 536, 240);

  label70 = gtk_label_new (_("Nombre des capteurs temperature alarmentes :"));
  gtk_widget_show (label70);
  gtk_fixed_put (GTK_FIXED (fixed7), label70, 96, 296);
  gtk_widget_set_size_request (label70, 424, 16);

  labelt = gtk_label_new ("");
  gtk_widget_show (labelt);
  gtk_fixed_put (GTK_FIXED (fixed7), labelt, 528, 296);
  gtk_widget_set_size_request (labelt, 56, 24);

  labelh = gtk_label_new ("");
  gtk_widget_show (labelh);
  gtk_fixed_put (GTK_FIXED (fixed7), labelh, 528, 344);
  gtk_widget_set_size_request (labelh, 72, 24);

  buttonstat = gtk_button_new ();
  gtk_widget_show (buttonstat);
  gtk_fixed_put (GTK_FIXED (fixed7), buttonstat, 640, 112);
  gtk_widget_set_size_request (buttonstat, 104, 32);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (buttonstat), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image11 = gtk_image_new_from_stock ("gtk-execute", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox11), image11, FALSE, FALSE, 0);

  label72 = gtk_label_new_with_mnemonic (_("State"));
  gtk_widget_show (label72);
  gtk_box_pack_start (GTK_BOX (hbox11), label72, FALSE, FALSE, 0);

  buttonactu = gtk_button_new ();
  gtk_widget_show (buttonactu);
  gtk_fixed_put (GTK_FIXED (fixed7), buttonactu, 640, 168);
  gtk_widget_set_size_request (buttonactu, 104, 32);

  alignment12 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment12);
  gtk_container_add (GTK_CONTAINER (buttonactu), alignment12);

  hbox12 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (alignment12), hbox12);

  image12 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_box_pack_start (GTK_BOX (hbox12), image12, FALSE, FALSE, 0);

  label73 = gtk_label_new_with_mnemonic (_("Actualiser"));
  gtk_widget_show (label73);
  gtk_box_pack_start (GTK_BOX (hbox12), label73, FALSE, FALSE, 0);

  label71 = gtk_label_new (_("Nombre des capteurs Humiditer alarmentes :"));
  gtk_widget_show (label71);
  gtk_fixed_put (GTK_FIXED (fixed7), label71, 80, 344);
  gtk_widget_set_size_request (label71, 440, 16);

  label67 = gtk_label_new (_("statistique"));
  gtk_widget_show (label67);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook), 3), label67);

  g_signal_connect ((gpointer) retour, "clicked",
                    G_CALLBACK (on_retour_clicked),
                    NULL);
  g_signal_connect ((gpointer) ajouter, "clicked",
                    G_CALLBACK (on_ajouter_clicked),
                    NULL);
  g_signal_connect ((gpointer) remplir, "clicked",
                    G_CALLBACK (on_remplir_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifier, "clicked",
                    G_CALLBACK (on_Modifier_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifiercap, "clicked",
                    G_CALLBACK (on_modifiercap_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeview3, "row_activated",
                    G_CALLBACK (on_treeview3_row_activated),
                    NULL);
  g_signal_connect ((gpointer) supprimer, "clicked",
                    G_CALLBACK (on_supprimer_clicked),
                    NULL);
  g_signal_connect ((gpointer) consulter, "clicked",
                    G_CALLBACK (on_consulter_clicked),
                    NULL);
  g_signal_connect ((gpointer) chercher, "clicked",
                    G_CALLBACK (on_chercher_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonstat, "clicked",
                    G_CALLBACK (on_buttonstat_clicked),
                    NULL);
  g_signal_connect ((gpointer) buttonactu, "clicked",
                    G_CALLBACK (on_buttonactu_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Aceuill, Aceuill, "Aceuill");
  GLADE_HOOKUP_OBJECT (Aceuill, vpaned1, "vpaned1");
  GLADE_HOOKUP_OBJECT (Aceuill, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (Aceuill, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (Aceuill, retour, "retour");
  GLADE_HOOKUP_OBJECT (Aceuill, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (Aceuill, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (Aceuill, image8, "image8");
  GLADE_HOOKUP_OBJECT (Aceuill, label63, "label63");
  GLADE_HOOKUP_OBJECT (Aceuill, notebook, "notebook");
  GLADE_HOOKUP_OBJECT (Aceuill, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (Aceuill, id, "id");
  GLADE_HOOKUP_OBJECT (Aceuill, marque, "marque");
  GLADE_HOOKUP_OBJECT (Aceuill, valeur, "valeur");
  GLADE_HOOKUP_OBJECT (Aceuill, min, "min");
  GLADE_HOOKUP_OBJECT (Aceuill, max, "max");
  GLADE_HOOKUP_OBJECT (Aceuill, label11, "label11");
  GLADE_HOOKUP_OBJECT (Aceuill, label12, "label12");
  GLADE_HOOKUP_OBJECT (Aceuill, label10, "label10");
  GLADE_HOOKUP_OBJECT (Aceuill, label9, "label9");
  GLADE_HOOKUP_OBJECT (Aceuill, label8, "label8");
  GLADE_HOOKUP_OBJECT (Aceuill, label7, "label7");
  GLADE_HOOKUP_OBJECT (Aceuill, ajouter, "ajouter");
  GLADE_HOOKUP_OBJECT (Aceuill, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (Aceuill, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (Aceuill, image1, "image1");
  GLADE_HOOKUP_OBJECT (Aceuill, label13, "label13");
  GLADE_HOOKUP_OBJECT (Aceuill, label35, "label35");
  GLADE_HOOKUP_OBJECT (Aceuill, label34, "label34");
  GLADE_HOOKUP_OBJECT (Aceuill, label36, "label36");
  GLADE_HOOKUP_OBJECT (Aceuill, label37, "label37");
  GLADE_HOOKUP_OBJECT (Aceuill, label38, "label38");
  GLADE_HOOKUP_OBJECT (Aceuill, label39, "label39");
  GLADE_HOOKUP_OBJECT (Aceuill, label40, "label40");
  GLADE_HOOKUP_OBJECT (Aceuill, label41, "label41");
  GLADE_HOOKUP_OBJECT (Aceuill, combobox1, "combobox1");
  GLADE_HOOKUP_OBJECT (Aceuill, label4, "label4");
  GLADE_HOOKUP_OBJECT (Aceuill, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (Aceuill, marque1, "marque1");
  GLADE_HOOKUP_OBJECT (Aceuill, valeur1, "valeur1");
  GLADE_HOOKUP_OBJECT (Aceuill, label54, "label54");
  GLADE_HOOKUP_OBJECT (Aceuill, label53, "label53");
  GLADE_HOOKUP_OBJECT (Aceuill, label52, "label52");
  GLADE_HOOKUP_OBJECT (Aceuill, label51, "label51");
  GLADE_HOOKUP_OBJECT (Aceuill, min1, "min1");
  GLADE_HOOKUP_OBJECT (Aceuill, label55, "label55");
  GLADE_HOOKUP_OBJECT (Aceuill, max1, "max1");
  GLADE_HOOKUP_OBJECT (Aceuill, label57, "label57");
  GLADE_HOOKUP_OBJECT (Aceuill, type1, "type1");
  GLADE_HOOKUP_OBJECT (Aceuill, label64, "label64");
  GLADE_HOOKUP_OBJECT (Aceuill, combobox2, "combobox2");
  GLADE_HOOKUP_OBJECT (Aceuill, remplir, "remplir");
  GLADE_HOOKUP_OBJECT (Aceuill, modifier, "modifier");
  GLADE_HOOKUP_OBJECT (Aceuill, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (Aceuill, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (Aceuill, image9, "image9");
  GLADE_HOOKUP_OBJECT (Aceuill, label65, "label65");
  GLADE_HOOKUP_OBJECT (Aceuill, modifiercap, "modifiercap");
  GLADE_HOOKUP_OBJECT (Aceuill, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (Aceuill, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (Aceuill, image10, "image10");
  GLADE_HOOKUP_OBJECT (Aceuill, label66, "label66");
  GLADE_HOOKUP_OBJECT (Aceuill, label5, "label5");
  GLADE_HOOKUP_OBJECT (Aceuill, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (Aceuill, treeview3, "treeview3");
  GLADE_HOOKUP_OBJECT (Aceuill, supprimer, "supprimer");
  GLADE_HOOKUP_OBJECT (Aceuill, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (Aceuill, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (Aceuill, image2, "image2");
  GLADE_HOOKUP_OBJECT (Aceuill, label42, "label42");
  GLADE_HOOKUP_OBJECT (Aceuill, label43, "label43");
  GLADE_HOOKUP_OBJECT (Aceuill, consulter, "consulter");
  GLADE_HOOKUP_OBJECT (Aceuill, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (Aceuill, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (Aceuill, image3, "image3");
  GLADE_HOOKUP_OBJECT (Aceuill, label45, "label45");
  GLADE_HOOKUP_OBJECT (Aceuill, entry10, "entry10");
  GLADE_HOOKUP_OBJECT (Aceuill, label46, "label46");
  GLADE_HOOKUP_OBJECT (Aceuill, label50, "label50");
  GLADE_HOOKUP_OBJECT (Aceuill, chercher, "chercher");
  GLADE_HOOKUP_OBJECT (Aceuill, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (Aceuill, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (Aceuill, image4, "image4");
  GLADE_HOOKUP_OBJECT (Aceuill, label48, "label48");
  GLADE_HOOKUP_OBJECT (Aceuill, label44, "label44");
  GLADE_HOOKUP_OBJECT (Aceuill, label47, "label47");
  GLADE_HOOKUP_OBJECT (Aceuill, label49, "label49");
  GLADE_HOOKUP_OBJECT (Aceuill, label6, "label6");
  GLADE_HOOKUP_OBJECT (Aceuill, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (Aceuill, stattreeview, "stattreeview");
  GLADE_HOOKUP_OBJECT (Aceuill, label70, "label70");
  GLADE_HOOKUP_OBJECT (Aceuill, labelt, "labelt");
  GLADE_HOOKUP_OBJECT (Aceuill, labelh, "labelh");
  GLADE_HOOKUP_OBJECT (Aceuill, buttonstat, "buttonstat");
  GLADE_HOOKUP_OBJECT (Aceuill, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (Aceuill, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (Aceuill, image11, "image11");
  GLADE_HOOKUP_OBJECT (Aceuill, label72, "label72");
  GLADE_HOOKUP_OBJECT (Aceuill, buttonactu, "buttonactu");
  GLADE_HOOKUP_OBJECT (Aceuill, alignment12, "alignment12");
  GLADE_HOOKUP_OBJECT (Aceuill, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (Aceuill, image12, "image12");
  GLADE_HOOKUP_OBJECT (Aceuill, label73, "label73");
  GLADE_HOOKUP_OBJECT (Aceuill, label71, "label71");
  GLADE_HOOKUP_OBJECT (Aceuill, label67, "label67");

  return Aceuill;
}

GtkWidget*
create_gestion1 (void)
{
  GtkWidget *gestion1;
  GtkWidget *fixed6;
  GtkWidget *gestion2;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label61;
  GtkWidget *Quitter;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label62;

  gestion1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (gestion1), _("Accueil"));

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (gestion1), fixed6);

  gestion2 = gtk_button_new ();
  gtk_widget_show (gestion2);
  gtk_fixed_put (GTK_FIXED (fixed6), gestion2, 264, 192);
  gtk_widget_set_size_request (gestion2, 264, 144);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (gestion2), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-jump-to", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label61 = gtk_label_new_with_mnemonic (_("Gestion Capteur"));
  gtk_widget_show (label61);
  gtk_box_pack_start (GTK_BOX (hbox6), label61, FALSE, FALSE, 0);

  Quitter = gtk_button_new ();
  gtk_widget_show (Quitter);
  gtk_fixed_put (GTK_FIXED (fixed6), Quitter, 696, 568);
  gtk_widget_set_size_request (Quitter, 88, 32);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (Quitter), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-stop", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label62 = gtk_label_new_with_mnemonic (_("Quitter"));
  gtk_widget_show (label62);
  gtk_box_pack_start (GTK_BOX (hbox7), label62, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) gestion2, "clicked",
                    G_CALLBACK (on_gestion2_clicked),
                    NULL);
  g_signal_connect ((gpointer) Quitter, "clicked",
                    G_CALLBACK (on_Quitter_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (gestion1, gestion1, "gestion1");
  GLADE_HOOKUP_OBJECT (gestion1, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (gestion1, gestion2, "gestion2");
  GLADE_HOOKUP_OBJECT (gestion1, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (gestion1, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (gestion1, image6, "image6");
  GLADE_HOOKUP_OBJECT (gestion1, label61, "label61");
  GLADE_HOOKUP_OBJECT (gestion1, Quitter, "Quitter");
  GLADE_HOOKUP_OBJECT (gestion1, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (gestion1, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (gestion1, image7, "image7");
  GLADE_HOOKUP_OBJECT (gestion1, label62, "label62");

  return gestion1;
}
