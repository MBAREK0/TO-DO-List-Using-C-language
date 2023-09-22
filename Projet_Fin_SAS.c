

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


double second ;
int i=0;
int  count=1111;
double second;
 char s[20][20]={"TO DO","DOING","DONE"};
int year=0,day=0 ,mounth=0,heuur=0,minut=0;
void MENU()
{

     printf("\n\t\t\t __________________________________________________________________________________ ");
     printf("\n\t\t\t|                         1.Ajouter une nouvelle tache                             |");
     printf("\n\t\t\t|__________________________________________________________________________________|");
     printf("\n\t\t\t|2.Afficher la liste de toutes les tâches |     3. Modifier une tâche              |");
     printf("\n\t\t\t|_________________________________________|________________________________________|");
     printf("\n\t\t\t|4.Supprimer une tâche par identifiant    |     5. Rechercher les Tâches           |");
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
              int yy,mm,dd,heur;
                      };
     }NOUVELLE_TACHE;
       NOUVELLE_TACHE Tache[100];
        NOUVELLE_TACHE TASK;


/////////////////////////////////////////////deathlien
     double  deathlien(i)
{

    second=(Tache[i].heur)*3600+(Tache[i].dd-16)*24*3600+(Tache[i].mm)*30*24*3600+(Tache[i].yy-1970)*365*24*3600;
    return second;
}
double timenow(){
     time_t current_time;
       time(&current_time);

   // printf("Current time in seconds since epoch: %ld\n", current_time);
    int now = current_time;

    return now;

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

    void AJOUTER()
    {

    printf("\n Titre : ");
    scanf(" %[^\n]s ",Tache[i].Titre);
    printf(" Description : ");
    scanf(" %[^\n]s ",Tache[i].Description);
    strcpy(Tache[i].Statut,s[0]);
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
    deathlien(i);
    count+=1;
    Tache[i].Id=count;
    i++;
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
float AFDAY(float x){
    float day;

    day = x/60/60/24;

   return day;
}
float AFheur(float y){
    float heur , r;
    heur = fmod(y,(int)y);
    r =heur*24;

   return r;
}

void AFFICHER(){

     for(int j=0;j<i;j++)
     {
         for(int m=j+1;m<i;m++)
         {
             if(strcmp(Tache[j].Titre, Tache[m].Titre)>0)
             {
                  TASK = Tache[j];
                    Tache[j] = Tache[m];
                    Tache[m] = TASK;
             }

         }
     }
     for (int j=0;j<i;j++){


    printf("\n Titre : %s",Tache[j].Titre);
    printf("\n Description :%s ",Tache[j].Description);
    printf(" \nStatut :%s ",Tache[j].Statut);
    printf(" \nID     :%d ",Tache[j].Id);
    float result;
    result=deathlien(j)-timenow();
     printf("\n heur => %f",AFheur(AFDAY(result)));
     printf("\n day => %.0f",AFDAY(result));
     }
}
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
           system("cls");
           AJOUTER();
           break;
      case 2:system("cls");AFFICHER();break;


  }
    return (0);

}
