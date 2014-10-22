#include "vlc_archetype_container.hpp"
#include "recents.hpp"

VlcArchetypeContainer::VlcArchetypeContainer(intf_thread_t* p_intf)
	: _p_intf(p_intf)
{

}

void	VlcArchetypeContainer::openFile(std::string aString) const
{
	Open::openFile(_p_intf, aString);
}