# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

# Notre projet est étiqueté hello
project(ENIGMA)

# Crée des variables avec les fichiers à compiler
set(SRCS
    main.c
    enigma.c
    ihm.c
    )
    
set(HEADERS
    enigma.h
    ihm.h
    )

# On indique que l'on veut un exécutable "hello" compilé à partir des fichiers décrits par les variables SRCS et HEADERS
add_executable(ENIGMA ${SRCS} ${HEADERS})