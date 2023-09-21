
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int i=0,count=0;
double second;
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
         int  Id;
         struct DEADLINE{
              int yy,mm,dd,heur,min,second;
                      };
     }NOUVELLE_TACHE;
/////////////////////////////////////////////deathlien
     double  deathlien(i)
{
   NOUVELLE_TACHE Tache[i];
    second=Tache[i].min*60+Tache[i].heur*3600+Tache[i].dd*24*3600+Tache[i].mm*30*24*3600+Tache[i].yy*365*24*3600;
    return second;
}
/////////////////////////////////////////////
void status(i)
{
    NOUVELLE_TACHE Tache[i];
    char s[20][20]={"TO DO","DOING","DONE"};
    int status;
    printf("entr your choes : ");
    scanf("%d",&status);
     switch(status)
         {
             case 1:  strcpy(Tache[i].Statut,s[0]);break;
             case 2:   strcpy(Tache[i].Statut,s[1]);break;
             case 3:  strcpy(Tache[i].Statut,s[2]);break;
             default:{
                 printf("wrong number ");
                break;
             }


         }



}
    void AJOUTER()
    {
    NOUVELLE_TACHE Tache[100];
    printf("\n Titre : ");
    scanf(" %[^\n]s ",Tache[i].Titre);
    printf(" Description : ");
    scanf(" %[^\n]s ",Tache[i].Description);
    printf(" Statut : ");
    printf("1 : TO DO \t 2: DOING \t 3: DONE\n");
    status(i);
    printf(" Statut :%s",Tache[i].Statut);
    printf("\n DEADLINE dd/mm/yy\n");
    printf("\t\t dd : ");
    scanf("%d",&Tache[i].dd);
    printf("\t\t mm : ");
    scanf("%d",&Tache[i].mm);
    printf("\t\t yy : ");
    scanf("%d",&Tache[i].yy);
    printf("\t\t heur : ");
    scanf("%d",&Tache[i].heur);
    printf("\t\t min : ");
    scanf("%d",&Tache[i].min);
    deathlien(i);
    i++;
    count++;
    Tache[i].Id=count;
    int e ;
    printf("0:EXITE\t 1: AJOUTER NOUVELLE TACHE\t  \n");
    printf("=> ");
    scanf("%d",&e);
    if(e==0)
    {
        system("cls");
        main();

    }
     else if(e==1)
    {
        system("cls");
        AJOUTER();
    }
    else
        printf("wrong numbre");

    }
///////////////////////////////////
int main(void)
{
    MENU();

  int Choss;
  printf("\n\n\t\tentre your choss : ");
  scanf("%d",&Choss);
  switch(Choss)
  {
      case 0: system("exit");break;
      case 1:
           AJOUTER();
           break;


  }
    return (0);

}
