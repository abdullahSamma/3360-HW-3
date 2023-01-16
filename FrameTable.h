#include "Page.h"
#include <math.h>

class Frame {
    private:
        int addressSpace;
        Frame* prev;
        Frame* next;
    public: 
        Frame(int add, Frame* prevFrame, Frame* nextFrame) {
            addressSpace = add;
            prev = prevFrame;
            next = nextFrame;
        }
        int getAddress() {
            return addressSpace;
        }
        int getPageNum(int pageSize) {
            int m = log2(addressSpace);
            int n = log2(pageSize);
            return m - n;
        }
        Frame getPrev() {
            return *prev;
        }
        Frame getNext() {
            return *next;
        }
};