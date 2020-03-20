#include "timer.h"




Timer::Timer()
{
	io = acces_memoire(&shmid);
	if(io == NULL) std::cout << "erreur de memoire \n " << std::endl ;
}

void Timer::raz()
{
   	 depart_timer = io->timer_sec;
	 printf("RAZ: %d sec \n", depart_timer);
}

int Timer::valeur()
{
   	 int valeur_finale = io->timer_sec - depart_timer;
	 printf("TIMER: %d sec \n", valeur_finale);
	 return valeur_finale;
} 

