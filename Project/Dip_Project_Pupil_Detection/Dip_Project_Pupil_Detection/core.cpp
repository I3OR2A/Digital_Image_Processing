#include "stdafx.h"
#include "core.h"
#include "types.h"
using namespace dip;

Mat::Mat(void)
{

}

Mat::Mat(int rows, int cols, int type, Scalar scalar){
	this->rows = rows;
	this->cols = cols;
	this->type = type;

	free(data);
	switch (type)
	{
	case DIP_8UC1:
		data = (UCHAR*) calloc(cols * rows, sizeof(int));
		break;
	case DIP_32FC1:
		data = (UCHAR*) calloc(cols * rows, sizeof(float));
		break;
	case DIP_64FC1:
		data = (UCHAR*) calloc(cols * rows, sizeof(double));
		break;
	default:
		break;
	}
}

Mat::~Mat(void)
{
	cout << "Mat deconstructor" << endl;
	free(data);
}

Mat Mat::operator+(Mat src_2){
	switch (type)
	{
	case DIP_8UC1:{
		int* data_src_1 = (int*) this->data;
		int* data_src_2 = (int*) src_2.data;

		Mat tmp(rows, cols, DIP_8UC1);
		int* data_tmp = (int*) tmp.data;
		for(int i = 0; i < rows; ++i){
			for(int j = 0; j < cols; ++j){
				int offset = i * cols + j;
				*(data_tmp + offset) = *(data_src_1 + offset) + *(data_src_2 + offset);
			}
		}

		return tmp;
		break;
				  }
	case DIP_32FC1:{
		float* data_src_1 = (float*) this->data;
		float* data_src_2 = (float*) src_2.data;
		
		Mat tmp(rows, cols, DIP_32FC1);
		float* data_tmp = (float*) tmp.data;
		for(int i = 0; i < rows; ++i){
			for(int j = 0; j < cols; ++j){
				int offset = i * cols + j;
				*(data_tmp + offset) = *(data_src_1 + offset) + *(data_src_2 + offset);
			}
		}

		return tmp;
		break;
				   }
	case DIP_64FC1:{
		double* data_src_1 = (double*) this->data;
		double* data_src_2 = (double*) src_2.data;

		Mat tmp(rows, cols, DIP_64FC1);
		double* data_tmp = (double*) tmp.data;
		for(int i = 0; i < rows; ++i){
			for(int j = 0; j < cols; ++j){
				int offset = i * cols + j;
				*(data_tmp + offset) = *(data_src_1 + offset) + *(data_src_2 + offset);
			}
		}

		return tmp;
		break;
				   }
	default:
		return Mat();
		break;
	}
}

Mat Mat::operator-(Mat src_2){
	switch (type)
	{
	case DIP_8UC1:{
		int* data_src_1 = (int*) this->data;
		int* data_src_2 = (int*) src_2.data;

		Mat tmp(rows, cols, DIP_8UC1);
		int* data_tmp = (int*) tmp.data;
		for(int i = 0; i < rows; ++i){
			for(int j = 0; j < cols; ++j){
				int offset = i * cols + j;
				*(data_tmp + offset) = *(data_src_1 + offset) - *(data_src_2 + offset);
			}
		}

		return tmp;
		break;
				  }
	case DIP_32FC1:{
		float* data_src_1 = (float*) this->data;
		float* data_src_2 = (float*) src_2.data;
		
		Mat tmp(rows, cols, DIP_32FC1);
		float* data_tmp = (float*) tmp.data;
		for(int i = 0; i < rows; ++i){
			for(int j = 0; j < cols; ++j){
				int offset = i * cols + j;
				*(data_tmp + offset) = *(data_src_1 + offset) - *(data_src_2 + offset);
			}
		}

		return tmp;
		break;
				   }
	case DIP_64FC1:{
		double* data_src_1 = (double*) this->data;
		double* data_src_2 = (double*) src_2.data;

		Mat tmp(rows, cols, DIP_64FC1);
		double* data_tmp = (double*) tmp.data;
		for(int i = 0; i < rows; ++i){
			for(int j = 0; j < cols; ++j){
				int offset = i * cols + j;
				*(data_tmp + offset) = *(data_src_1 + offset) - *(data_src_2 + offset);
			}
		}

		return tmp;
		break;
				   }
	default:
		return Mat();
		break;
	}
}

Mat Mat::clone(void){
	switch (type)
	{
	case DIP_8UC1:{
		int* data_src_1 = (int*) this->data;

		Mat tmp(rows, cols, DIP_8UC1);
		int* data_tmp = (int*) tmp.data;
		for(int i = 0; i < rows; ++i){
			for(int j = 0; j < cols; ++j){
				int offset = i * cols + j;
				*(data_tmp + offset) = *(data_src_1 + offset);
			}
		}

		return tmp;
		break;
				  }
	case DIP_32FC1:{
		float* data_src_1 = (float*) this->data;
		
		Mat tmp(rows, cols, DIP_32FC1);
		float* data_tmp = (float*) tmp.data;
		for(int i = 0; i < rows; ++i){
			for(int j = 0; j < cols; ++j){
				int offset = i * cols + j;
				*(data_tmp + offset) = *(data_src_1 + offset);
			}
		}

		return tmp;
		break;
				   }
	case DIP_64FC1:{
		double* data_src_1 = (double*) this->data;

		Mat tmp(rows, cols, DIP_64FC1);
		double* data_tmp = (double*) tmp.data;
		for(int i = 0; i < rows; ++i){
			for(int j = 0; j < cols; ++j){
				int offset = i * cols + j;
				*(data_tmp + offset) = *(data_src_1 + offset);
			}
		}

		return tmp;
		break;
				   }
	default:
		return Mat(rows, cols, type);
		break;
	}
}

void Mat::create(int rows, int cols, int type, Scalar scalar){
	this->rows = rows;
	this->cols = cols;
	this->type = type;

	free(data); // deallocate the memory block
	switch (type)
	{
	case DIP_8UC1:
		data = (UCHAR*) calloc(cols * rows, sizeof(int));
		break;
	case DIP_32FC1:
		data = (UCHAR*) calloc(cols * rows, sizeof(float));
		break;
	case DIP_64FC1:
		data = (UCHAR*) calloc(cols * rows, sizeof(double));
		break;
	default:
		break;
	}
}

void Mat::convertTo(Mat &dst, int type){
	dst.create(rows, cols, type); // create the container
	
	for(int i = 0; i < rows; ++i){
		for(int j = 0; j < cols; ++j){
			
		}
	}
}

Scalar::Scalar(int s){
	this->s = s;
}