#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float height = 0;
	float weight = 0;
	float bmi = 0;
	printf("请输入你的身高（m）：");
	scanf("%f", &height);
	printf("请输入你的体重（kg）：");
	scanf("%f", &weight);
	bmi = (weight / (height * height));
	if (weight <= 0 || height <= 0)
	{
		printf("输入错误");
	}
	else
		printf("%f", bmi);
		if (bmi >= 28.0)
		{
			printf("肥胖");
		}
		else if (bmi >= 24.0)
		{
			printf("超重");
		}
		else if (bmi >= 18.5)
		{
			printf("正常");
		}
		else if (bmi < 18.5)
		{
			printf("偏瘦");
		}
	return 0;
}

	
	