#include<stdio.h>
#define LEN 100

/**
* 切钢条实现销售最大价值
* 切的每个长度都有对应的价格
* 当给出一个需要切割的总长度时找到切割的最佳方案达到价值最大
**/




//自底向上
//每一步找到最优解，然后下一步可以参考上一步的最优解继续找最优解
int Bottom_Up_Cut_Rod(int p[],int n) {
	
	int temp = 0;
	int  r[LEN] = { 0 };//记录每一个长度下 在达到该长度时的最优解的价格
	for (int j = 1; j <= n; j++) {
		temp = 0;
		for (int i = 1; i <= j; i++) {
			temp = temp >= (r[j - i] + p[i]) ? temp : (r[j - i] + p[i]);
		}
		r[j] = temp;
	}

	printf("%d\n", r[n]);//逐步到n时对应的前面累计下来的最优解的值就是 切割n长度的最优解
	return r[n];
}

//自顶向下
int Top_Down_Cut_Rod(int p[], int n) {
	int r = 0;
	
	if (n == 0) {
		return 0;
	}

	for (int i = 1; i <= n;i++) {

		int tmp = p[i] + Top_Down_Cut_Rod(p, n - i);

		r = (r > tmp) ? r : tmp;
	}

	return r;

}



int main() {

	int p[] = { 0,1,3,3,5,4 };//每个长度对应的价格比如 0米对应价格0 ，1米对应价格1，2米对应价格1，3米对应价格3，4米对应价格5
	
	int n = sizeof(p) / sizeof(p[0]) - 1;
	Bottom_Up_Cut_Rod(p,n);
	int max = Top_Down_Cut_Rod(p, n);
	printf("%d\n", max);
	return 0;
}