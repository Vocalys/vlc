#ifndef MEDIA_FILE_HPP
#define MEDIA_FILE_HPP

#include <list>
#include <string>

class VocalysMediaFile
{
public:
	VocalysMediaFile(std::string const& fullPath);
	VocalysMediaFile(VocalysMediaFile const& mediaFile);

	std::string			path() const {return _path;}
	std::string			fileNameWithoutExtention() const;
	std::list<std::string>	getKeywords() const;
private:
	std::string		_fileName;
	std::string		_path;
};

#endif