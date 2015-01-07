#ifndef MEDIA_FOLDER_HPP
#define MEDIA_FOLDER_HPP

#include <string>
#include <list>
#include "vocalys_media_file.hpp"

class VocalysMediaFolder
{
public:
	VocalysMediaFolder();

	std::list<VocalysMediaFile>		getMediaFileList() const;
	bool						hasMediaFolder() const;

private:
	std::string 	_mediaFolderPathName;
	bool 			_hasMediaFolder;
private:
	std::list<std::string>		getMediaFileNameList() const;
};

#endif