/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Feb 16, 2020
 *      Author: Griffin Tritaik
 *
 *      implements FIFO scheduling algorithm
 *      not pre-emptive
 */


#include "../includes/scheduler_FIFO.h"

//override base class behaviour if necessary, otherwise call it
bool  Scheduler_FIFO::time_to_switch_processes(int tick_count, PCB &p){
	return Scheduler::time_to_switch_processes(tick_count, p);
}

//SRTF-preemptive - sort ready_q by remaining_cpu_time whenever add(PCB p) or time_to_switch_processes is called
void Scheduler_FIFO::sort(){
}

