#include "GrayscaleAverageFilter.h"



void GrayscaleAverageFilter::bucle(uchar*& _input, uchar*& _output, uint _x, uint _y)
{
	_input = base->image.ptr<uchar>(_y);

	const float b = _input[_x * 3];
	const float g = _input[_x * 3 + 1];
	const float r = _input[_x * 3 + 2];

	const float gray = (b + g + r) / 3;

	_output[_x * 3] = static_cast<int>(gray);
	_output[_x * 3 + 1] = static_cast<int>(gray);
	_output[_x * 3 + 2] = static_cast<int>(gray);
}

void GrayscaleAverageFilter::computed_results()
{
}

GrayscaleAverageFilter::GrayscaleAverageFilter()
{
	substractor = 0;
}


GrayscaleAverageFilter::~GrayscaleAverageFilter()
{
}

const wchar_t* GrayscaleAverageFilter::get_name()
{
	return TEXT("Filtro gris por promedio");
}
