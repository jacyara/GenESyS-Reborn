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

std::vector<double> vetor;

CollectorMyImpl1::CollectorMyImpl1(std::string fileName) {
	CollectorDatafileMyImpl1 coletor =  CollectorDatafileMyImpl1(fileName);
	vetor = coletor.getVector();
	_lastValue = coletor.getLastValue();
	_numElements = coletor.numElements();
}
CollectorMyImpl1::CollectorMyImpl1() {
}

CollectorMyImpl1::CollectorMyImpl1(const CollectorMyImpl1& orig) {
	memcpy(this, &orig, sizeof(CollectorMyImpl1));
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

double CollectorMyImpl1::minValue()  {
	double min = _lastValue;
	double first = vetor[0];
    for(int i = 0; i<_numElements; ++i){
        if(vetor[i] < min)
        	min = vetor[i];
    }
	printf("\n Menor valor: %lf \n", min);
    return min;
}

double CollectorMyImpl1::maxValue()  {
	double max = _lastValue;
	double first = vetor[0];
    for(int i = 0; i<_numElements; ++i){
        if(vetor[i] > max)
        	max = vetor[i];
    }
	printf("\n Maior valor: %lf \n", max);
    return max;
}

double CollectorMyImpl1::media() {
	int i;
	double soma;
	double mediaFinal;
	for(i = 0; i < vetor.size(); i++ ) {
		soma = soma + vetor[i];
	}
	mediaFinal = soma/vetor.size();
	printf("\n Media do conjunto = %lf \n", mediaFinal);
	return mediaFinal;
}

double CollectorMyImpl1::desvioPadrao() {
	int i;
	double soma;
	double somaMedia;
	double media;
	for(i = 0; i < vetor.size(); i++ ) {
		somaMedia = somaMedia + vetor[i];
	}
	media = somaMedia/vetor.size();
	for(i = 0; i < vetor.size(); i++ ) {
		soma = soma + ((vetor[i] - media)*(vetor[i] - media));
	}
	double variancia = soma/vetor.size();
	double desvio = sqrt(variancia);
	printf("\n Número de elementos = %i \n", _numElements);
	printf("\n Desvio padrão = %lf \n", desvio);
	return desvio;
}