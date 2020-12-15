CC=gcc
CFLAGS=-W -Wall
EXEC = jeu
all: $(EXEC)

jeu: jeu.o  affiche.o init.o aleatoire.o joueur_contre_joueur.o joueur_1.o joueur_2.o ordinateur.o joueur_contre_ordinateur.o alea.o
	$(CC)  -o jeu jeu.o affiche.o init.o aleatoire.o  joueur_contre_joueur.o joueur_contre_ordinateur.o  joueur_1.o joueur_2.o ordinateur.o alea.o $(LDFLAGS)

jeu.o: jeu.c
	$(CC)  -o jeu.o -c jeu.c  $(LDFLAGS) 
	
affiche.o: affiche.c affiche.h
	$(CC) -o affiche.o -c affiche.c $(LDFLAGS)

	
joueur_VS_joueur.o: joueur_contre_joueur.c joueur_contre_joueur.h
	$(CC) -o joueur_contre_joueur.o -c joueur_contre_joueur.c $(LDFLAGS)

	
joueur_VS_ordinateur.o: joueur_contre_ordinateur.c joueur_contre_ordinateur.h
	$(CC) -o joueur_contre_ordinateur.o -c joueur_contre_ordinateur.c $(LDFLAGS)
	
alea.o: alea.c alea.h
	$(CC) -o alea.o -c alea.c $(LDFLAGS)

ordinateur.o: ordinateur.c ordinateur.h
	$(CC) -o ordinateur.o -c ordinateur.c $(LDFLAGS)
	
init.o: init.c init.h
	$(CC)  -o init.o -c init.c $(LDFLAGS) 
	
joueur_1.o : joueur_1.c joueur_1.h
	$(CC)  -o joueur_1.o -c joueur_1.c $(LDFLAGS)
	
joueur_2.o : joueur_2.c joueur_2.h
	$(CC)  -o joueur_2.o -c joueur_2.c $(LDFLAGS)

		
aleatoire.o: aleatoire.c aleatoire.h
	$(CC)  -o aleatoire.o -c aleatoire.c $(LDFLAGS) 


clean:
	rm -rf *.o  $(EXEC)

