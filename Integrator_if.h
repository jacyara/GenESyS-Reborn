/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Integrator_if.h
 * Author: cancian
 *
 * Created on 14 de Agosto de 2018, 13:54
 */

#ifndef INTEGRATOR_IF_H
#define INTEGRATOR_IF_H

class Integrator_if {
public:
	virtual void setPrecision(double e) = 0;
	virtual double getPrecision() = 0;
	virtual double integrate(double min, double max, double (*f)(double, double), double p2) = 0;
	virtual double integrate(double min, double max, double (*f)(double, double, double), double p2, double p3) = 0;
	virtual double integrate(double min, double max, double (*f)(double, double, double, double),  double p2, double p3, double p4) = 0;
	virtual double integrate(double min, double max, double (*f)(double, double, double, double, double), double p2, double p3, double p4, double p5) = 0;
};

#endif /* INTEGRATOR_IF_H */

