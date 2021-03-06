#ifndef CF_MAMMALS_H_
#define CF_MAMMALS_H_
#include "Animal.h"
#include "Fence.h"


class Mammals :public Animal {
public:
	Mammals(vector<Abstract*>* abs_list, int size, int max_age);

	~Mammals() {}

	void go_into_fence(Fence* fence);

	void go_out_of_fence(Fence* fence);

	void run();

	virtual void produce_milk() = 0;

	virtual void farrow() = 0;

	virtual void do_morning() = 0;

	virtual void do_noon() = 0;

	virtual void do_afternoon() = 0;

	virtual void do_night() = 0;
};
#endif 

