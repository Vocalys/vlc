#include "vocalys_media_file.hpp"
#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>

static const std::string defaultDelimiters = " .-";

VocalysMediaFile::VocalysMediaFile(std::string const& fullPath)
	: _path(fullPath)
{
	_fileName = boost::filesystem::path(fullPath).stem().string();
}

VocalysMediaFile::VocalysMediaFile(VocalysMediaFile const& mediaFile)
{
	this->_fileName = mediaFile._fileName;
	this->_path = mediaFile._path;
}

std::string			VocalysMediaFile::fileNameWithoutExtention() const
{
	return _fileName;
}

std::list<std::string>	VocalysMediaFile::getKeywords() const
{
    std::list<std::string> line_parts;
    boost::split(line_parts, this->_fileName, boost::is_any_of(defaultDelimiters));
    return line_parts;
}