/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ModelPersistence_if.h
 * Author: cancian
 *
 * Created on 24 de Agosto de 2018, 19:22
 */

#ifndef MODELPERSISTENCE_IF_H
#define MODELPERSISTENCE_IF_H

#include <string>

/*!
 * First and inadequate interface for persistence. It should use the best pattern for the DAO approach
 */
class ModelPersistence_if {
public:
	// not a good interface
	virtual bool saveAsTXT(std::string filename) = 0;
	virtual bool loadAsTXT(std::string filename) = 0;
	virtual bool saveAsXML(std::string filename) = 0;
	virtual bool loadAsXML(std::string filename) = 0;
	virtual bool save(std::string filename) = 0;
	virtual bool load(std::string filename) = 0;
private:

};

#endif /* MODELPERSISTENCE_IF_H */

