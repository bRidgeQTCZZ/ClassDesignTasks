#include "matrix.h"

M::M(int n[][2]) {
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			mNums[i][j] = n[i][j];
}

M::M(IMatrix* matrix) {

}