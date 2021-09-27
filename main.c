#include <stdio.h>

int main ()
{

/*int entier1 = 0;
int entier2 = 0;
printf("saisissez l'entier1 :");
scanf("%d", &entier1);
printf("saisissez l'entier2 :");
scanf("%d",&entier2);

if ( entier1 > entier2) {
    printf("le plus grand entier est %d", entier1);
}
else {
    printf("le plus grand entier est %d", entier2);
}

*/

// exo 2

/* int largeur = 0;
 int longueur = 0;
 printf("saisissez la largeur :");
 scanf("%d",&largeur);
 printf(" saisissez la longueur :");
 scanf ("%d",&longueur);
 printf("le perimetre du rectangle est : %d\n", (largeur+longueur)*2);
 printf("l'aire du rectangle est : %d", (largeur*longueur));
 */


// exo 3
/* int entier =0;
 const int a=3;
 printf("saisissez un entier :");
 scanf("%d", &entier);
 if ( entier%a==0 && entier>= 10) {
     printf("cet entier est un multiple de %d et il est supérieru à 10", a);
 }
 else {
     printf(" cet entier n'est pas un multiple de %d ou n'est pas supérieur à 10", a);
 }
 */

// exo 4
/*int age =0;
char etudiant=0;

printf("saisissez votre age :");
scanf("%d", &age);

if ( 0<= age && age <= 12){
    printf("tarif enfant(4 euros)");
    }

else if ( 12<age && age<=17 ) {
        printf("tarif jeune(6 euros)");
    }
if (17<age && age<27){
    printf("Etes vous étudiant ? Si oui saisissez 1 si non saisissez 0 :");
    scanf(" %c",&etudiant);
}
else if ( 17< age && age<27 && etudiant==1 ){
    printf("tarif jeune (6 euros)");
}

else if ( age>=65){
        printf("tarif senior ( 6 euros)");
}
else if ( 27< age && age<65){
        printf("plein tarif(9euros)");
    }

*/


//exo 5
/*  int boisson=0;
  printf("saisissez le numéro de votre boisson:");
  scanf("%d", &boisson);
  if (boisson=1){
      printf("votre boisson est : Coca");
  }
  else if (boisson=2){
      printf("votre boisson est : Sprite");
  }
  else if (boisson =3){
      printf("votre boisson est : Eau");
  }
  else if (boisson =10){
      printf("votre boisson est : Thé");

  }
  else if (boisson=11){
      printf("votre boisson est : café");

 else if {
  print("erreur");
  }
  */


//exo6
/*
float note1=0, note2=0, note3=0;
float Moyenne = 0;
printf("saisissez la premiere note");
scanf("%f", &note1);
    if (note1<0 || note1>20){
    printf("saisissez une nouvele note entre 0 et 20");
}
printf("saisissez la deuxieme note");
scanf("%f", &note2);
    if (note2<0 || note2>20){
    printf("saisissez une nouvele note entre 0 et 20");
}
printf("saisissez la troisieme note");
scanf("%f", &note3);
    if (note3<0 || note3>20){
    printf("saisissez une nouvele note entre 0 et 20");
}

Moyenne=((note1+note2+note3)/3);
printf("note moyenne : %f\n", Moyenne);
*/

//exo7
/*int classesouvertes=0;
int nombreEleves=0;
int i=0;
int totalEleves=0;
printf("saisissez le nombre de classes ouvertes:");
scanf("%d",&classesouvertes);
for (i=0;i<classesouvertes;i++){
    printf("saisissez le nombre deleves dans la classe %d:",i+1);
    scanf("%d",&nombreEleves);
    totalEleves=totalEleves+nombreEleves;
}
printf("le nombre total d'eleves dans l'écoles est :%d",totalEleves);

*/

//exo8
/*
int entier=0;
printf("saisissez un entier:");
scanf("%d",&entier);
while(entier%7 !=0 || entier%2!=0){
    printf("saisissez une nouvelle valeur :");
    scanf("%d",&entier);
}
*/

//exo9
/*int nombrePierres=0;
int nombreEtages=0;


printf("saisissez le nopbre de pierres dispo:");
scanf("%d",&nombrePierres);
while(nombrePierres > nombreEtages * nombreEtages ){
   nombrePierres = nombrePierres- (nombreEtages*nombreEtages);
   nombreEtages=nombreEtages+1;
}

printf("on peut faire %d étages",nombreEtages);

*/

//exo10

/*int entier=0;
int moyenne=0;
int nombreentiers=0;
int sommeentiers=0;
printf("saisissez un entier positif :");
scanf("%d",&entier);
if (entier<0){
    printf("le premier entier saisi est négatif,on ne peut pas calculer la moyenne");
}
while (entier >0){
        sommeentiers=sommeentiers+entier;
        nombreentiers=nombreentiers+1;
        printf("saisissez un autre entier :");
        scanf("%d",&entier);
}
moyenne=sommeentiers/nombreentiers;
printf("la moyenne est %d",moyenne);

*/
}

