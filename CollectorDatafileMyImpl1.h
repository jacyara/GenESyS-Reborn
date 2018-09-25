/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollectorDatafileMyImpl1.h
 * Author: cancian
 *
 * Created on 30 de Agosto de 2018, 16:53
 */

#ifndef COLLECTORDATAFILEMYIMPL1_H
#define COLLECTORDATAFILEMYIMPL1_H

#include "CollectorDatafile_if.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class CollectorDatafileMyImpl1 : public CollectorDatafile_if {
public:
	CollectorDatafileMyImpl1();
	CollectorDatafileMyImpl1(std::string fileName);
	CollectorDatafileMyImpl1(const CollectorDatafileMyImpl1& orig);
	~CollectorDatafileMyImpl1();
public:
	void clear();
	void addValue(double value);
	double getLastValue();
	unsigned int numElements();
public:
	vector<double> getVector();
	double getValue(unsigned int num);
	std::string getDataFilename();
	void setDataFilename(std::string newFileName);

private:
std::string fileName;

};

#endif /* COLLECTORDATAFILEMYIMPL1_H */

