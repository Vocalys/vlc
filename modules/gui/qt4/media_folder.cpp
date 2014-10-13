#include "media_folder.hpp"
#include <stdlib.h>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/progress.hpp>
#include <iostream>
#include <boost/algorithm/string.hpp>
#include <stdexcept>

// this should not be a static const
static const std::string defaultFolderName = "/vlc_vocalys/media";
namespace fs = boost::filesystem;

MediaFolder::MediaFolder()
	:
	_hasMediaFolder(false)
{
	char* homePathCharStar = getenv("HOME");
    if (homePathCharStar != NULL) {
        _mediaFolderPathName = std::string(homePathCharStar) + defaultFolderName;
	    if (fs::exists(_mediaFolderPathName) && fs::is_directory(_mediaFolderPathName))
	    {
	    	_hasMediaFolder = true;
	    }
    }
}

// http://www.boost.org/doc/libs/1_37_0/libs/filesystem/example/simple_ls.cpp
std::list<MediaFile> 	MediaFolder::getMediaFileList() const
{
	std::list<MediaFile> stringList;

	if (_hasMediaFolder == false) {
		throw std::logic_error("User does not have media folder");
	}
	fs::path mediaFolderPathName = fs::system_complete(_mediaFolderPathName);
	fs::directory_iterator end_iter;
    for (fs::directory_iterator dir_itr(mediaFolderPathName);
         dir_itr != end_iter;
          ++dir_itr )
    {
    	stringList.push_back(MediaFile(dir_itr->path().string()));
    }
    return stringList;
}

bool	MediaFolder::hasMediaFolder() const
{
	return _hasMediaFolder;
}