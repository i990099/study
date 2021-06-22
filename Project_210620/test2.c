#include<stdio.h>
#include<string.h>
#include<assert.h>


void* my_memcpy(void* destination, const void* source, size_t number_of_bytes) {

	assert(destination != NULL);
	assert(source != NULL);
	void* cp = destination;
	
	if (source < destination) {//�Ӻ���ǰ����  ͬһ������Դ�������е���ʱ�Ĵ���ʽ
		
		while (number_of_bytes--) {
			
			*((char*)cp + number_of_bytes) = *((char*)source + number_of_bytes);
		
		}

	}
	else {//��ǰ�����

		while (number_of_bytes--) {

			(*((char*)cp)++ = *((char*)source)++);

			//*(char*)cp = *(char*)source;
			//++(char*)cp;
			//++(char*)source;
		}
	
	}

	

	return destination;


}



int main() {

	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	int b[5] = { 1,3,5,7,9 };

	size_t length = sizeof(a)/sizeof(a[0]);

	for (size_t i = 0; i < length; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
	//printf("a=%p   b=%p\n", a,b);

	//memcpy(void *destination, const void *source, size_t number_of_bytes)
	//����*destination ��ʾָ��Ŀ���ڴ�λ�õ�ָ�룬*source ��ʾָ��Դ�ڴ�λ�õ�ָ�룬
	//number_of_bytes ��ʾҪ��Դ�ڴ�λ�ø��Ƶ�Ŀ���ڴ�λ�õ��ֽ�����
	
	
	//int* c = (int*)my_memcpy(a,b,sizeof(b));
	//my_memcpy(a + 2, a, sizeof(a[0]) * 5);
	my_memcpy(a, a+2, sizeof(a[0]) * 5);
	//memmove(a + 2, a, sizeof(a[0])*5);

	for (size_t i = 0; i < length; i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");

	//printf("c=%p   a=%p   b=%p\n",c,a,b);


	return 0;
}