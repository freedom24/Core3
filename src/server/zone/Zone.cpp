/*
 *	server/zone/Zone.cpp generated by engine3 IDL compiler 0.60
 */

#include "Zone.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/managers/structure/StructureManager.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/managers/planet/PlanetManager.h"

#include "server/zone/managers/city/CityManager.h"

#include "server/zone/managers/creature/CreatureManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/objects/building/cloning/CloningBuildingObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	ZoneStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_FINALIZE__,RPC_GETNEARESTCLONINGBUILDING__CREATUREOBJECT_,RPC_GETNEARESTPLANETARYOBJECT__SCENEOBJECT_INT_,RPC_INITIALIZEPRIVATEDATA__,RPC_UPDATEACTIVEAREAS__SCENEOBJECT_,RPC_STARTMANAGERS__,RPC_STOPMANAGERS__,RPC_GETHEIGHT__FLOAT_FLOAT_,RPC_ADDSCENEOBJECT__SCENEOBJECT_,RPC_SENDMAPLOCATIONSTO__SCENEOBJECT_,RPC_DROPSCENEOBJECT__SCENEOBJECT_,RPC_GETPLANETMANAGER__,RPC_GETCITYMANAGER__,RPC_GETZONESERVER__,RPC_GETCREATUREMANAGER__,RPC_GETGALACTICTIME__,RPC_HASMANAGERSSTARTED__,RPC_GETMINX__,RPC_GETMAXX__,RPC_GETMINY__,RPC_GETMAXY__,RPC_GETTERRAINNAME__};

Zone::Zone(ZoneProcessServer* processor, const String& zoneName) : ManagedObject(DummyConstructorParameter::instance()) {
	ZoneImplementation* _implementation = new ZoneImplementation(processor, zoneName);
	_impl = _implementation;
	_impl->_setStub(this);
}

Zone::Zone(DummyConstructorParameter* param) : ManagedObject(param) {
}

Zone::~Zone() {
}


void Zone::initializeTransientMembers() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

CloningBuildingObject* Zone::getNearestCloningBuilding(CreatureObject* creature) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETNEARESTCLONINGBUILDING__CREATUREOBJECT_);
		method.addObjectParameter(creature);

		return (CloningBuildingObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getNearestCloningBuilding(creature);
}

SceneObject* Zone::getNearestPlanetaryObject(SceneObject* object, unsigned int mapObjectLocationType) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETNEARESTPLANETARYOBJECT__SCENEOBJECT_INT_);
		method.addObjectParameter(object);
		method.addUnsignedIntParameter(mapObjectLocationType);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getNearestPlanetaryObject(object, mapObjectLocationType);
}

void Zone::initializePrivateData() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZEPRIVATEDATA__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializePrivateData();
}

QuadTree* Zone::getRegionTree() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getRegionTree();
}

int Zone::getInRangeObjects(float x, float y, float range, SortedVector<ManagedReference<SceneObject* > >* objects) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getInRangeObjects(x, y, range, objects);
}

int Zone::getInRangeActiveAreas(float x, float y, float range, SortedVector<ManagedReference<ActiveArea* > >* objects) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getInRangeActiveAreas(x, y, range, objects);
}

SortedVector<ManagedReference<SceneObject* > > Zone::getPlanetaryObjectList(unsigned int mapObjectLocationType) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPlanetaryObjectList(mapObjectLocationType);
}

void Zone::insert(QuadTreeEntry* entry) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->insert(entry);
}

void Zone::remove(QuadTreeEntry* entry) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->remove(entry);
}

void Zone::update(QuadTreeEntry* entry) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->update(entry);
}

void Zone::inRange(QuadTreeEntry* entry, float range) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->inRange(entry, range);
}

void Zone::updateActiveAreas(SceneObject* object) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_UPDATEACTIVEAREAS__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->updateActiveAreas(object);
}

void Zone::startManagers() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STARTMANAGERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->startManagers();
}

void Zone::stopManagers() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_STOPMANAGERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->stopManagers();
}

float Zone::getHeight(float x, float y) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETHEIGHT__FLOAT_FLOAT_);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getHeight(x, y);
}

void Zone::addSceneObject(SceneObject* object) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ADDSCENEOBJECT__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->addSceneObject(object);
}

void Zone::sendMapLocationsTo(SceneObject* player) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDMAPLOCATIONSTO__SCENEOBJECT_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendMapLocationsTo(player);
}

void Zone::dropSceneObject(SceneObject* object) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DROPSCENEOBJECT__SCENEOBJECT_);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->dropSceneObject(object);
}

PlanetManager* Zone::getPlanetManager() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPLANETMANAGER__);

		return (PlanetManager*) method.executeWithObjectReturn();
	} else
		return _implementation->getPlanetManager();
}

CityManager* Zone::getCityManager() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCITYMANAGER__);

		return (CityManager*) method.executeWithObjectReturn();
	} else
		return _implementation->getCityManager();
}

ZoneServer* Zone::getZoneServer() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETZONESERVER__);

		return (ZoneServer*) method.executeWithObjectReturn();
	} else
		return _implementation->getZoneServer();
}

CreatureManager* Zone::getCreatureManager() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETCREATUREMANAGER__);

		return (CreatureManager*) method.executeWithObjectReturn();
	} else
		return _implementation->getCreatureManager();
}

unsigned long long Zone::getGalacticTime() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETGALACTICTIME__);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getGalacticTime();
}

bool Zone::hasManagersStarted() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HASMANAGERSSTARTED__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasManagersStarted();
}

float Zone::getMinX() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMINX__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMinX();
}

float Zone::getMaxX() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMAXX__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMaxX();
}

float Zone::getMinY() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMINY__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMinY();
}

float Zone::getMaxY() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETMAXY__);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMaxY();
}

String Zone::getTerrainName() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETTERRAINNAME__);

		method.executeWithAsciiReturn(_return_getTerrainName);
		return _return_getTerrainName;
	} else
		return _implementation->getTerrainName();
}

DistributedObjectServant* Zone::_getImplementation() {

	_updated = true;
	return _impl;
}

void Zone::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ZoneImplementation
 */

ZoneImplementation::ZoneImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


ZoneImplementation::~ZoneImplementation() {
	ZoneImplementation::finalize();
}


void ZoneImplementation::_initializeImplementation() {
	_setClassHelper(ZoneHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void ZoneImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (Zone*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneImplementation::_getStub() {
	return _this;
}

ZoneImplementation::operator const Zone*() {
	return _this;
}

void ZoneImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ZoneImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ZoneImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ZoneImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ZoneImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ZoneImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ZoneImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ZoneImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("Zone");

}

void ZoneImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ZoneImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ZoneImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "terrainName") {
		TypeInfo<String >::parseFromBinaryStream(&terrainName, stream);
		return true;
	}

	if (_name == "objectMap") {
		TypeInfo<ObjectMap >::parseFromBinaryStream(&objectMap, stream);
		return true;
	}

	if (_name == "planetManager") {
		TypeInfo<ManagedReference<PlanetManager* > >::parseFromBinaryStream(&planetManager, stream);
		return true;
	}

	if (_name == "cityManager") {
		TypeInfo<ManagedReference<CityManager* > >::parseFromBinaryStream(&cityManager, stream);
		return true;
	}

	if (_name == "creatureManager") {
		TypeInfo<ManagedReference<CreatureManager* > >::parseFromBinaryStream(&creatureManager, stream);
		return true;
	}

	if (_name == "server") {
		TypeInfo<ManagedWeakReference<ZoneServer* > >::parseFromBinaryStream(&server, stream);
		return true;
	}

	if (_name == "galacticTime") {
		TypeInfo<Time >::parseFromBinaryStream(&galacticTime, stream);
		return true;
	}

	if (_name == "managersStarted") {
		TypeInfo<bool >::parseFromBinaryStream(&managersStarted, stream);
		return true;
	}


	return false;
}

void ZoneImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ZoneImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ZoneImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "terrainName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&terrainName, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "objectMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ObjectMap >::toBinaryStream(&objectMap, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "planetManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<PlanetManager* > >::toBinaryStream(&planetManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "cityManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<CityManager* > >::toBinaryStream(&cityManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "creatureManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<CreatureManager* > >::toBinaryStream(&creatureManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "server";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<ZoneServer* > >::toBinaryStream(&server, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "galacticTime";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Time >::toBinaryStream(&galacticTime, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "managersStarted";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&managersStarted, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 8 + ManagedObjectImplementation::writeObjectMembers(stream);
}

QuadTree* ZoneImplementation::getRegionTree() {
	// server/zone/Zone.idl():  		return regionTree;
	return regionTree;
}

PlanetManager* ZoneImplementation::getPlanetManager() {
	// server/zone/Zone.idl():  		return planetManager;
	return planetManager;
}

CityManager* ZoneImplementation::getCityManager() {
	// server/zone/Zone.idl():  		return cityManager;
	return cityManager;
}

ZoneServer* ZoneImplementation::getZoneServer() {
	// server/zone/Zone.idl():  		return server;
	return server;
}

CreatureManager* ZoneImplementation::getCreatureManager() {
	// server/zone/Zone.idl():  		return creatureManager;
	return creatureManager;
}

unsigned long long ZoneImplementation::getGalacticTime() {
	// server/zone/Zone.idl():  		return galacticTime.miliDifference() / 1000;
	return (&galacticTime)->miliDifference() / 1000;
}

bool ZoneImplementation::hasManagersStarted() {
	// server/zone/Zone.idl():  		return managersStarted;
	return managersStarted;
}

String ZoneImplementation::getTerrainName() {
	// server/zone/Zone.idl():  		return terrainName;
	return terrainName;
}

/*
 *	ZoneAdapter
 */

ZoneAdapter::ZoneAdapter(ZoneImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ZoneAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_GETNEARESTCLONINGBUILDING__CREATUREOBJECT_:
		resp->insertLong(getNearestCloningBuilding((CreatureObject*) inv->getObjectParameter())->_getObjectID());
		break;
	case RPC_GETNEARESTPLANETARYOBJECT__SCENEOBJECT_INT_:
		resp->insertLong(getNearestPlanetaryObject((SceneObject*) inv->getObjectParameter(), inv->getUnsignedIntParameter())->_getObjectID());
		break;
	case RPC_INITIALIZEPRIVATEDATA__:
		initializePrivateData();
		break;
	case RPC_UPDATEACTIVEAREAS__SCENEOBJECT_:
		updateActiveAreas((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_STARTMANAGERS__:
		startManagers();
		break;
	case RPC_STOPMANAGERS__:
		stopManagers();
		break;
	case RPC_GETHEIGHT__FLOAT_FLOAT_:
		resp->insertFloat(getHeight(inv->getFloatParameter(), inv->getFloatParameter()));
		break;
	case RPC_ADDSCENEOBJECT__SCENEOBJECT_:
		addSceneObject((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_SENDMAPLOCATIONSTO__SCENEOBJECT_:
		sendMapLocationsTo((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_DROPSCENEOBJECT__SCENEOBJECT_:
		dropSceneObject((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_GETPLANETMANAGER__:
		resp->insertLong(getPlanetManager()->_getObjectID());
		break;
	case RPC_GETCITYMANAGER__:
		resp->insertLong(getCityManager()->_getObjectID());
		break;
	case RPC_GETZONESERVER__:
		resp->insertLong(getZoneServer()->_getObjectID());
		break;
	case RPC_GETCREATUREMANAGER__:
		resp->insertLong(getCreatureManager()->_getObjectID());
		break;
	case RPC_GETGALACTICTIME__:
		resp->insertLong(getGalacticTime());
		break;
	case RPC_HASMANAGERSSTARTED__:
		resp->insertBoolean(hasManagersStarted());
		break;
	case RPC_GETMINX__:
		resp->insertFloat(getMinX());
		break;
	case RPC_GETMAXX__:
		resp->insertFloat(getMaxX());
		break;
	case RPC_GETMINY__:
		resp->insertFloat(getMinY());
		break;
	case RPC_GETMAXY__:
		resp->insertFloat(getMaxY());
		break;
	case RPC_GETTERRAINNAME__:
		resp->insertAscii(getTerrainName());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneAdapter::initializeTransientMembers() {
	((ZoneImplementation*) impl)->initializeTransientMembers();
}

void ZoneAdapter::finalize() {
	((ZoneImplementation*) impl)->finalize();
}

CloningBuildingObject* ZoneAdapter::getNearestCloningBuilding(CreatureObject* creature) {
	return ((ZoneImplementation*) impl)->getNearestCloningBuilding(creature);
}

SceneObject* ZoneAdapter::getNearestPlanetaryObject(SceneObject* object, unsigned int mapObjectLocationType) {
	return ((ZoneImplementation*) impl)->getNearestPlanetaryObject(object, mapObjectLocationType);
}

void ZoneAdapter::initializePrivateData() {
	((ZoneImplementation*) impl)->initializePrivateData();
}

void ZoneAdapter::updateActiveAreas(SceneObject* object) {
	((ZoneImplementation*) impl)->updateActiveAreas(object);
}

void ZoneAdapter::startManagers() {
	((ZoneImplementation*) impl)->startManagers();
}

void ZoneAdapter::stopManagers() {
	((ZoneImplementation*) impl)->stopManagers();
}

float ZoneAdapter::getHeight(float x, float y) {
	return ((ZoneImplementation*) impl)->getHeight(x, y);
}

void ZoneAdapter::addSceneObject(SceneObject* object) {
	((ZoneImplementation*) impl)->addSceneObject(object);
}

void ZoneAdapter::sendMapLocationsTo(SceneObject* player) {
	((ZoneImplementation*) impl)->sendMapLocationsTo(player);
}

void ZoneAdapter::dropSceneObject(SceneObject* object) {
	((ZoneImplementation*) impl)->dropSceneObject(object);
}

PlanetManager* ZoneAdapter::getPlanetManager() {
	return ((ZoneImplementation*) impl)->getPlanetManager();
}

CityManager* ZoneAdapter::getCityManager() {
	return ((ZoneImplementation*) impl)->getCityManager();
}

ZoneServer* ZoneAdapter::getZoneServer() {
	return ((ZoneImplementation*) impl)->getZoneServer();
}

CreatureManager* ZoneAdapter::getCreatureManager() {
	return ((ZoneImplementation*) impl)->getCreatureManager();
}

unsigned long long ZoneAdapter::getGalacticTime() {
	return ((ZoneImplementation*) impl)->getGalacticTime();
}

bool ZoneAdapter::hasManagersStarted() {
	return ((ZoneImplementation*) impl)->hasManagersStarted();
}

float ZoneAdapter::getMinX() {
	return ((ZoneImplementation*) impl)->getMinX();
}

float ZoneAdapter::getMaxX() {
	return ((ZoneImplementation*) impl)->getMaxX();
}

float ZoneAdapter::getMinY() {
	return ((ZoneImplementation*) impl)->getMinY();
}

float ZoneAdapter::getMaxY() {
	return ((ZoneImplementation*) impl)->getMaxY();
}

String ZoneAdapter::getTerrainName() {
	return ((ZoneImplementation*) impl)->getTerrainName();
}

/*
 *	ZoneHelper
 */

ZoneHelper* ZoneHelper::staticInitializer = ZoneHelper::instance();

ZoneHelper::ZoneHelper() {
	className = "Zone";

	Core::getObjectBroker()->registerClass(className, this);
}

void ZoneHelper::finalizeHelper() {
	ZoneHelper::finalize();
}

DistributedObject* ZoneHelper::instantiateObject() {
	return new Zone(DummyConstructorParameter::instance());
}

DistributedObjectServant* ZoneHelper::instantiateServant() {
	return new ZoneImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneAdapter((ZoneImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

