#include<stdio.h>
#include<string.h>


int main() {

	//char* p = "abcdef";
	////printf("%s\n",p);//�ӵ�һ��Ԫ�ؿ�ʼ��ӡֱ��\0����
	////printf("%c\n", *p); //��ӡ��һ��Ԫ��
	////printf("%c\n", p[0]);//��ӡ��һ��Ԫ��
	////printf("%c\n", (*p)+1);//�����õõ���һ��Ԫ�ص�ֵ��Ȼ����ֵ��1 ��ʾ��һ��Ԫ�ص�ֵ��97���98
	////printf("%s\n", p + 1);//�ӵڶ���Ԫ�ؿ�ʼ��ӡ
	////sizeof ��ʾ��������ռ�ڴ��е��ֽ���
	//printf("%d\n",sizeof(p));//p��ʾָ������ 4��8���ֽ�
	//printf("%d\n", sizeof(p+1));//p��ʾָ������ p+1��ִָ�е���һ���ĵ�ַ ��Ȼ��ָ������ 4 ��8���ֽ�
	//printf("%d\n", sizeof(*p));// *p�õ����ǵ�һ��Ԫ�ص�ֵchar����  1���ֽ�
	//printf("%d\n", sizeof(p[0]));//��һ��Ԫ�� char���� 1���ֽ�
	//printf("%d\n", sizeof(&p));//��ַ 4��8���ֽ�
	//printf("%d\n", sizeof(&p+1));//��ַ 4��8���ֽ�
	//printf("%d\n", sizeof(&p[0]+1));//��ַ 4��8���ֽ�


	//char arr[] = {'a',	'b',	'c',	'd',	'e',	'f'};
	//printf("%d\n",strlen(arr));//Ҫ������\0����ֹͣ���Գ��������ֵ
	//printf("%d\n", strlen(arr+0));//Ҫ������\0����ֹͣ���Գ��������ֵ
	////printf("%d\n", strlen(*arr));//*arr��ʾ����һ�������char���͵���ֵ  ��strlen�Ĳ�����const char*  ���Իᱨ��
	////printf("%d\n", strlen(arr[1]));//arr[1]��ʾ����һ�������char���͵���ֵ ��strlen�Ĳ�����const char*  ���Իᱨ��
	//printf("%d\n", strlen(&arr));//&arr ��ʾ��Ԫ�ص�ַ  ���ֵ
	//printf("%d\n", strlen(&arr+1));//ָ��һ�����鳤�ȣ�Ŀǰ��6���ֽڣ�֮��ĵ�ַ�����ֵ ��strlen(&arr)��������6          ���ֵ-6
	//printf("%d\n", strlen(&arr[0]+1));//���ֵ ��strlen(&arr)��������1      ���ֵ-1
	int a[] = {1,2};
	int b[] = { 3,4 };
	int c[] = { 5,6 };
	int(*p1[3])[2] = { &a, &b, &c };//����ָ�������   ָ�������ָ�������ָ��

	int* p[3] = { &a, &b, &c };

	//int parr[3][2] = { {1,2}, { 3,4 },  { 5,6 } };
	//int(*(*parr)[3])[2];

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 2; j++) {

			//printf("%d ", (*p[i]) + j);//int* p[3]
			printf("%d ", (*p1[i])[j]);//int(*p[3])[2]   //p1[i] ���ֵ�i��Ԫ�� ��ʾָ�룻*p1[i] ��Ϊָ��ָ�����飬�����ñ�ʾ�õ�������
			 //printf("%d ",*((*p1[i]) + j));//int(*p[3])[2] //(*p1[i]) �����ñ�ʾ�õ���ָ��ָ������� , ����arr[0] == *(arr +0)
			//printf("%d ", p[i][j]);//int* p[3]
			//printf("%p ", p[i][j]);
		}
		printf("\n");
	}


}
