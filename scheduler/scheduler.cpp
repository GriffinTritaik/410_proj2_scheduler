/*
 * scheduler.cpp
 *
 *  Created on: Feb 16, 2020
 *      Author: Griffin Tritaik
 */

#include "../includes/scheduler.h"

Scheduler::Scheduler(){

}

Scheduler::~Scheduler(){

}

//add a process, either a new one or one that
//had been running on the CPU and has been preempted
void Scheduler::add(PCB p){

}

//get next process
PCB Scheduler::getNext(){

}

//returns true if there are no  jobs in the readyQ
//false otherwise
bool Scheduler::isEmpty(){
	return false;
}

//if process has completed (used all its remaining_cpu_time) or
//if we are using a preemptive scheduling algorithm and the
//timeslice is over then its time to switch processes
//returns:
//true - switch processes
//false - do not switch
bool Scheduler::time_to_switch_processes(int tick_count, PCB &p){
	return false;
}

