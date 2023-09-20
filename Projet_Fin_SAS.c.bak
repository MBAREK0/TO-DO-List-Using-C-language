
#include <stdio.h>
void MENU()
{

     printf("\n\t\t\t __________________________________________________________________________________ ");
     printf("\n\t\t\t|1.Ajouter une nouvelle tache             | 2. Ajouter plusieurs nouvelles tâches. |");
     printf("\n\t\t\t|_________________________________________|________________________________________|");
     printf("\n\t\t\t|3.Afficher la liste de toutes les tâches | 4. Modifier une tâche                  |");
     printf("\n\t\t\t|_________________________________________|________________________________________|");
     printf("\n\t\t\t|5.Supprimer une tâche par identifiant    | 6. Rechercher les Tâches               |");
     printf("\n\t\t\t|_________________________________________|________________________________________|");
     printf("\n\t\t\t|                                                                                  |");
     printf("\n\t\t\t|                                    0. EXITE                                      |");
     printf("\n\t\t\t|__________________________________________________________________________________|");



}
   typedef struct{
         char Titre[50];
         char Description[250];
         char Statut[20];
         int  Id[50];
         struct DEADLINE{
              int yy[50];
              int mm[50];
              int dd[50];
                      };
     }NOUVELLE_TACHE;

    void AJOUTER()
    {
    NOUVELLE_TACHE Tache;
    printf(" Titre : ");
    scanf(" %[^\n]s ",Tache.Titre);
    printf(" Description : ");
    scanf(" %[^\n]s ",Tache.Description);
    printf(" Statut : ");
    scanf(" %[^\n]s ",Tache.Statut);


    }



int main(void)
{
AJOUTER();

    return (0);

}
