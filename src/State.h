#pragma once

class State{
	public:
		virtual void setup() = 0;
		virtual void update() = 0;
		virtual void draw() = 0;
};
