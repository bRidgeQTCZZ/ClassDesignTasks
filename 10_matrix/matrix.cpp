#include "matrix.h"

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap(IMatrix* a, IMatrix* b) {
	IMatrix* temp = a;
	a = b;
	b = temp;
}

M::M(int n[][2]) {
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			mNums[i][j] = n[i][j];
}

M::M(IMatrix* m[][2]) {
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			mMatrix[i][j] = m[i][j];
}

void M::Turn(IMatrix* matrix) {
	if (mMatrix == nullptr)
		swap(mNums[0][1], mNums[1][0]);
	else {
		swap(mMatrix[0][1], mMatrix[1][0]);
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				Turn(mMatrix[i][j]);
	}	
}

void M::Transform(IMatrix* matrix) {
	if (mMatrix[0] == nullptr)
		/*±ä»»*/;
	else {
		/*±ä»»*/;
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < 2; j++)
				Transform(mMatrix[i][j]);
	}
}