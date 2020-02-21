/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Feb 16, 2020
 *      Author: Griffin Tritaik
 *
 *      implements round robin scheduling algorithm
 *      pre-emptive
 */

#include "../includes/scheduler_RR.h"

//override base class behaviour if necessary, otherwise call it
bool  Scheduler_RR::time_to_switch_processes(int tick_count, PCB &p){
	return Scheduler::time_to_switch_processes(tick_count, p);
}

//SRTF-preemptive - sort ready_q by remaining_cpu_time whenever add(PCB p)
//or time_to_switch_processes is called
void Scheduler_RR::sort(){

}


