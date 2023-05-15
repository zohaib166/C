#include <stdio.h>

typedef struct _time {
	int hour;
	int minutes;
} time;

time findTime(time t1, time t2) {
	time t3;
	int tempmin = t1.minutes+t2.minutes;
	int temphr;
	if(tempmin>59) {
		temphr = tempmin/60;
		tempmin = tempmin%60;
	}
	t3.minutes = tempmin;
	temphr = t1.hour + t2.hour;
	if(temphr>11) {
		t3.hour = temphr%12;
	}
	return t3;
}

void printTime(time t) {
	printf("%d:%d", t.hour, t.minutes);
}
int main() {
	time t1, t2;
	t1.hour = 2; t1.minutes = 30;
	t1.hour = 5; t1.minutes = 40;
	time t3 = findTime(t1,t2);
	printTime(t3);
}
