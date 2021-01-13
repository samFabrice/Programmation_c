CPP=gcc #Commande du compilateur
CFLAGS=-W -Wall -O3  #Option d'optimisation du programme
LDFLAGS=-lSDL  #Linker
EXEC = jeu
all: $(EXEC)

${EXEC}: jeu.o  affiche.o init.o aleatoire.o joueur_contre_joueur.o joueur_1.o joueur_2.o ordinateur.o joueur_contre_ordinateur.o alea.o alea2.o joueur_glouton.o loi_du_plus_fort.o  loi_du_plus_fort2.o joueur_glouton_prevoyant.o xxx.o
	$(CPP)  -o jeu jeu.o affiche.o init.o aleatoire.o  joueur_contre_joueur.o joueur_contre_ordinateur.o  joueur_1.o joueur_2.o ordinateur.o alea.o alea2.o joueur_glouton.o  loi_du_plus_fort.o loi_du_plus_fort2.o joueur_glouton_prevoyant.o xxx.o $(LDFLAGS)

jeu.o: jeu.c
	$(CPP)  -o jeu.o -c jeu.c  $(LDFLAGS) 
	
affiche.o: affiche.c affiche.h
	$(CPP) -o affiche.o -c affiche.c $(LDFLAGS)

	
joueur_VS_joueur.o: joueur_contre_joueur.c joueur_contre_joueur.h
	$(CPP) -o joueur_contre_joueur.o -c joueur_contre_joueur.c $(LDFLAGS)

	
joueur_VS_ordinateur.o: joueur_contre_ordinateur.c joueur_contre_ordinateur.h
	$(CPP) -o joueur_contre_ordinateur.o -c joueur_contre_ordinateur.c $(LDFLAGS)
	
alea.o: alea.c alea.h
	$(CPP) -o alea.o -c alea.c $(LDFLAGS)

xxx.o: xxx.c xxx.h
	$(CPP) -o xxx.o -c xxx.c $(LDFLAGS)
	
alea2.o: alea2.c alea2.h
	$(CPP) -o alea2.o -c alea2.c $(LDFLAGS)

ordinateur.o: ordinateur.c ordinateur.h
	$(CPP) -o ordinateur.o -c ordinateur.c $(LDFLAGS)

loi_du_plus_fort.o: loi_du_plus_fort.c loi_du_plus_fort.h
	$(CPP) -o loi_du_plus_fort.o -c loi_du_plus_fort.c $(LDFLAGS)
	
loi_du_plus_fort2.o: loi_du_plus_fort2.c loi_du_plus_fort2.h
	$(CPP) -o loi_du_plus_fort2.o -c loi_du_plus_fort2.c $(LDFLAGS)
	
init.o: init.c init.h
	$(CPP)  -o init.o -c init.c $(LDFLAGS) 
	
joueur_1.o : joueur_1.c joueur_1.h
	$(CPP)  -o joueur_1.o -c joueur_1.c $(LDFLAGS)

joueur_glouton.o : joueur_glouton.c joueur_glouton.h
	$(CPP)  -o joueur_glouton.o -c joueur_glouton.c $(LDFLAGS)	

joueur_glouton_prevoyant.o : joueur_glouton_prevoyant.c joueur_glouton_prevoyant.h
	$(CPP)  -o joueur_glouton_prevoyant.o -c joueur_glouton_prevoyant.c $(LDFLAGS)

joueur_2.o : joueur_2.c joueur_2.h
	$(CPP)  -o joueur_2.o -c joueur_2.c $(LDFLAGS)

		
aleatoire.o: aleatoire.c aleatoire.h
	$(CPP)  -o aleatoire.o -c aleatoire.c $(LDFLAGS) 


clean:
	rm -rf *.o  $(EXEC)

mrproper: clean
	rm -fr ${EXEC}
