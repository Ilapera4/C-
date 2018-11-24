#ifndef POPULATION_H
#define POPULATION_H
class fish;

class population{
	
	private:
		fish** fishes;
		int max;
		int fishnum;
		
	public:
		population();
		virtual ~population();
		
		void add(fish* a);
		void remove(fish* f);
		int size();
		int* get();
	
};
#endif