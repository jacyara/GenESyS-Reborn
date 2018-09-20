/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Entity.h
 * Author: cancian
 *
 * Created on 21 de Junho de 2018, 16:30
 */

#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <map>

#include "Util.h"
#include "ModelInfrastructure.h"
#include "AttributeValue.h"

class Entity: public ModelInfrastructure {
public:
	Entity();
	Entity(const Entity& orig);
	virtual ~Entity();
public:
	virtual std::string show();

public: // g & s
    std::map<std::string, AttributeValue*>* getAttributeValues() const;
    void setEntityTypeName(std::string _entityTypeName); // indirect access to EntityType
    std::string getEntityTypeName() const;
	
protected: 
	virtual void _loadInstance(std::list<std::string> words);
	virtual std::list<std::string>* _saveInstance();
	virtual bool _verifySymbols(std::string* errorMessage);
	
private:
	//EntityType* _entityType;
	std::string _entityTypeName = "Entity Type 1";
private: // 1::n
	std::map<std::string, AttributeValue*>* _attributeValues;
};

#endif /* ENTITY_H */

