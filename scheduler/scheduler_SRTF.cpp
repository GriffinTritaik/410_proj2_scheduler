/*
 * SchedulerSRTF.cpp
 *
 *  Created on: Feb 16, 2020
 *      Author: Griffin Tritaik
 *
 *      implements shortest remaining time first scheduling algorithm
 *     pre-emptive
 */

#include "../includes/scheduler_SRTF.h"

using namespace std;

//override base class behaviour if necessary, otherwise call it
bool  Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p){
	return Scheduler::time_to_switch_processes(tick_count, p);
}

bool SRFT_PCB_sort(PCB x, PCB y){
	return x.remaining_cpu_time < y.remaining_cpu_time;
}

//SRTF-preemptive - sort ready_q by remaining_cpu_time whenever add(PCB p)
//or time_to_switch_processes is called
void Scheduler_SRTF::sort(){
//	vector<PCB> temp;
//
//	for (int i = 0; i < ready_q->size(); i++){
//		temp.push_back(ready_q->front());
//	}
//
//	sort(temp.begin(), temp.end(), SRFT_PCB_sort);
//
//	for (int i = 0; i < temp.size(); i++){
//		ready_q->push(temp.front());
//		temp.pop();
//	}
}
