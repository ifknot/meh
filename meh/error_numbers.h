#pragma once

/**
* (D)ebug error numbers
*/

namespace meh {

	using error_number_t = size_t;

	const size_t DNOCONVERSION = 1;
	const size_t DOUTRANGE = 2;
	const size_t DNOARGS = 3;
	const size_t DNOQUOTE = 4;
	const size_t DMALSTACK = 5;
	const size_t DUNDERFLOW = 6;
}