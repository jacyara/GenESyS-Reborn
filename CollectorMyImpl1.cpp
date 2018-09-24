/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CollectorMyImpl1.cpp
 * Author: cancian
 * 
 * Created on 14 de Agosto de 2018, 19:43
 */

#include "CollectorMyImpl1.h"

std::vector<double> data;

CollectorMyImpl1::CollectorMyImpl1() {
}

CollectorMyImpl1::CollectorMyImpl1(const CollectorMyImpl1& orig) {
}

CollectorMyImpl1::~CollectorMyImpl1() {
}

void CollectorMyImpl1::clear() {
	_numElements = 0;
}

void CollectorMyImpl1::addValue(double value) {
	_lastValue = value;
	_numElements++;
}

double CollectorMyImpl1::getLastValue() {
	return this->_lastValue;
}

unsigned int CollectorMyImpl1::numElements() {
	return this->_numElements;
}

double CollectorMyImpl1::media() {
	int i;
	double media;
	double mediaFinal;
	for(i = 0; i <= data.size(); i++ ) {
		media = media + data[i];
		mediaFinal = media/data.size();
	}
	return mediaFinal;
}

double CollectorMyImpl1::desvioPadrao() {
	int i;
	double soma;
	double media;
	for(i = 0; i <= data.size(); i++ ) {
		soma = soma + ((data[i] - media)*(data[i] - media));
	}
	double variancia = soma/data.size();
	double desvio = sqrt(variancia);
	return desvio;
}