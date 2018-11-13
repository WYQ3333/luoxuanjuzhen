//给定一个包含 m x n 个元素的矩阵（m 行, n 列），请按照顺时针螺旋顺序，返回矩阵中的所有元素。
//示例 1:
//输入 :
//	[
//		[1, 2, 3],
//		[4, 5, 6],
//		[7, 8, 9]
//	]
//输出 : [1, 2, 3, 6, 9, 8, 7, 4, 5]
//	示例 2 :
//输入 :
//   [
//	   [1, 2, 3, 4],
//	   [5, 6, 7, 8],
//	   [9, 10, 11, 12]
//   ]
// 输出 : [1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7]


#include<stdio.h>
#include<Windows.h>

/**
* Note: The returned array must be malloced, assume caller calls free().
*/
int* spiralOrder(int **matrix, int matrixRowSize, int matrixColSize) {
	int count = 0;
	int row = matrixRowSize;
	int col = matrixColSize;
	int *array = malloc(sizeof(int)*(matrixColSize + matrixRowSize));
	while (count < (matrixRowSize + matrixColSize))
	{
		int i = 0;
		int j = 0;
		for (j = matrixColSize-col; j < matrixColSize; j++)
		{
			printf("%d ", matrix[i][j]);
			array[count++];
		}
		row--;
		for (i = matrixRowSize - row; i < matrixRowSize; i++)
		{
			printf("%d ", matrix[i][j]);
			array[count++];
		}
		col--;
		for (j = col - 1; j>0; j--)
		{
			printf("%d ", matrix[i][j]);
			array[count++];
		}
		row--;
		for (i = row - 1; i > 0; i--)
		{
			printf("%d ", matrix[i][j]);
			array[count++];
		}
		col--;
	}
	return array;
}

int main()
{
	int matrix[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", matrix[i][j]);
		}
	}
	//int *array = spiralOrder(*matrix, 3, 4);
	int matrixRowSize = 3;
	int matrixColSize = 4;
	int count = 0;
	int row = matrixRowSize;
	int col = matrixColSize;
	int *array = malloc(sizeof(int)*(matrixColSize + matrixRowSize));
	while (count < (matrixRowSize + matrixColSize))
	{
		int i = 0;
		int j = 0;
		for (j = matrixColSize - col; j < matrixColSize; j++)
		{
			printf("%d ", matrix[0][j]);
			array[count++];
		}
		row--;
		for (i = matrixRowSize - row; i < matrixRowSize; i++)
		{
			printf("%d ", matrix[i][j]);
			array[count++];
		}
		col--;
		for (j = col - 1; j>0; j--)
		{
			printf("%d ", matrix[i][j]);
			array[count++];
		}
		row--;
		for (i = row - 1; i > 0; i--)
		{
			printf("%d ", matrix[i][j]);
			array[count++];
		}
		col--;
	}
	while (array != NULL)
	{
		printf("%d ", *array);
		array++;
	}
	system("pause");
	return 0;
}