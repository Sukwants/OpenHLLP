#include <cstdio>

int main()
{
	int ret, x;

	while (1) {
		printf("请输入x的值[0-100] : ");
		ret = scanf("%d", &x);
		if (ret == 1 && (x >= 0 && x <= 100))
			break;
		printf("输入有错[ret=%d x=%d],请重新输入\n", ret, x);
		while (getchar() != '\n');
	}

	printf("ret=%d x=%d\n", ret, x);

	return 0;
}

