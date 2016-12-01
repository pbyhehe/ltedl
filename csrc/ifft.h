#pragma once

#include "typedefine.h"
//#include "fft.h"

//float *Ibuf1, *Qbuf1, *Ibuf2, *Qbuf2, *Iout1, *Qout1;
	//fft fft_u;

	//ifft(){};
	//virtual ~ifft(){};

	int ifft_Init();
	int ifft_Clear();
	int ifft_IDFTInputOutput(float *Iin, float *Qin, int size, float *Iout, float *Qout);
	int ifft_InputOutput3(cfloat* in, int size, cfloat* out);
	int ifft_InputOutput5(float * Iin, float *Qin, int size, float *Iout, float *Qout);


//extern ifft ifft_u;
