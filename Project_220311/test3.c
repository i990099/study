//#include<stdio.h>
//
//
//struct stu {
//
//	int age;
//
//}* pstu;
//
//
//int main() {
//
//	struct stu stu1 = {12};
//
//	struct stu stu2 = { 5 };
//
//	pstu = &stu1;
//	printf("%d  %d\n",sizeof(struct stu),sizeof(stu1));
//	printf("%p   %p\n", &stu1, &stu2);
//
//	printf("%d   %d\n", pstu->age,(*pstu).age);
//	printf("%p  %p\n", pstu,(pstu+1));
//	//printf("%d\n", (*++pstu).age);
//	return 0;
//}