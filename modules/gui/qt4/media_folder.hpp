#ifndef MEDIA_FOLDER_HPP
#define MEDIA_FOLDER_HPP

#include <string>
#include <list>
#include "media_file.hpp"

class MediaFolder
{
public:
	MediaFolder();

	std::list<MediaFile>		getMediaFileList() const;
	bool						hasMediaFolder() const;

private:
	std::string 	_mediaFolderPathName;
	bool 			_hasMediaFolder;
private:
	std::list<std::string>		getMediaFileNameList() const;
};

#endif