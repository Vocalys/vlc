#ifndef VLC_ARCHETYPE_CONTAINER_HPP
#define VLC_ARCHETYPE_CONTAINER_HPP

#include "qt4.hpp"
#include <string>

class VlcArchetypeContainer
{
public:
	VlcArchetypeContainer(intf_thread_t* p_intf);

	bool	openFile(std::string const& aString);
private:
	intf_thread_t* _p_intf;
};

#endif