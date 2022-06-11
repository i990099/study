#include<stdio.h>
#include<math.h>



int main() {

	//采用二分法求方程2(x*x*x)-4(x*x)+3x-6=0在(-10,10)之间的根

	float a = -10, b = 10, ab, fa, fab, fb;
	fa = a * ((2 * a - 4) * a + 3) - 6;
	do {
		ab = (a + b) / 2;
		fab = ab * ((2 * ab - 4) * ab + 3) - 6;
		if ((fa * fab)>0)
		{
			a = ab; 
			fa = fab;
		}
		else
		{
			b = ab;
			fb = fab;
		}
	} while (fabs(fab)>= 1e-5);

	printf("方程的根为 %.2f", ab);





	return 0;

}




