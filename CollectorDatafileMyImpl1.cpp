/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollectorDatafileMyImpl1.cpp
 * Author: cancian
 * 
 * Created on 30 de Agosto de 2018, 16:53
 */

#include "CollectorDatafileMyImpl1.h"

std::vector<double> data;
std::string fileName;

CollectorDatafileMyImpl1::CollectorDatafileMyImpl1() {}

CollectorDatafileMyImpl1::CollectorDatafileMyImpl1(std::string nameFile) {
    std::ifstream infile(nameFile);
    std::string line;
    while (std::getline(infile, line)) {
        data.push_back(std::stod(line));
    }
    for(int i = 0; i < data.size(); i++) {
        std::cout << data[i] << std::endl;
    }
}

CollectorDatafileMyImpl1::CollectorDatafileMyImpl1(const CollectorDatafileMyImpl1& orig) {
}

CollectorDatafileMyImpl1::~CollectorDatafileMyImpl1() {
}

void CollectorDatafileMyImpl1::clear() {
    data.clear();
}

void CollectorDatafileMyImpl1::addValue(double value) {
    data.push_back(value);
}

double CollectorDatafileMyImpl1::getLastValue() {
    return data.back();
}

unsigned int CollectorDatafileMyImpl1::numElements() {
    return data.size();
}

double CollectorDatafileMyImpl1::getValue(unsigned int num) {
    return data.at(num);
}

std::string CollectorDatafileMyImpl1::getDataFilename() {
    return fileName;
}

void CollectorDatafileMyImpl1::setDataFilename(std::string filename) {
    
}
