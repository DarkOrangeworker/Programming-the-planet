#include <stdio.h>

int main(void) {
	int arr[10];
	int height,count = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d",&height);
	height += 30;
	for (int j = 0; j < 10; j++) {
		if (height >= arr[j])
		    count += 1;
	}
	printf("%d\n",count);
	return 0;
}

//±êÌâ:	ÌÕÌÕÕªÆ»¹û
