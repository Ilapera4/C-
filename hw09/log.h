#ifndef LOG_H
#define LOG_H
#include <string>

class log{
	
	private:
	
		
	
	public:
		log();
		virtual ~log();
		static const log& getInstance();
		void logP();
	
	
};
#endif