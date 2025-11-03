#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl;

typedef struct KVTable
{
	std::string level;
	void (Harl::*func)();
} KVTable;

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		KVTable table[4];
};
	

#endif