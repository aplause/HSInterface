#include <stdio.h>

int funA(int x) {
	/* K = 17 */
	return (x << 4)+x;
}

int funB(int x) {
	/* K = -7 */
	return -((x << 2) + (x <<1) +x);
}

int funC(int x) {
	/* K = 60 */
	return (x << 6)-(x <<2);
}

int funD(int x) {
	/* K = -112 */
	return -((x << 6) - (x <<3)) ;
}


int main(void) {
	printf("%d\n", funA(2));
	printf("%d\n", funB(2));
	printf("%d\n", funC(2));
	printf("%d\n", funD(2));
}
	
