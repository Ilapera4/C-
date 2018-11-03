#ifndef LOG_H
#define LOG_H
#include <string>

class log{
	
	public:
		log();
		static const log& getInstance();
		void logP(const std::string& msg);
	
	
};
#endif