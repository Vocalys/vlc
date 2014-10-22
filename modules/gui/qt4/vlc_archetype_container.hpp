#ifndef VLC_ARCHETYPE_CONTAINER_HPP
#define VLC_ARCHETYPE_CONTAINER_HPP

#include "qt4.hpp"
#include <string>

class VlcArchetypeContainer
{
public:
	VlcArchetypeContainer(intf_thread_t* p_intf);

	void	openFile(std::string const& aString) const;
private:
	intf_thread_t* _p_intf;
};

#endif