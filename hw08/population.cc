#include "population.h"
#include "fish.h"

population::population(){
	max = 1500;
	fishes = new fish*[max];
	fishnum=0;
}

population::~population(){
}

void population::add(fish* a){
	fishes[fishnum] = a;			//pointer to fish a
	fishnum++;
}

void population::remove(fish* f){
	for(int i = 0; i<max; i++){					//2 loops. one to check and one to shift
			if(fishes[i] == f){					//pointers match
				for (int j=i; j<max; j++){
					fishes[j] = fishes[j+1];	//shift everything after desired fish over one
				}
				fishnum--;
			}
	}
}

int population::size(){  						//return size of fishes
	return fishnum;
}
