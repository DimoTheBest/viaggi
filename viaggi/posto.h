#ifndef POSTO_H
#define POSTO_H

#include <iostream>

using namespace std;

class posto
{
public:
	posto(int nComp,int nPolt, bool occu, bool fines, bool busin);
	virtual ~posto() {};
	int GetNumeroComparto() { return numeroComparto; };
	int GetNumeroComparto() { return numeroPoltrona; };
	bool GetOccupato() { return occupato; };
	bool GetFinestrino() { return finestrino; };
	bool GetBusiness() { return business; };

private:
	int numeroComparto;
	int numeroPoltrona;
	bool occupato;
	bool finestrino;
	bool business;
};

posto::posto(int nComp, int nPolt, bool occu, bool fines, bool busin)
{
	numeroComparto = nComp;
	numeroPoltrona = nPolt;
	occupato = occu;
	finestrino = fines;
	business = busin;
}

#endif // !POSTO_H
