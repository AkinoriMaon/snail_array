// Visual Studio에서 작성된 코드입니다.

#include <stdio.h>

int main()
{
	// 아직 입력받은 숫자를 통해서 n * n크기의 2차원 배열을 만들 수 있는 방법을 몰라서 우선 이렇게 크기를 잡았다.
	int snail_arr[50][50];
	int i = 0, j = -1, k, n, loop, num = 1;

	scanf_s("%d", &n); // n * n의 n을 입력받아서 반복 횟수를 지정하기 위해서 사용한다.
	loop = n;

	while (1)
	{
		for (k = 0; k < loop; k++)
		{
			if (loop % 2 != 0) // 달팽이 배열의 규칙을 찾아보니 이런 규칙을 활용하면 된다.
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

		loop--; // 세로를 돈 뒤, 가로를 돔으로써 한 번 돈 것으로 간주한다.
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
