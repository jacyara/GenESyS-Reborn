/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Queue.cpp
 * Author: cancian
 * 
 * Created on 21 de Agosto de 2018, 17:12
 */

#include "Queue.h"

Queue::Queue() : ModelInfrastructure(typeid (this).name()) {
}

Queue::Queue(const Queue& orig) : ModelInfrastructure(orig) {
}

Queue::~Queue() {
}

std::string Queue::show() {
	return ModelInfrastructure::show();
}


