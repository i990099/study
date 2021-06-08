//#include<stdio.h>
//
//
//struct stu {
//	char* name;  //姓名
//	int num;  //学号
//	int age;  //年龄
//	char group;  //所在小组 
//	float score;  //成绩
//}class[] = {
//	{"Li ping", 5, 18, 'C', 145.0},
//	{"Zhang ping", 4, 19, 'A', 130.5},
//	{"He fang", 1, 18, 'A', 148.5},
//	{"Cheng ling", 2, 17, 'F', 139.0},
//	{"Wang ming", 3, 17, 'B', 144.5}
//} ,*ps;
//
//int main() {
//
//	struct stu {
//		char* name;  //姓名
//		int num;  //学号
//		int age;  //年龄
//		char group;  //所在学习小组
//		float score;  //成绩
//
//	};
//
//	struct stu stu1 = {"xiaoming", 1234, 12, 'A', 78.5f};
//
//	printf("name=%s\nnum=%d\nage=%d\ngroup=%c\nscore=%.1f\n",stu1.name, stu1.num, stu1.age, stu1.group, stu1.score);
//
//	struct stu*  stu2 = &stu1;
//
//
//	printf("name=%s\nnum=%d\nage=%d\ngroup=%c\nscore=%.1f\n", (*stu2).name, (*stu2).num, (*stu2).age, (*stu2).group, (*stu2).score);
//	
//	
//	printf("name=%s\nnum=%d\nage=%d\ngroup=%c\nscore=%.1f\n", stu2->name, stu2->num, stu2->age, stu2->group, stu2->score);
//
//	int sz = sizeof(class) / sizeof(class[0]);
//	printf("sz = %d\n",sz);
//
//	ps = class;
//	printf("class=%p ps=%p %d\n",class+sz,ps,(class + sz-ps));
//
//	printf("Name\t\tNum\tAge\tGroup\tScore\t\n");
//	for (ps = class;ps<class + sz;ps++) {
//		printf("%-10s\t%d\t%d\t%c\t%.1f\n", ps->name, ps->num, ps->age, ps->group, ps->score);
//	}
//
//
//
//	return 0;
//
//}