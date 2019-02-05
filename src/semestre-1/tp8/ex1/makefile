# makefile2 correspondant a l'exercice 2, TP8

# Dans un fichier makefile, on peut utiliser de variables.
# monvar = valeur    pour affecter
# $(monvar)          pour recuperer la valeur

# De plus, il y a quelques variables internes, qu'on peut utiliser:
# $@ pour nom de cible
# $< pour nom de la premiere dependance
# $^ pour toute la liste des dépendances

# le suivant alors fait precisement la meme chose que makefile1:


CC=gcc
CFLAGS=-Wall -ansi


mon_executable: code.o plop.o
		$(CC) -o $@ $^

code.o: code.c plop.h
	$(CC) -o $@ -c $< $(CFLAGS)

plop.o: plop.c plop.h
	     $(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o

# mais en plus, on va effacer les fichiers .o

# On peut en faire encore plus ; dans certains cas, par exemple, certains
# regles peuvent etre omis, cars définis implicitement.
#
# Si vous voulez en connaitre plus, pour l'instant, cherchez en ligne.