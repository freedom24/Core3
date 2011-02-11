/*
 *	server/zone/objects/creature/aigroup/HerdGroup.cpp generated by engine3 IDL compiler 0.60
 */

#include "HerdGroup.h"

/*
 *	HerdGroupStub
 */

HerdGroup::HerdGroup() : AiGroup(DummyConstructorParameter::instance()) {
	HerdGroupImplementation* _implementation = new HerdGroupImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

HerdGroup::HerdGroup(DummyConstructorParameter* param) : AiGroup(param) {
}

HerdGroup::~HerdGroup() {
}


bool HerdGroup::isHerdGroup() {
	HerdGroupImplementation* _implementation = (HerdGroupImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isHerdGroup();
}

DistributedObjectServant* HerdGroup::_getImplementation() {

	_updated = true;
	return _impl;
}

void HerdGroup::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	HerdGroupImplementation
 */

HerdGroupImplementation::HerdGroupImplementation(DummyConstructorParameter* param) : AiGroupImplementation(param) {
	_initializeImplementation();
}


HerdGroupImplementation::~HerdGroupImplementation() {
}


void HerdGroupImplementation::finalize() {
}

void HerdGroupImplementation::_initializeImplementation() {
	_setClassHelper(HerdGroupHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void HerdGroupImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (HerdGroup*) stub;
	AiGroupImplementation::_setStub(stub);
}

DistributedObjectStub* HerdGroupImplementation::_getStub() {
	return _this;
}

HerdGroupImplementation::operator const HerdGroup*() {
	return _this;
}

void HerdGroupImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void HerdGroupImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void HerdGroupImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void HerdGroupImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void HerdGroupImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void HerdGroupImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void HerdGroupImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void HerdGroupImplementation::_serializationHelperMethod() {
	AiGroupImplementation::_serializationHelperMethod();

	_setClassName("HerdGroup");

}

void HerdGroupImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(HerdGroupImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool HerdGroupImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (AiGroupImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void HerdGroupImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = HerdGroupImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int HerdGroupImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + AiGroupImplementation::writeObjectMembers(stream);
}

HerdGroupImplementation::HerdGroupImplementation() : AiGroupImplementation() {
	_initializeImplementation();
}

bool HerdGroupImplementation::isHerdGroup() {
	// server/zone/objects/creature/aigroup/HerdGroup.idl(56):  		return true;
	return true;
}

/*
 *	HerdGroupAdapter
 */

HerdGroupAdapter::HerdGroupAdapter(HerdGroupImplementation* obj) : AiGroupAdapter(obj) {
}

Packet* HerdGroupAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertBoolean(isHerdGroup());
		break;
	default:
		return NULL;
	}

	return resp;
}

bool HerdGroupAdapter::isHerdGroup() {
	return ((HerdGroupImplementation*) impl)->isHerdGroup();
}

/*
 *	HerdGroupHelper
 */

HerdGroupHelper* HerdGroupHelper::staticInitializer = HerdGroupHelper::instance();

HerdGroupHelper::HerdGroupHelper() {
	className = "HerdGroup";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void HerdGroupHelper::finalizeHelper() {
	HerdGroupHelper::finalize();
}

DistributedObject* HerdGroupHelper::instantiateObject() {
	return new HerdGroup(DummyConstructorParameter::instance());
}

DistributedObjectServant* HerdGroupHelper::instantiateServant() {
	return new HerdGroupImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* HerdGroupHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new HerdGroupAdapter((HerdGroupImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

