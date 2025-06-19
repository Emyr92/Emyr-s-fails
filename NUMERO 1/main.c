//
//  main.c
//  NUMERO 1
//
//  Created by Emyr on 08/01/2025.
//
/*
Ci-dessous, ce sont des directives de préprocesseur.
Ces lignes permettent d'ajouter des fichiers au projet,
fichiers que l'on appelle bibliothèques.
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
par exemple un message à l'écran.
*/

#include <stdio.h>
int main (void)
{
/* const est une declaration qui dit que la variable est constante et ne peux etre inchangé, float designe un nombre decimal qui va etre designé */
    int ageUtilisateur = 0;
    printf("Ce service est un service reservé au personne majeur. \n");
    printf("Quel age avez vous ?\n");
    scanf("%d",&ageUtilisateur);
    
    printf("vous avez %d ans. \n", ageUtilisateur);
    
    if (ageUtilisateur >= 18)
        printf("vous ete majeur !\n");
    else
        printf("vous ete trop jeune pour utilisé ce service, revenez plus tard ! \n");
   
    return 0;
}



