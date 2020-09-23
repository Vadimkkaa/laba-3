#include<stdio.h>
int main() {
	int a = 1, b = 2, c = 3, d = 5, f = 10, h = 20, j = 50, n, str, i;
	int g[8] = { 50,20,15,10,5,3,2,1};
	printf("VVedite naturalnoye kolichestvo kopeek\n");
	scanf_s("%d", &n);
	str = n;
    if (str == 0){
		printf("Vi vveli 0.Povtorite popytku");
		return 0;
	}
	printf("Nuzhnye kopeiki\n");
	
	for (i = 0; i <= 7; i++) {

		str = str - g[i];
        if (str == 0) {
			printf("%d\n", g[i]);
			return 0;
		};

        if (str < 0) {
			str = str + g[i];
			continue;
		};

		if (str > 0) {
			printf("%d\n", g[i]);
		};

		while (str >= g[i]) {
			str = str - g[i];
			printf("%d\n", g[i]);
		};
       
		if (str < g[i]) {
			continue;
		};
		

		

		
	}
         return 0;
}