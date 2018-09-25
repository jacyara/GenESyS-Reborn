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

CollectorMyImpl1::CollectorMyImpl1() {
	vetor.push_back(40);
	vetor.push_back(20);
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
		printf("\n Soma = %lf \n", soma);
	}
	double variancia = soma/vetor.size();
	double desvio = sqrt(variancia);
	printf("\n Vetor size = %i \n", vetor.size());
	printf("\n Desvio padrão = %lf \n", desvio);
	return desvio;
}