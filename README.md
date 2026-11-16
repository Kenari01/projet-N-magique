# Jeu du Nombre Mystère (Plus ou Moins) 🎲

Un mini-jeu classique en ligne de commande écrit en C. L'ordinateur choisit un nombre au hasard entre 1 et 100, et vous devez le deviner en un minimum d'essais !

## 🚀 Fonctionnalités

- **Génération aléatoire :** Un nouveau nombre mystère est généré à chaque nouvelle partie.
- **Indices interactifs :** Le programme vous guide en vous indiquant si le nombre recherché est "plus" grand ou "moins" grand que votre proposition.
- **Vérification des limites :** Un petit rappel à l'ordre humoristique est prévu si vous entrez un nombre en dehors de la plage autorisée (1 à 100).

## 🛠️ Prérequis

Pour compiler et jouer à ce jeu, vous devez avoir un compilateur C installé sur votre ordinateur (comme **GCC**).

## ⚙️ Compilation et Exécution

1. Ouvrez votre terminal.
2. Placez-vous dans le dossier où se trouve votre fichier (par exemple `main.c`).
3. Compilez le jeu avec la commande suivante :
   ```bash
   gcc main.c -o nombre_mystere
