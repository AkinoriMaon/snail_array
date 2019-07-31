// Visual Studio���� �ۼ��� �ڵ��Դϴ�.

#include <stdio.h>

int main()
{
	// ���� �Է¹��� ���ڸ� ���ؼ� n * nũ���� 2���� �迭�� ���� �� �ִ� ����� ���� �켱 �̷��� ũ�⸦ ��Ҵ�.
	int snail_arr[50][50];
	int i = 0, j = -1, k, n, loop, num = 1;

	scanf_s("%d", &n); // n * n�� n�� �Է¹޾Ƽ� �ݺ� Ƚ���� �����ϱ� ���ؼ� ����Ѵ�.
	loop = n;

	while (1)
	{
		for (k = 0; k < loop; k++)
		{
			if (loop % 2 != 0) // ������ �迭�� ��Ģ�� ã�ƺ��� �̷� ��Ģ�� Ȱ���ϸ� �ȴ�.
			{
				j++;
			}
			else
			{
				j--;
			}
			snail_arr[i][j] = num;
			num++;
		}

		loop--; // ���θ� �� ��, ���θ� �����ν� �� �� �� ������ �����Ѵ�.
		if (loop == 0)
		{
			break;
		}

		for (k = 0; k < loop; k++)
		{
			if (loop % 2 != 0)
			{
				i--;
			}
			else
			{
				i++;
			}
			snail_arr[i][j] = num;
			num++;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%5d ", snail_arr[i][j]);
		}
		puts("");
	}

	return 1;
}
