#ifndef VLC_ARCHETYPE_CONTAINER_HPP
#define VLC_ARCHETYPE_CONTAINER_HPP

#include <string>

class VlcArchetypeContainer
{
public:
	VlcArchetypeContainer(intf_thread_t* p_intf)
	: _p_intf(p_intf)
{

}

	bool	openFile(std::string const& aString)
	{
		Open::openFile(_p_intf, QString::fromStdString(aString));
	}
private:
	intf_thread_t* _p_intf;
};

#endif