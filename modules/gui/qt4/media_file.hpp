#ifndef MEDIA_FILE
#define MEDIA_FILE

#include <list>
#include <string>

class MediaFile
{
public:
	MediaFile(std::string const& fullPath);
	MediaFile(MediaFile const& mediaFile);

	std::string			path() const {return _path;}
	std::string			fileNameWithoutExtention() const;
	std::list<std::string>	getKeywords() const;
private:
	std::string		_fileName;
	std::string		_path;
};

#endif