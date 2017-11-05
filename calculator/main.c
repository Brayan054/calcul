#include <stdio.h>
#include <stdlib.h>


   struct student {
    char nom[50];
    char prenom[50];
    int age;}

  int main()
{
    int i;
    struct student tab[3];
    printf("Hello meeen!\n");

   for(i=1;i<=3;i++);{
   printf("donner le nom,prenom,age\n");
   scanf("%s%s%d",&tab[i].nom,&tab[i].prenom,&tab[i].age);
}
   for (i=1;i<=3;i++);{

   printf("etudiant num %d,nom:%s,prenom:%s,age%d\n",i,tab[tab].nom,tab[i].prenom,tab[i].age);
   }
}
