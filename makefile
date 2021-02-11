CC=gcc ### 
CFLAGS=-Wall -O3 -std=c99#
EXEC = jeu
all: $(EXEC)

${EXEC}: jeu.o  affiche.o init.o aleatoire.o joueur_contre_joueur.o joueur_1.o joueur_2.o ordinateur.o joueur2_VS_joueur_glouton_prevoyant.o joueur_contre_ordinateur.o  alea2.o joueur_glouton.o loi_du_plus_fort.o  loi_du_plus_fort2.o joueur_glouton_prevoyant.o joueur1_VS_joueur_glouton.o
	$(CC) $(CFLAGS) -o binary/jeu jeu.o affiche.o init.o aleatoire.o  joueur_contre_joueur.o joueur_contre_ordinateur.o joueur2_VS_joueur_glouton_prevoyant.o  joueur_1.o joueur_2.o ordinateur.o alea2.o joueur_glouton.o  loi_du_plus_fort.o loi_du_plus_fort2.o joueur_glouton_prevoyant.o joueur1_VS_joueur_glouton.o

jeu.o: jeu.c
	$(CC) $(CFLAGS) -o jeu.o -c jeu.c  
	
affiche.o: affiche.c affiche.h
	$(CC) $(CFLAGS) -o affiche.o -c affiche.c 

	
joueur_VS_joueur.o: joueur_contre_joueur.c joueur_contre_joueur.h
	$(CC) $(CFLAGS) -o joueur_contre_joueur.o -c joueur_contre_joueur.c 
	
joueur1_VS_joueur_glouton.o: joueur1_VS_joueur_glouton.c joueur1_VS_joueur_glouton.h
	$(CC) $(CFLAGS) -o joueur1_VS_joueur_glouton.o -c joueur1_VS_joueur_glouton.c

	
joueur_VS_ordinateur.o: joueur_contre_ordinateur.c joueur_contre_ordinateur.h
	$(CC) $(CFLAGS) -o joueur_contre_ordinateur.o -c joueur_contre_ordinateur.c 

	
alea2.o: alea2.c alea2.h
	$(CC) $(CFLAGS)  -o alea2.o -c alea2.c 

ordinateur.o: ordinateur.c ordinateur.h
	$(CC) $(CFLAGS) -o ordinateur.o -c ordinateur.c 

loi_du_plus_fort.o: loi_du_plus_fort.c loi_du_plus_fort.h
	$(CC) $(CFLAGS)  -o loi_du_plus_fort.o -c loi_du_plus_fort.c 
	
loi_du_plus_fort2.o: loi_du_plus_fort2.c loi_du_plus_fort2.h
	$(CC) $(CFLAGS) -o loi_du_plus_fort2.o -c loi_du_plus_fort2.c 
	
init.o: init.c init.h
	$(CC)  -o init.o -c init.c 
	
joueur_1.o : joueur_1.c joueur_1.h
	$(CC)  -o joueur_1.o -c joueur_1.c 

joueur_glouton.o : joueur_glouton.c joueur_glouton.h
	$(CC)  -o joueur_glouton.o -c joueur_glouton.c 	

joueur_glouton_prevoyant.o : joueur_glouton_prevoyant.c joueur_glouton_prevoyant.h
	$(CC)  -o joueur_glouton_prevoyant.o -c joueur_glouton_prevoyant.c 

joueur2_VS_joueur_glouton_prevoyant.o: joueur2_VS_joueur_glouton_prevoyant.c joueur2_VS_joueur_glouton_prevoyant.h
	$(CC) -o joueur2_VS_joueur_glouton_prevoyant.o -c joueur2_VS_joueur_glouton_prevoyant.c	
	
	
joueur_2.o : joueur_2.c joueur_2.h
	$(CC)  -o joueur_2.o -c joueur_2.c 

		
aleatoire.o: aleatoire.c aleatoire.h
	$(CC)  -o aleatoire.o -c aleatoire.c 


clean:
	rm -rf *.o  $(EXEC)

mrproper: clean
	rm -fr ${EXEC}
