
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int i=0,count=0;
double second;
void MENU()
{

     printf("\n\t\t __________________________________________________________________________________ ");
     printf("\n\t\t|                         1.Ajouter une nouvelle tache                             |");
     printf("\n\t\t|__________________________________________________________________________________|");
     printf("\n\t\t|2.Afficher la liste de toutes les tâches |     3. Modifier une tâche              |");
     printf("\n\t\t|_________________________________________|________________________________________|");
     printf("\n\t\t|4.Supprimer une tâche par identifiant    |     5. Rechercher les Tâches           |");
     printf("\n\t\t|_________________________________________|________________________________________|");
     printf("\n\t\t|                                                                                  |");
     printf("\n\t\t|                                    0. EXITE                                      |");
     printf("\n\t\t|__________________________________________________________________________________|");
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
      NOUVELLE_TACHE Tache[100];
/////////////////////////////////////////////deathlien
     double  deathlien(i)
{

    second=Tache[i].min*60+Tache[i].heur*3600+Tache[i].dd*24*3600+Tache[i].mm*30*24*3600+(Tache[i].yy-1970)*365*24*3600;
    return second;
}
double timenow(){
     time_t current_time;
       time(&current_time);

    printf("Current time in seconds since epoch: %ld\n", current_time);
    int now = current_time;

    return now;

}
/////////////////////////////////////////////
void status(i)
{

    char s[20][20]={"TO DO","DOING","DONE"};
    int status;
    printf("entr your choes : ");
    scanf("%d",&status);
     switch(status)
         {
             case 1: {
                  strcpy(Tache[i].Statut,s[0]);
                 printf(" Statut :%s",Tache[i].Statut);
                 break;
             }
             case 2:   {strcpy(Tache[i].Statut,s[1]);
             printf(" Statut :%s",Tache[i].Statut);
             break;}
             case 3:  strcpy(Tache[i].Statut,s[2]);break;
             default:{
                 printf("wrong number ");
                break;
                     }


         }
}
    void AJOUTER()
    {

    printf("\n Titre : ");
    scanf(" %[^\n]s ",Tache[i].Titre);
    printf(" Description : ");
    scanf(" %[^\n]s ",Tache[i].Description);
    printf(" Statut : ");
    printf("1 : TO DO \t 2: DOING \t 3: DONE\n");
    status(i);
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
void AFFICHER(){

     for (int j=0;j<i;j++){


    printf("\n Titre : %s",Tache[j].Titre);
    printf("\n Description :%s ",Tache[j].Description);
    printf(" \nStatut :%s ",Tache[j].Statut);
     printf("\n_____________________");
     }

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
      case 0: system("exit");
             break;
      case 1:
           system("cls");
           AJOUTER();
           break;
     case 2:system("cls");
           AFFICHER();
           break;


  }
    return (0);

}
