#include "media_file.hpp"
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>

static const std::string defaultDelimiters = " .-";

MediaFile::MediaFile(std::string const& fullPath)
	: _path(fullPath)
{
	_fileName = boost::filesystem::path(fullPath).stem().string();
}

MediaFile::MediaFile(MediaFile const& mediaFile)
{
	this->_fileName = mediaFile._fileName;
	this->_path = mediaFile._path;
}

std::string			MediaFile::fileNameWithoutExtention() const
{
	return _fileName;
}

std::list<std::string>	MediaFile::getKeywords() const
{
    std::list<std::string> line_parts;
    boost::split(line_parts, this->_fileName, boost::is_any_of(defaultDelimiters));
    return line_parts;
}