#include "prise.h"

Prise::Prise()
{
    entrees *io;
    int shmid;
    int depart_timer;
}

void Prise::deverouiller_trappe()
{
	io->led_trappe=VERT;
}

void Prise::verouiller_trappe()
{
    io->led_trappe=OFF;
}

void Prise::set_prise()
{
    io->led_prise=val ;
}

void Prise::attente_pdebranche()
{
    while((io->gene_u == 9) )
	{
	std.cout << "debranchez la prise" << std.endl;

	}
    std.cout << "prise debranchee" << std.endl;
	
	generer_PWM(STOP);
	verouiller_trappe();
	set_prise(OFF);
	set_dispo(VERT);
	set_charge(OFF);
}
