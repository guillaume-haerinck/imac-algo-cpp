# Mesure de la complexite

## Algorithm 4 : Insertion Sort

Une boucle for et un while imbriques qui vont chacunes jusqu'a n.
Donc complexite O(n^2)

## Algorithm 5 : String Distance

Une boucle for qui vas jusqu'a n
Donc complexite O(n)

## Algorithm 6 : Binary Search

Une boucle for qui vas jusqu'a n, mais le champ de recherche est divise par 2 a chaque tour.
Donc complexite log(n)

## Algorithm 7 : Search All

Un binary search + Une boucle for qui vas jusqu'a n
Donc complexite O(n + log(n)) = O (n)

# Algorithm 8 : Binary Sort

Une boucle for avec a l'interieur une insertion en binary search
Donc complexite O(n^2) et pas O(n * log(n)) car si on trie dans sens inverse sa complexifie pas mal.
