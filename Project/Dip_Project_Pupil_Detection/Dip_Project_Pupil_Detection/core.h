#pragma once
#include <iostream>
#include <cstdio>
using namespace std;

namespace dip{
	class Mat
	{
	public:
		Mat(void);
		Mat(int rows, 
			int cols,
			int type, 
			Scalar scalar = Scalar(0));
		~Mat(void);

		void Mat::convertTo(Mat &dst,
			int type);

		void Mat::create(int rows, 
						int cols, 
						int type,
						Scalar scalar = Scalar(0));

		Mat Mat::clone();

		Mat operator+(Mat src);

		Mat operator-(Mat src);

	public:
		int rows;
		int cols;
		int type;

		UCHAR *data;
	};

	class Scalar{
	public:
		Scalar();
		Scalar(int s);
		~Scalar();

	public:
		int s;
	};
}