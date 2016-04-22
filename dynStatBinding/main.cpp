#include "Animal.h"
#include "Lion.h"
#include "Zebra.h"
#include "Fish.h"
#include "Shark.h"




int main(){
	Animal *a[3]; //does dyniamic binding
	a[0] = new Animal("Jack",10);
	a[1] = new Lion("Leo",20);
	a[2] = new Zebra("Thorsten",18);

	Fish *f[2]; //only static binding uses print of base class for both
	f[0] = new Fish("Fritz",10);
	f[1] = new Shark("Black",40);


	for(int i= 0; i < 3;i++){
		a[i]->print();
	}

	for(int i= 0; i < 2;i++){
		f[i]->print();
	}


}