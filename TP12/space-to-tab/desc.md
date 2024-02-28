## Space to Tab

Le fichier `main.c` contient déjà un programme qui créer un fichier à partir d'un autre en 
modifiant chacune de ses lignes par une fonction `space_to_tab` que vous devez écrire 
dans un fichier `space-to-tab.c` (et déclarée dans un fichier `space-to-tab.h`).

La fonction `space_to_tab` prend une chaine de caractère et doit la simplifier en 
remplaçant autant d'espaces que possible par des tabulations `\t`.

On rappelle qu'une tabulation s'affiche dans le terminal comme des espaces selon certaines règles précises.

On peut imaginer que dans un terminal, chaque colonne d'indice multiple de 8 est une colonne d'alignement. Dans un terminal, une tabulation permet d'aligner ce qui suit avec la prochaine colonne d'alignement. De manière similaire, une tabulation équivaut à rajouter des espaces jusqu'à ce que le caractère suivant se trouve sur une colonne d'indice un multiple de 8.

Par exemple si je numérote les colonne d'un terminale:
```
0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 ...
```

et que j'écris le texte `texte exemple` les caractères sont réparties dans les colonnes:
```
# vous pouvez tester en copiant cette ligne dans un terminal
printf "texte exemple"
```

```
0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 ...
t  e  x  t     e  x  e  m  p  l  e
```


En ajoutant une tabulation au début `\ttexte exemple` on a
```
printf "\ttexte exemple"
```
```
0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 ...
                        t  e  x  t     e  x  e  m  p  l  e
```

De même si on ajoute 3 espaces devant, la première lettre `t` se situe toujours à la première colonne multiple de 8 c'est-à-dire 8. Avec  `   \ttexte exemple` on a

```
printf "   \ttexte exemple"
```

```
0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 ...
                        t  e  x  t     e  x  e  m  p  l  e
```

De même, en remplaçant l'espace du milieu par une tabulation, cela aligne le mot `exemple` sur la prochaine colonne multiple de 8, ici 16:```
printf "\ttexte\texemple"
```
```
0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 ...
                        t  e  x  t              e  x  e  m  p  l  e
```

La fonction  `space_to_tab` doit donc replacer dans une chaine les espaces par des tabulation lorsque c'est possible.
Regardez le programme `tests.c` pour avoir des exemples précis.

Par exemple la chaine `        test` peut être remplacée par `\ttest` puisqu'elle s'affichera de la même manière dans le terminal.