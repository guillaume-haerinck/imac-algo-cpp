#include "array.h"

#include <stdexcept>
#include <QThread>

Array::Array(uint size)
{
	data.resize(size);
	_hasBeenReaden.resize(size);
	_hasBeenWritten.resize(size);
	_readAccess.resize(size);
	_writeAccess.resize(size);
}

int Array::get(const uint index)
{
	if(index >= data.size())
		throw std::out_of_range("get(): Given index is out of bound !");
	_hasBeenReaden[index] = true;
	_readAccess[index]++;
	QThread::sleep(200);
	return data[index];
}

int Array::__get__(const uint index) const
{
	return data[index];
}

void Array::set(const uint index, int value)
{
	if(index >= data.size())
		throw std::out_of_range("set(): Given index is out of bound !");
	_hasBeenWritten[index] = true;
	_writeAccess[index]++;
	QThread::sleep(200);
	data[index] = value;
}

void Array::fillRandom(const int min, const int max)
{
	const int _max = max - min;
	for (uint i=0; i<size(); ++i)
		data[i] = qrand() % _max + min;
}

bool Array::hasBeenReadenAt(const uint index)
{
	bool _result = _hasBeenReaden[index];
	_hasBeenReaden[index] = false;
	return _result;
}

bool Array::hasBeenWrittenAt(const uint index)
{
	bool _result = _hasBeenWritten[index];
	_hasBeenWritten[index] = false;
	return _result;
}
