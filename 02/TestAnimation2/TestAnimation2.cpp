#include <graphics.h>

void mainloop() {
	int x = 0;
	setcolor(EGERGB(0, 0xFF, 0));
	setfillcolor(EGERGB(0, 0, 0xFF));
	
	for( ; is_run(); delay_fps(60)) {
		x = (x + 1) % 440;
		
		cleardevice();
		
		fillellipse(x + 100, 200, 100, 100);
	}
}

int main() {
	setinitmode(INIT_ANIMATION);
	initgraph(640, 480);
	randomize();
	mainloop();
	
	closegraph();
	
	return 0;
}
