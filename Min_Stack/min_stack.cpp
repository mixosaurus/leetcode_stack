#include "min_stack.h"
#include <algorithm>
using namespace std;

MinStack::MinStack() {}

void MinStack::push(int x) {
	if (pTop == nullptr) {
		pTop = new StackNode(x, x, nullptr);
	} else {
		pTop = new StackNode(x, min(x, pTop->min), pTop);
	}
}

void MinStack::pop() {
	if (pTop != nullptr) {
		StackNode* p = pTop;
		pTop = pTop->next;
		delete p;
		p = nullptr;
	}
}

int MinStack::top() {
	return pTop->val;
}

int MinStack::getMin() {
	return pTop->min;
}

