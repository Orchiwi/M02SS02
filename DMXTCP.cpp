
#include <iostream>
#include <string>

#include "DMXTCP.h"
using namespace std;



DMXTCP::DMXTCP()
{	for(int i=0;i<512;i++)
	{	trame[i]=0;
	}

}
void DMXTCP::ModifierCanal(unsigned short canal, unsigned short valeur)
{	trame[canal-1]=valeur;
}
void DMXTCP::Envoyer(char IP[16], unsigned short port)
{	monclient.SeConnecterAUnServeur(IP,port);
	monclient.Envoyer(trame,512);
	monclient.SeDeconnecter();
}
void DMXTCP::FullOn()
{	for(int i=0;i<512;i++)
	{	trame[i]=255;
	}

}
void DMXTCP::FullOff()
{	for(int i=0;i<512;i++)
	{	trame[i]=0;
	}

}
void DMXTCP::Demonstration()
{	for(int i=0;i<512;i++)
	{trame[i]=rand();
	}
}
