#include<stdio.h>
#define LEN 100

/**
* �и���ʵ����������ֵ
* �е�ÿ�����ȶ��ж�Ӧ�ļ۸�
* ������һ����Ҫ�и���ܳ���ʱ�ҵ��и����ѷ����ﵽ��ֵ���
**/




//�Ե�����
//ÿһ���ҵ����Ž⣬Ȼ����һ�����Բο���һ�������Ž���������Ž�
int Bottom_Up_Cut_Rod(int p[],int n) {
	
	int temp = 0;
	int  r[LEN] = { 0 };//��¼ÿһ�������� �ڴﵽ�ó���ʱ�����Ž�ļ۸�
	for (int j = 1; j <= n; j++) {
		temp = 0;
		for (int i = 1; i <= j; i++) {
			temp = temp >= (r[j - i] + p[i]) ? temp : (r[j - i] + p[i]);
		}
		r[j] = temp;
	}

	printf("%d\n", r[n]);//�𲽵�nʱ��Ӧ��ǰ���ۼ����������Ž��ֵ���� �и�n���ȵ����Ž�
	return r[n];
}

//�Զ�����
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

	int p[] = { 0,1,3,3,5,4 };//ÿ�����ȶ�Ӧ�ļ۸���� 0�׶�Ӧ�۸�0 ��1�׶�Ӧ�۸�1��2�׶�Ӧ�۸�1��3�׶�Ӧ�۸�3��4�׶�Ӧ�۸�5
	
	int n = sizeof(p) / sizeof(p[0]) - 1;
	Bottom_Up_Cut_Rod(p,n);
	int max = Top_Down_Cut_Rod(p, n);
	printf("%d\n", max);
	return 0;
}