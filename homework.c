#include <stdio.h>

int main(void) {
	double height_cm = 0.0;
	double weight_kg = 0.0;

	printf("请输入身高（厘米）: ");
	if (scanf("%lf", &height_cm) != 1 || height_cm <= 0) {
		printf("输入的身高无效。\n");
		return 1;
	}

	printf("请输入体重（公斤）: ");
	if (scanf("%lf", &weight_kg) != 1 || weight_kg <= 0) {
		printf("输入的体重无效。\n");
		return 1;
	}

	double height_m = height_cm / 100.0;
	double bmi = weight_kg / (height_m * height_m);

	printf("\n你的 BMI 为: %.2f\n", bmi);

	if (bmi < 18.5) {
		printf("判定: 偏瘦\n");
	} else if (bmi <= 23.9) {
		printf("判定: 正常\n");
	} else if (bmi <= 27.9) {
		printf("判定: 超重\n");
	} else {
		printf("判定: 肥胖\n");
	}

	return 0;
}
