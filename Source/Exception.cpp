#include "Exception.h"

Exception::Exception(const std::string& error, const std::string& file, int line) :
	mError(error),
	mFile(file),
	mLine(line)
{
}

Exception::Exception(std::string&& error, std::string&& file, int&& line) :
	mError(std::move(error)),
	mFile(std::move(file)),
	mLine(line)
{
}

const std::string& Exception::GetError() const
{
	return mError;
}

const std::string& Exception::GetFile() const
{
	return mFile;
}

const int& Exception::GetLine() const
{
	return mLine;
}