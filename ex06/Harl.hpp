#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl;

enum levels
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

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
		void	unknown(void);
		int		_stringToEnum(std::string str);
		KVTable table[4];
};
	

#endif