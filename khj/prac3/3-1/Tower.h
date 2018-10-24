#pragma once

class Tower {
	int height;
public : 
	Tower() {
		height = 1;
	}
	Tower(int a) {
		height = a;
	}
	int getHeight() {
		return height;
	}
};