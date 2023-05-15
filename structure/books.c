#include <stdio.h>
#include <string.h>
struct book {
	char name[10];
	char author[30];
	int price;
};

void print(struct book b[]) {
	int i;
	for(i=0;i<4;i++) {
		printf("%s ", b[i].name);
	}
}

void sort(struct book b[]) {
	int i,j;
	struct book temp;
	for(i=0;i<4;i++) {
		for(j=0;j<3;j++) {
			if(b[i].price < b[j].price) {
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
}
int main() {
	struct book b[4];
	strcpy(b[0].name,"A");strcpy(b[0].author,"XY");b[0].price=52;
	strcpy(b[1].name,"B");strcpy(b[1].author,"PQ");b[1].price=39;
	strcpy(b[2].name,"C");strcpy(b[2].author,"MN");b[2].price=80;
	strcpy(b[3].name,"D");strcpy(b[3].author,"AB");b[3].price=72;
	print(b);
	sort(b);
	printf("\n");
	print(b);
}

