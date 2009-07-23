/*
 *	server/zone/objects/scene/SceneObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "SceneObject.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "server/zone/ZoneClientSession.h"

#include "server/zone/Zone.h"

/*
 *	SceneObjectStub
 */

SceneObject::SceneObject(LuaObject* templateData) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new SceneObjectImplementation(templateData);
	_impl->_setStub(this);

	((SceneObjectImplementation*) _impl)->_serializationHelperMethod();
}

SceneObject::SceneObject(DummyConstructorParameter* param) : ManagedObject(param) {
}

SceneObject::~SceneObject() {
}

void SceneObject::wlock() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->wlock();
}

void SceneObject::unlock() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->unlock();
}

void SceneObject::redeploy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->redeploy();
}

void SceneObject::scheduleUndeploy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->scheduleUndeploy();
}

void SceneObject::undeploy() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->undeploy();
}

void SceneObject::removeUndeploymentEvent() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->removeUndeploymentEvent();
}

bool SceneObject::isPlayerCreature() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		return method.executeWithBooleanReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->isPlayerCreature();
}

bool SceneObject::addObject(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->addObject(object);
}

bool SceneObject::removeObject(SceneObject* object) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->removeObject(object);
}

void SceneObject::create(ZoneClientSession* client) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(client);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->create(client);
}

void SceneObject::destroy(ZoneClientSession* client) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(client);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->destroy(client);
}

void SceneObject::close(ZoneClientSession* client) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addObjectParameter(client);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->close(client);
}

void SceneObject::link(ZoneClientSession* client, unsigned int containmentType) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addObjectParameter(client);
		method.addUnsignedIntParameter(containmentType);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->link(client, containmentType);
}

void SceneObject::sendTo(SceneObject* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->sendTo(player, doClose);
}

void SceneObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void SceneObject::sendToOwner(bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->sendToOwner(doClose);
}

void SceneObject::insertToZone(Zone* zone) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addObjectParameter(zone);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->insertToZone(zone);
}

void SceneObject::sendMessage(BaseMessage* msg) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(msg);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->sendMessage(msg);
}

unsigned long long SceneObject::getObjectID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getObjectID();
}

float SceneObject::getPositionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getPositionX();
}

float SceneObject::getPositionZ() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getPositionZ();
}

float SceneObject::getPositionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getPositionY();
}

float SceneObject::getDirectionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getDirectionX();
}

float SceneObject::getDirectionZ() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getDirectionZ();
}

float SceneObject::getDirectionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getDirectionY();
}

float SceneObject::getDirectionW() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithFloatReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getDirectionW();
}

unsigned int SceneObject::getObjectCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getObjectCRC();
}

StringId* SceneObject::getObjectName() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((SceneObjectImplementation*) _impl)->getObjectName();
}

int SceneObject::getArrangementDescriptorSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithSignedIntReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getArrangementDescriptorSize();
}

String SceneObject::getArrangementDescriptor(int idx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);
		method.addSignedIntParameter(idx);

		method.executeWithAsciiReturn(_return_getArrangementDescriptor);
		return _return_getArrangementDescriptor;
	} else
		return ((SceneObjectImplementation*) _impl)->getArrangementDescriptor(idx);
}

String SceneObject::getSlotDescriptor(int idx) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addSignedIntParameter(idx);

		method.executeWithAsciiReturn(_return_getSlotDescriptor);
		return _return_getSlotDescriptor;
	} else
		return ((SceneObjectImplementation*) _impl)->getSlotDescriptor(idx);
}

SceneObject* SceneObject::getSlot(String& slot) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);
		method.addAsciiParameter(slot);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getSlot(slot);
}

int SceneObject::getSlotDescriptorSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithSignedIntReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getSlotDescriptorSize();
}

ZoneClientSession* SceneObject::getClient() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return (ZoneClientSession*) method.executeWithObjectReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getClient();
}

unsigned int SceneObject::getGameObjectType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getGameObjectType();
}

Zone* SceneObject::getZone() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return (Zone*) method.executeWithObjectReturn();
	} else
		return ((SceneObjectImplementation*) _impl)->getZone();
}

void SceneObject::setPosition(float x, float z, float y) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addFloatParameter(x);
		method.addFloatParameter(z);
		method.addFloatParameter(y);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setPosition(x, z, y);
}

void SceneObject::setGameObjectType(unsigned int type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);
		method.addUnsignedIntParameter(type);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setGameObjectType(type);
}

void SceneObject::setObjectCRC(unsigned int objCRC) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);
		method.addUnsignedIntParameter(objCRC);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setObjectCRC(objCRC);
}

void SceneObject::setParent(SceneObject* par) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);
		method.addObjectParameter(par);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setParent(par);
}

void SceneObject::setZoneProcessServer(ZoneProcessServerImplementation* srv) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((SceneObjectImplementation*) _impl)->setZoneProcessServer(srv);
}

void SceneObject::setObjectID(unsigned long long objectid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);
		method.addUnsignedLongParameter(objectid);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setObjectID(objectid);
}

void SceneObject::setObjectName(UnicodeString& name) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((SceneObjectImplementation*) _impl)->setObjectName(name);
}

void SceneObject::setZone(Zone* zon) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);
		method.addObjectParameter(zon);

		method.executeWithVoidReturn();
	} else
		((SceneObjectImplementation*) _impl)->setZone(zon);
}

/*
 *	SceneObjectImplementation
 */

SceneObjectImplementation::~SceneObjectImplementation() {
}

void SceneObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SceneObject*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SceneObjectImplementation::_getStub() {
	return _this;
}

SceneObjectImplementation::operator const SceneObject*() {
	return _this;
}

void SceneObjectImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	addSerializableVariable("zone", zone);
	addSerializableVariable("objectID", &objectID);
	addSerializableVariable("parent", parent);
	addSerializableVariable("objectCRC", &objectCRC);
	addSerializableVariable("positionX", &positionX);
	addSerializableVariable("positionZ", &positionZ);
	addSerializableVariable("positionY", &positionY);
	addSerializableVariable("containerType", &containerType);
	addSerializableVariable("containerVolumeLimit", &containerVolumeLimit);
	addSerializableVariable("gameObjectType", &gameObjectType);
}

void SceneObjectImplementation::redeploy() {
}

void SceneObjectImplementation::scheduleUndeploy() {
}

void SceneObjectImplementation::undeploy() {
}

void SceneObjectImplementation::removeUndeploymentEvent() {
}

bool SceneObjectImplementation::isPlayerCreature() {
	// server/zone/objects/scene/SceneObject.idl(308):  return gameObjectType == 409;
	return gameObjectType == 0x409;
}

bool SceneObjectImplementation::addObject(SceneObject* object) {
	// server/zone/objects/scene/SceneObject.idl(312):  object.
	if (containerType == 0x1){
	// server/zone/objects/scene/SceneObject.idl(313):  int arrangementSize = object.getArrangementDescriptorSize();
	int arrangementSize = object->getArrangementDescriptorSize();
	// server/zone/objects/scene/SceneObject.idl(315):  
	for (	// server/zone/objects/scene/SceneObject.idl(315):  for (int i = 0;
	int i = 0x0;
	i < arrangementSize;
 ++i) {
	// server/zone/objects/scene/SceneObject.idl(316):  string childArrangement = object.getArrangementDescriptor(i);
	String childArrangement = object->getArrangementDescriptor(i);
	// server/zone/objects/scene/SceneObject.idl(318):  }
	if (containmentSlots->contains(childArrangement))	// server/zone/objects/scene/SceneObject.idl(319):  return false;
	return false;
}
	// server/zone/objects/scene/SceneObject.idl(322):  
	for (	// server/zone/objects/scene/SceneObject.idl(322):  for (int i = 0;
	int i = 0x0;
	i < arrangementSize;
 ++i) {
	// server/zone/objects/scene/SceneObject.idl(323):  containmentSlots.put(object.getArrangementDescriptor(i), object);
	containmentSlots->put(object->getArrangementDescriptor(i), object);
}
}
	// server/zone/objects/scene/SceneObject.idl(327):  setParent(this);
	object->setParent(_this);
	// server/zone/objects/scene/SceneObject.idl(329):  return true;
	return true;
}

bool SceneObjectImplementation::removeObject(SceneObject* object) {
	// server/zone/objects/scene/SceneObject.idl(333):  object.
	if (containerType == 0x1){
	// server/zone/objects/scene/SceneObject.idl(334):  int arrangementSize = object.getArrangementDescriptorSize();
	int arrangementSize = object->getArrangementDescriptorSize();
	// server/zone/objects/scene/SceneObject.idl(336):  
	for (	// server/zone/objects/scene/SceneObject.idl(336):  for (int i = 0;
	int i = 0x0;
	i < arrangementSize;
 ++i) {
	// server/zone/objects/scene/SceneObject.idl(337):  string childArrangement = object.getArrangementDescriptor(i);
	String childArrangement = object->getArrangementDescriptor(i);
	// server/zone/objects/scene/SceneObject.idl(339):  }
	if (containmentSlots->get(childArrangement) != object)	// server/zone/objects/scene/SceneObject.idl(340):  return false;
	return false;
}
	// server/zone/objects/scene/SceneObject.idl(343):  
	for (	// server/zone/objects/scene/SceneObject.idl(343):  for (int i = 0;
	int i = 0x0;
	i < arrangementSize;
 ++i) {
	// server/zone/objects/scene/SceneObject.idl(344):  containmentSlots.drop(object.getArrangementDescriptor(i));
	containmentSlots->drop(object->getArrangementDescriptor(i));
}
}
	// server/zone/objects/scene/SceneObject.idl(348):  setParent(null);
	object->setParent(NULL);
	// server/zone/objects/scene/SceneObject.idl(350):  return true;
	return true;
}

void SceneObjectImplementation::sendBaselinesTo(SceneObject* player) {
}

void SceneObjectImplementation::sendToOwner(bool doClose) {
}

void SceneObjectImplementation::sendMessage(BaseMessage* msg) {
	// server/zone/objects/scene/SceneObject.idl(371):  }
	if (msg != NULL)	// server/zone/objects/scene/SceneObject.idl(372):  msg.finalize();
	msg->finalize();
}

unsigned long long SceneObjectImplementation::getObjectID() {
	// server/zone/objects/scene/SceneObject.idl(376):  return QuadTreeEntry.objectID;
	return QuadTreeEntry::objectID;
}

float SceneObjectImplementation::getPositionX() {
	// server/zone/objects/scene/SceneObject.idl(380):  return QuadTreeEntry.getPositionX();
	return QuadTreeEntry::getPositionX();
}

float SceneObjectImplementation::getPositionZ() {
	// server/zone/objects/scene/SceneObject.idl(384):  return QuadTreeEntry.getPositionZ();
	return QuadTreeEntry::getPositionZ();
}

float SceneObjectImplementation::getPositionY() {
	// server/zone/objects/scene/SceneObject.idl(388):  return QuadTreeEntry.getPositionY();
	return QuadTreeEntry::getPositionY();
}

float SceneObjectImplementation::getDirectionX() {
	// server/zone/objects/scene/SceneObject.idl(392):  return direction.getX();
	return direction->getX();
}

float SceneObjectImplementation::getDirectionZ() {
	// server/zone/objects/scene/SceneObject.idl(396):  return direction.getZ();
	return direction->getZ();
}

float SceneObjectImplementation::getDirectionY() {
	// server/zone/objects/scene/SceneObject.idl(400):  return direction.getY();
	return direction->getY();
}

float SceneObjectImplementation::getDirectionW() {
	// server/zone/objects/scene/SceneObject.idl(404):  return direction.getW();
	return direction->getW();
}

unsigned int SceneObjectImplementation::getObjectCRC() {
	// server/zone/objects/scene/SceneObject.idl(408):  return objectCRC;
	return objectCRC;
}

StringId* SceneObjectImplementation::getObjectName() {
	// server/zone/objects/scene/SceneObject.idl(412):  return objectName;
	return objectName;
}

int SceneObjectImplementation::getArrangementDescriptorSize() {
	// server/zone/objects/scene/SceneObject.idl(416):  return arrangementDescriptors.size();
	return arrangementDescriptors->size();
}

String SceneObjectImplementation::getArrangementDescriptor(int idx) {
	// server/zone/objects/scene/SceneObject.idl(420):  return arrangementDescriptors.get(idx);
	return arrangementDescriptors->get(idx);
}

String SceneObjectImplementation::getSlotDescriptor(int idx) {
	// server/zone/objects/scene/SceneObject.idl(424):  return slotDescriptors.get(idx);
	return slotDescriptors->get(idx);
}

SceneObject* SceneObjectImplementation::getSlot(String& slot) {
	// server/zone/objects/scene/SceneObject.idl(428):  return containmentSlots.get(slot);
	return containmentSlots->get(slot);
}

int SceneObjectImplementation::getSlotDescriptorSize() {
	// server/zone/objects/scene/SceneObject.idl(432):  return slotDescriptors.size();
	return slotDescriptors->size();
}

ZoneClientSession* SceneObjectImplementation::getClient() {
	// server/zone/objects/scene/SceneObject.idl(436):  return null;
	return NULL;
}

unsigned int SceneObjectImplementation::getGameObjectType() {
	// server/zone/objects/scene/SceneObject.idl(440):  return gameObjectType;
	return gameObjectType;
}

Zone* SceneObjectImplementation::getZone() {
	// server/zone/objects/scene/SceneObject.idl(444):  return zone;
	return zone;
}

void SceneObjectImplementation::setPosition(float x, float z, float y) {
	// server/zone/objects/scene/SceneObject.idl(448):  QuadTreeEntry.setPosition(x, z, y);
	QuadTreeEntry::setPosition(x, z, y);
}

void SceneObjectImplementation::setGameObjectType(unsigned int type) {
	// server/zone/objects/scene/SceneObject.idl(452):  gameObjectType = type;
	gameObjectType = type;
}

void SceneObjectImplementation::setObjectCRC(unsigned int objCRC) {
	// server/zone/objects/scene/SceneObject.idl(456):  objectCRC = objCRC;
	objectCRC = objCRC;
}

void SceneObjectImplementation::setParent(SceneObject* par) {
	// server/zone/objects/scene/SceneObject.idl(460):  parent = par;
	parent = par;
}

void SceneObjectImplementation::setZoneProcessServer(ZoneProcessServerImplementation* srv) {
	// server/zone/objects/scene/SceneObject.idl(464):  server = srv;
	server = srv;
}

void SceneObjectImplementation::setObjectID(unsigned long long objectid) {
	// server/zone/objects/scene/SceneObject.idl(468):  QuadTreeEntry.objectID = objectid;
	QuadTreeEntry::objectID = objectid;
}

void SceneObjectImplementation::setObjectName(UnicodeString& name) {
	// server/zone/objects/scene/SceneObject.idl(472):  objectName.setCustomString(name);
	objectName->setCustomString(name);
}

void SceneObjectImplementation::setZone(Zone* zon) {
	// server/zone/objects/scene/SceneObject.idl(476):  zone = zon;
	zone = zon;
}

/*
 *	SceneObjectAdapter
 */

SceneObjectAdapter::SceneObjectAdapter(SceneObjectImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* SceneObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		wlock();
		break;
	case 7:
		unlock();
		break;
	case 8:
		redeploy();
		break;
	case 9:
		scheduleUndeploy();
		break;
	case 10:
		undeploy();
		break;
	case 11:
		removeUndeploymentEvent();
		break;
	case 12:
		resp->insertBoolean(isPlayerCreature());
		break;
	case 13:
		resp->insertBoolean(addObject((SceneObject*) inv->getObjectParameter()));
		break;
	case 14:
		resp->insertBoolean(removeObject((SceneObject*) inv->getObjectParameter()));
		break;
	case 15:
		create((ZoneClientSession*) inv->getObjectParameter());
		break;
	case 16:
		destroy((ZoneClientSession*) inv->getObjectParameter());
		break;
	case 17:
		close((ZoneClientSession*) inv->getObjectParameter());
		break;
	case 18:
		link((ZoneClientSession*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case 19:
		sendTo((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 20:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 21:
		sendToOwner(inv->getBooleanParameter());
		break;
	case 22:
		insertToZone((Zone*) inv->getObjectParameter());
		break;
	case 23:
		sendMessage((BaseMessage*) inv->getObjectParameter());
		break;
	case 24:
		resp->insertLong(getObjectID());
		break;
	case 25:
		resp->insertFloat(getPositionX());
		break;
	case 26:
		resp->insertFloat(getPositionZ());
		break;
	case 27:
		resp->insertFloat(getPositionY());
		break;
	case 28:
		resp->insertFloat(getDirectionX());
		break;
	case 29:
		resp->insertFloat(getDirectionZ());
		break;
	case 30:
		resp->insertFloat(getDirectionY());
		break;
	case 31:
		resp->insertFloat(getDirectionW());
		break;
	case 32:
		resp->insertInt(getObjectCRC());
		break;
	case 33:
		resp->insertSignedInt(getArrangementDescriptorSize());
		break;
	case 34:
		resp->insertAscii(getArrangementDescriptor(inv->getSignedIntParameter()));
		break;
	case 35:
		resp->insertAscii(getSlotDescriptor(inv->getSignedIntParameter()));
		break;
	case 36:
		resp->insertLong(getSlot(inv->getAsciiParameter(_param0_getSlot__String_))->_getObjectID());
		break;
	case 37:
		resp->insertSignedInt(getSlotDescriptorSize());
		break;
	case 38:
		resp->insertLong(getClient()->_getObjectID());
		break;
	case 39:
		resp->insertInt(getGameObjectType());
		break;
	case 40:
		resp->insertLong(getZone()->_getObjectID());
		break;
	case 41:
		setPosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getFloatParameter());
		break;
	case 42:
		setGameObjectType(inv->getUnsignedIntParameter());
		break;
	case 43:
		setObjectCRC(inv->getUnsignedIntParameter());
		break;
	case 44:
		setParent((SceneObject*) inv->getObjectParameter());
		break;
	case 45:
		setObjectID(inv->getUnsignedLongParameter());
		break;
	case 46:
		setZone((Zone*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void SceneObjectAdapter::wlock() {
	return ((SceneObjectImplementation*) impl)->wlock();
}

void SceneObjectAdapter::unlock() {
	return ((SceneObjectImplementation*) impl)->unlock();
}

void SceneObjectAdapter::redeploy() {
	return ((SceneObjectImplementation*) impl)->redeploy();
}

void SceneObjectAdapter::scheduleUndeploy() {
	return ((SceneObjectImplementation*) impl)->scheduleUndeploy();
}

void SceneObjectAdapter::undeploy() {
	return ((SceneObjectImplementation*) impl)->undeploy();
}

void SceneObjectAdapter::removeUndeploymentEvent() {
	return ((SceneObjectImplementation*) impl)->removeUndeploymentEvent();
}

bool SceneObjectAdapter::isPlayerCreature() {
	return ((SceneObjectImplementation*) impl)->isPlayerCreature();
}

bool SceneObjectAdapter::addObject(SceneObject* object) {
	return ((SceneObjectImplementation*) impl)->addObject(object);
}

bool SceneObjectAdapter::removeObject(SceneObject* object) {
	return ((SceneObjectImplementation*) impl)->removeObject(object);
}

void SceneObjectAdapter::create(ZoneClientSession* client) {
	return ((SceneObjectImplementation*) impl)->create(client);
}

void SceneObjectAdapter::destroy(ZoneClientSession* client) {
	return ((SceneObjectImplementation*) impl)->destroy(client);
}

void SceneObjectAdapter::close(ZoneClientSession* client) {
	return ((SceneObjectImplementation*) impl)->close(client);
}

void SceneObjectAdapter::link(ZoneClientSession* client, unsigned int containmentType) {
	return ((SceneObjectImplementation*) impl)->link(client, containmentType);
}

void SceneObjectAdapter::sendTo(SceneObject* player, bool doClose) {
	return ((SceneObjectImplementation*) impl)->sendTo(player, doClose);
}

void SceneObjectAdapter::sendBaselinesTo(SceneObject* player) {
	return ((SceneObjectImplementation*) impl)->sendBaselinesTo(player);
}

void SceneObjectAdapter::sendToOwner(bool doClose) {
	return ((SceneObjectImplementation*) impl)->sendToOwner(doClose);
}

void SceneObjectAdapter::insertToZone(Zone* zone) {
	return ((SceneObjectImplementation*) impl)->insertToZone(zone);
}

void SceneObjectAdapter::sendMessage(BaseMessage* msg) {
	return ((SceneObjectImplementation*) impl)->sendMessage(msg);
}

unsigned long long SceneObjectAdapter::getObjectID() {
	return ((SceneObjectImplementation*) impl)->getObjectID();
}

float SceneObjectAdapter::getPositionX() {
	return ((SceneObjectImplementation*) impl)->getPositionX();
}

float SceneObjectAdapter::getPositionZ() {
	return ((SceneObjectImplementation*) impl)->getPositionZ();
}

float SceneObjectAdapter::getPositionY() {
	return ((SceneObjectImplementation*) impl)->getPositionY();
}

float SceneObjectAdapter::getDirectionX() {
	return ((SceneObjectImplementation*) impl)->getDirectionX();
}

float SceneObjectAdapter::getDirectionZ() {
	return ((SceneObjectImplementation*) impl)->getDirectionZ();
}

float SceneObjectAdapter::getDirectionY() {
	return ((SceneObjectImplementation*) impl)->getDirectionY();
}

float SceneObjectAdapter::getDirectionW() {
	return ((SceneObjectImplementation*) impl)->getDirectionW();
}

unsigned int SceneObjectAdapter::getObjectCRC() {
	return ((SceneObjectImplementation*) impl)->getObjectCRC();
}

int SceneObjectAdapter::getArrangementDescriptorSize() {
	return ((SceneObjectImplementation*) impl)->getArrangementDescriptorSize();
}

String SceneObjectAdapter::getArrangementDescriptor(int idx) {
	return ((SceneObjectImplementation*) impl)->getArrangementDescriptor(idx);
}

String SceneObjectAdapter::getSlotDescriptor(int idx) {
	return ((SceneObjectImplementation*) impl)->getSlotDescriptor(idx);
}

SceneObject* SceneObjectAdapter::getSlot(String& slot) {
	return ((SceneObjectImplementation*) impl)->getSlot(slot);
}

int SceneObjectAdapter::getSlotDescriptorSize() {
	return ((SceneObjectImplementation*) impl)->getSlotDescriptorSize();
}

ZoneClientSession* SceneObjectAdapter::getClient() {
	return ((SceneObjectImplementation*) impl)->getClient();
}

unsigned int SceneObjectAdapter::getGameObjectType() {
	return ((SceneObjectImplementation*) impl)->getGameObjectType();
}

Zone* SceneObjectAdapter::getZone() {
	return ((SceneObjectImplementation*) impl)->getZone();
}

void SceneObjectAdapter::setPosition(float x, float z, float y) {
	return ((SceneObjectImplementation*) impl)->setPosition(x, z, y);
}

void SceneObjectAdapter::setGameObjectType(unsigned int type) {
	return ((SceneObjectImplementation*) impl)->setGameObjectType(type);
}

void SceneObjectAdapter::setObjectCRC(unsigned int objCRC) {
	return ((SceneObjectImplementation*) impl)->setObjectCRC(objCRC);
}

void SceneObjectAdapter::setParent(SceneObject* par) {
	return ((SceneObjectImplementation*) impl)->setParent(par);
}

void SceneObjectAdapter::setObjectID(unsigned long long objectid) {
	return ((SceneObjectImplementation*) impl)->setObjectID(objectid);
}

void SceneObjectAdapter::setZone(Zone* zon) {
	return ((SceneObjectImplementation*) impl)->setZone(zon);
}

/*
 *	SceneObjectHelper
 */

SceneObjectHelper* SceneObjectHelper::staticInitializer = SceneObjectHelper::instance();

SceneObjectHelper::SceneObjectHelper() {
	className = "SceneObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void SceneObjectHelper::finalizeHelper() {
	SceneObjectHelper::finalize();
}

DistributedObject* SceneObjectHelper::instantiateObject() {
	return new SceneObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SceneObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SceneObjectAdapter((SceneObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

