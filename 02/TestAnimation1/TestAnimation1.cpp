#include <graphics.h>

void mainloop() {
	
	for (; is_run(); delay_fps(5)) {
		setfillcolor(EGERGB(random(255),random(255), random(255)));
		
		cleardevice();
		fillellipse(200, 200, 50, 30);
	}
}

int main(void) {
	setinitmode(INIT_DEFAULT|INIT_NOFORCEEXIT);
	
	initgraph(640, 480);
	
	randomize();
	
	setrendermode(RENDER_MANUAL);
	
	mainloop();
	closegraph();
	return 0;
}
