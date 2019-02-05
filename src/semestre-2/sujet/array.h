#ifndef ARRAY_H
#define ARRAY_H

#include <vector>
#include <qglobal.h>

class Array
{
public:
	Array(uint size=100);

	uint size() const {return data.size();}

	int get(const uint index);
	int __get__(const uint index) const;
	void set(const uint index, const int value);

	void fillRandom(const int min = 0, const int max=RAND_MAX);

	bool hasBeenReadenAt(const uint index);
	bool hasBeenWrittenAt(const uint index);
	bool readAccessCountAt(const uint index) const {return _readAccess[index];}
	bool writeAccessCountAt(const uint index) const {return _writeAccess[index];}

private:
	std::vector<int> data;
	std::vector<bool> _hasBeenReaden;
	std::vector<bool> _hasBeenWritten;
	std::vector<int> _readAccess;
	std::vector<int> _writeAccess;
};

#endif // ARRAY_H
