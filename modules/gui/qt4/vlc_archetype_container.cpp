#include "vlc_archetype_container.hpp"
#include "recents.hpp"

VlcArchetypeContainer::VlcArchetypeContainer(intf_thread_t* p_intf)
	: _p_intf(p_intf)
{

}

bool	VlcArchetypeContainer::openFile(std::string const& aString)
{
	Open::openFile(_p_intf, QString::fromStdString(aString));
}