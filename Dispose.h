/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Dispose.h
 * Author: cancian
 *
 * Created on 21 de Junho de 2018, 20:13
 */

#ifndef DISPOSE_H
#define DISPOSE_H

#include "SinkModelComponent.h"

class Dispose: public SinkModelComponent {
public:
	Dispose(Model* model);
	Dispose(const Dispose& orig);
	virtual ~Dispose();
public:
	virtual std::string show();
public:	
    void setCollectStatistics(bool _collectStatistics);
    bool isCollectStatistics() const;
protected:
	virtual void _execute(Entity* entity);
	virtual void _loadInstance(std::list<std::string> words);
	virtual std::list<std::string>* _saveInstance();
	virtual bool _verifySymbols(std::string* errorMessage);
private:
	bool _collectStatistics = true;
};

#endif /* DISPOSE_H */

