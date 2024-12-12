#include <stdio.h>

int main() {
    char str[] = "Hello world"; 
    int count = 0;
    int length = strlen(str);
    for (int i = 0;  i < length; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    printf("So luong ky tu la chu cai: %d\n", count);
    return 0;
}
// Cach 2
int main(){
	char text[]="jkwanjdnawjdlajdaw";
	int count=0;
	int length=strlen(text);
	for(int i=0;i<length;i++){
		if(isalpha(text[i])){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
