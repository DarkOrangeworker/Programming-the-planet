#include <stdio.h>

int main(void) {
	int arr[7];
	int a,b,sum,tmp = 0;
	int result;
	for (int i = 0; i < 7; i++) {
		scanf("%d %d",&a,&b);
		sum = a + b;
		arr[i] = sum;
	}
	int max = arr[0];
	for (int j = 1; j < 7; j++) {
		if (max < arr[j]) {
			max = arr[j];
		}
	}
	if (max < 8) {
		result = 0;
	}
	else {
		for (int k = 0; k < 7; k++) {
			if (max == arr[k]) {
				result = k + 1;
				break;
			}
		}
	}
	printf("%d\n",result);
	return 0;
}

//标题:	不高兴的津津
