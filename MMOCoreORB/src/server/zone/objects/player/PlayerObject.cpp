/*
 *	server/zone/objects/player/PlayerObject.cpp generated by engine3 IDL compiler 0.55
 */

#include "PlayerObject.h"

#include "PlayerObjectImplementation.h"

#include "../../Zone.h"

#include "../scene/SceneObject.h"

#include "Player.h"

#include "FriendsList.h"

#include "IgnoreList.h"

#include "../waypoint/WaypointObject.h"

#include "../../managers/player/PlayerManager.h"

/*
 *	PlayerObjectStub
 */

PlayerObject::PlayerObject(Player* player) : SceneObject(DummyConstructorParameter::instance()) {
	_impl = new PlayerObjectImplementation(player);
	_impl->_setStub(this);
}

PlayerObject::PlayerObject(DummyConstructorParameter* param) : SceneObject(param) {
}

PlayerObject::~PlayerObject() {
}

void PlayerObject::sendToOwner() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->sendToOwner();
}

void PlayerObject::sendTo(Player* player, bool doClose) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);
		method.addBooleanParameter(doClose);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->sendTo(player, doClose);
}

void PlayerObject::addExperience(const String& xpType, int xp, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(xpType);
		method.addSignedIntParameter(xp);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->addExperience(xpType, xp, updateClient);
}

void PlayerObject::removeExperience(const String& xpType, int xp, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(xpType);
		method.addSignedIntParameter(xp);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->removeExperience(xpType, xp, updateClient);
}

void PlayerObject::loadExperience(const String& xpStr) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addAsciiParameter(xpStr);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->loadExperience(xpStr);
}

String& PlayerObject::saveExperience() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithAsciiReturn(_return_saveExperience);
		return _return_saveExperience;
	} else
		return ((PlayerObjectImplementation*) _impl)->saveExperience();
}

bool PlayerObject::setCharacterBit(unsigned int bit, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addUnsignedIntParameter(bit);
		method.addBooleanParameter(updateClient);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->setCharacterBit(bit, updateClient);
}

bool PlayerObject::clearCharacterBit(unsigned int bit, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addUnsignedIntParameter(bit);
		method.addBooleanParameter(updateClient);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->clearCharacterBit(bit, updateClient);
}

void PlayerObject::setForcePowerBar(unsigned int fp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addUnsignedIntParameter(fp);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->setForcePowerBar(fp);
}

void PlayerObject::updateMaxForcePowerBar(bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->updateMaxForcePowerBar(updateClient);
}

void PlayerObject::setForcePower(unsigned int fp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addUnsignedIntParameter(fp);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->setForcePower(fp);
}

unsigned int PlayerObject::getForcePower() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getForcePower();
}

unsigned int PlayerObject::getForcePowerMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getForcePowerMax();
}

unsigned int PlayerObject::getForceRegen() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getForceRegen();
}

bool PlayerObject::isJedi() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->isJedi();
}

bool PlayerObject::isOnFullForce() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->isOnFullForce();
}

unsigned int PlayerObject::getCharacterBitmask() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getCharacterBitmask();
}

int PlayerObject::getWaypointListSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getWaypointListSize();
}

int PlayerObject::getDrinkFilling() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getDrinkFilling();
}

int PlayerObject::getDrinkFillingMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getDrinkFillingMax();
}

int PlayerObject::getFoodFilling() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getFoodFilling();
}

int PlayerObject::getFoodFillingMax() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getFoodFillingMax();
}

void PlayerObject::setDrinkFilling(int filling, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addSignedIntParameter(filling);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->setDrinkFilling(filling, updateClient);
}

void PlayerObject::setDrinkFillingMax(int filling) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addSignedIntParameter(filling);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->setDrinkFillingMax(filling);
}

void PlayerObject::setFoodFilling(int filling, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addSignedIntParameter(filling);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->setFoodFilling(filling, updateClient);
}

void PlayerObject::setFoodFillingMax(int filling) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addSignedIntParameter(filling);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->setFoodFillingMax(filling);
}

void PlayerObject::changeDrinkFilling(int filling, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);
		method.addSignedIntParameter(filling);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->changeDrinkFilling(filling, updateClient);
}

void PlayerObject::changeFoodFilling(int filling, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);
		method.addSignedIntParameter(filling);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->changeFoodFilling(filling, updateClient);
}

bool PlayerObject::isDigesting() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->isDigesting();
}

void PlayerObject::setAdminLevel(unsigned int level, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);
		method.addUnsignedIntParameter(level);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->setAdminLevel(level, updateClient);
}

unsigned int PlayerObject::getAdminLevel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getAdminLevel();
}

unsigned int PlayerObject::getJediState() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getJediState();
}

WaypointObject* PlayerObject::getWaypoint(unsigned long long id) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);
		method.addUnsignedLongParameter(id);

		return (WaypointObject*) method.executeWithObjectReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getWaypoint(id);
}

void PlayerObject::addWaypoint(WaypointObject* wp, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);
		method.addObjectParameter(wp);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->addWaypoint(wp, updateClient);
}

bool PlayerObject::removeWaypoint(WaypointObject* wp, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);
		method.addObjectParameter(wp);
		method.addBooleanParameter(updateClient);

		return method.executeWithBooleanReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->removeWaypoint(wp, updateClient);
}

void PlayerObject::updateWaypoint(WaypointObject* wp) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);
		method.addObjectParameter(wp);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->updateWaypoint(wp);
}

Player* PlayerObject::getPlayer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getPlayer();
}

void PlayerObject::setCurrentTitle(String& nTitle, bool updateClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);
		method.addAsciiParameter(nTitle);
		method.addBooleanParameter(updateClient);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->setCurrentTitle(nTitle, updateClient);
}

void PlayerObject::setTitle(String& temptitle) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);
		method.addAsciiParameter(temptitle);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->setTitle(temptitle);
}

String& PlayerObject::getCurrentTitle() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		method.executeWithAsciiReturn(_return_getCurrentTitle);
		return _return_getCurrentTitle;
	} else
		return ((PlayerObjectImplementation*) _impl)->getCurrentTitle();
}

unsigned int PlayerObject::getExperienceListCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getExperienceListCount();
}

unsigned int PlayerObject::getNewExperienceListCount(int cnt) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);
		method.addSignedIntParameter(cnt);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getNewExperienceListCount(cnt);
}

unsigned int PlayerObject::getWaypointListCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getWaypointListCount();
}

unsigned int PlayerObject::getNewWaypointListCount(int cnt) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);
		method.addSignedIntParameter(cnt);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getNewWaypointListCount(cnt);
}

FriendsList* PlayerObject::getFriendsList() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);

		return (FriendsList*) method.executeWithObjectReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getFriendsList();
}

void PlayerObject::addFriend(String& name, String& inServer) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);
		method.addAsciiParameter(name);
		method.addAsciiParameter(inServer);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->addFriend(name, inServer);
}

void PlayerObject::friendsMagicNumberReset() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->friendsMagicNumberReset();
}

void PlayerObject::removeFriend(String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 53);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->removeFriend(name);
}

void PlayerObject::findFriend(String& name, PlayerManager* playerManager) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 54);
		method.addAsciiParameter(name);
		method.addObjectParameter(playerManager);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->findFriend(name, playerManager);
}

void PlayerObject::saveFriends() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 55);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->saveFriends();
}

void PlayerObject::loadFriends() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 56);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->loadFriends();
}

void PlayerObject::updateAllFriends(PlayerObject* playerObject) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 57);
		method.addObjectParameter(playerObject);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->updateAllFriends(playerObject);
}

void PlayerObject::pokeReverseFriendList(unsigned long long playerID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 58);
		method.addUnsignedLongParameter(playerID);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->pokeReverseFriendList(playerID);
}

void PlayerObject::removeFromReverseFriendList(unsigned long long playID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 59);
		method.addUnsignedLongParameter(playID);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->removeFromReverseFriendList(playID);
}

int PlayerObject::getReverseFriendListSize() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 60);

		return method.executeWithSignedIntReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getReverseFriendListSize();
}

unsigned long long PlayerObject::getReverseFriendListEntry(int i) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 61);
		method.addSignedIntParameter(i);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getReverseFriendListEntry(i);
}

IgnoreList* PlayerObject::getIgnoreList() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 62);

		return (IgnoreList*) method.executeWithObjectReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->getIgnoreList();
}

void PlayerObject::addIgnore(String& name, String& inServer) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 63);
		method.addAsciiParameter(name);
		method.addAsciiParameter(inServer);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->addIgnore(name, inServer);
}

void PlayerObject::ignoreMagicNumberReset() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 64);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->ignoreMagicNumberReset();
}

void PlayerObject::removeIgnore(String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 65);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->removeIgnore(name);
}

void PlayerObject::saveIgnore() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 66);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->saveIgnore();
}

void PlayerObject::loadIgnore() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 67);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->loadIgnore();
}

void PlayerObject::saveWaypoints(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 68);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((PlayerObjectImplementation*) _impl)->saveWaypoints(player);
}

WaypointObject* PlayerObject::searchWaypoint(Player* play, const String& name, int mode) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 69);
		method.addObjectParameter(play);
		method.addAsciiParameter(name);
		method.addSignedIntParameter(mode);

		return (WaypointObject*) method.executeWithObjectReturn();
	} else
		return ((PlayerObjectImplementation*) _impl)->searchWaypoint(play, name, mode);
}

/*
 *	PlayerObjectAdapter
 */

PlayerObjectAdapter::PlayerObjectAdapter(PlayerObjectImplementation* obj) : SceneObjectAdapter(obj) {
}

Packet* PlayerObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		sendToOwner();
		break;
	case 7:
		sendTo((Player*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 8:
		addExperience(inv->getAsciiParameter(_param0_addExperience__String_int_bool_), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 9:
		removeExperience(inv->getAsciiParameter(_param0_removeExperience__String_int_bool_), inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 10:
		loadExperience(inv->getAsciiParameter(_param0_loadExperience__String_));
		break;
	case 11:
		resp->insertAscii(saveExperience());
		break;
	case 12:
		resp->insertBoolean(setCharacterBit(inv->getUnsignedIntParameter(), inv->getBooleanParameter()));
		break;
	case 13:
		resp->insertBoolean(clearCharacterBit(inv->getUnsignedIntParameter(), inv->getBooleanParameter()));
		break;
	case 14:
		setForcePowerBar(inv->getUnsignedIntParameter());
		break;
	case 15:
		updateMaxForcePowerBar(inv->getBooleanParameter());
		break;
	case 16:
		setForcePower(inv->getUnsignedIntParameter());
		break;
	case 17:
		resp->insertInt(getForcePower());
		break;
	case 18:
		resp->insertInt(getForcePowerMax());
		break;
	case 19:
		resp->insertInt(getForceRegen());
		break;
	case 20:
		resp->insertBoolean(isJedi());
		break;
	case 21:
		resp->insertBoolean(isOnFullForce());
		break;
	case 22:
		resp->insertInt(getCharacterBitmask());
		break;
	case 23:
		resp->insertSignedInt(getWaypointListSize());
		break;
	case 24:
		resp->insertSignedInt(getDrinkFilling());
		break;
	case 25:
		resp->insertSignedInt(getDrinkFillingMax());
		break;
	case 26:
		resp->insertSignedInt(getFoodFilling());
		break;
	case 27:
		resp->insertSignedInt(getFoodFillingMax());
		break;
	case 28:
		setDrinkFilling(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 29:
		setDrinkFillingMax(inv->getSignedIntParameter());
		break;
	case 30:
		setFoodFilling(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 31:
		setFoodFillingMax(inv->getSignedIntParameter());
		break;
	case 32:
		changeDrinkFilling(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 33:
		changeFoodFilling(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 34:
		resp->insertBoolean(isDigesting());
		break;
	case 35:
		setAdminLevel(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 36:
		resp->insertInt(getAdminLevel());
		break;
	case 37:
		resp->insertInt(getJediState());
		break;
	case 38:
		resp->insertLong(getWaypoint(inv->getUnsignedLongParameter())->_getObjectID());
		break;
	case 39:
		addWaypoint((WaypointObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 40:
		resp->insertBoolean(removeWaypoint((WaypointObject*) inv->getObjectParameter(), inv->getBooleanParameter()));
		break;
	case 41:
		updateWaypoint((WaypointObject*) inv->getObjectParameter());
		break;
	case 42:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	case 43:
		setCurrentTitle(inv->getAsciiParameter(_param0_setCurrentTitle__String_bool_), inv->getBooleanParameter());
		break;
	case 44:
		setTitle(inv->getAsciiParameter(_param0_setTitle__String_));
		break;
	case 45:
		resp->insertAscii(getCurrentTitle());
		break;
	case 46:
		resp->insertInt(getExperienceListCount());
		break;
	case 47:
		resp->insertInt(getNewExperienceListCount(inv->getSignedIntParameter()));
		break;
	case 48:
		resp->insertInt(getWaypointListCount());
		break;
	case 49:
		resp->insertInt(getNewWaypointListCount(inv->getSignedIntParameter()));
		break;
	case 50:
		resp->insertLong(getFriendsList()->_getObjectID());
		break;
	case 51:
		addFriend(inv->getAsciiParameter(_param0_addFriend__String_String_), inv->getAsciiParameter(_param1_addFriend__String_String_));
		break;
	case 52:
		friendsMagicNumberReset();
		break;
	case 53:
		removeFriend(inv->getAsciiParameter(_param0_removeFriend__String_));
		break;
	case 54:
		findFriend(inv->getAsciiParameter(_param0_findFriend__String_PlayerManager_), (PlayerManager*) inv->getObjectParameter());
		break;
	case 55:
		saveFriends();
		break;
	case 56:
		loadFriends();
		break;
	case 57:
		updateAllFriends((PlayerObject*) inv->getObjectParameter());
		break;
	case 58:
		pokeReverseFriendList(inv->getUnsignedLongParameter());
		break;
	case 59:
		removeFromReverseFriendList(inv->getUnsignedLongParameter());
		break;
	case 60:
		resp->insertSignedInt(getReverseFriendListSize());
		break;
	case 61:
		resp->insertLong(getReverseFriendListEntry(inv->getSignedIntParameter()));
		break;
	case 62:
		resp->insertLong(getIgnoreList()->_getObjectID());
		break;
	case 63:
		addIgnore(inv->getAsciiParameter(_param0_addIgnore__String_String_), inv->getAsciiParameter(_param1_addIgnore__String_String_));
		break;
	case 64:
		ignoreMagicNumberReset();
		break;
	case 65:
		removeIgnore(inv->getAsciiParameter(_param0_removeIgnore__String_));
		break;
	case 66:
		saveIgnore();
		break;
	case 67:
		loadIgnore();
		break;
	case 68:
		saveWaypoints((Player*) inv->getObjectParameter());
		break;
	case 69:
		resp->insertLong(searchWaypoint((Player*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_searchWaypoint__Player_String_int_), inv->getSignedIntParameter())->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

void PlayerObjectAdapter::sendToOwner() {
	return ((PlayerObjectImplementation*) impl)->sendToOwner();
}

void PlayerObjectAdapter::sendTo(Player* player, bool doClose) {
	return ((PlayerObjectImplementation*) impl)->sendTo(player, doClose);
}

void PlayerObjectAdapter::addExperience(const String& xpType, int xp, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->addExperience(xpType, xp, updateClient);
}

void PlayerObjectAdapter::removeExperience(const String& xpType, int xp, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->removeExperience(xpType, xp, updateClient);
}

void PlayerObjectAdapter::loadExperience(const String& xpStr) {
	return ((PlayerObjectImplementation*) impl)->loadExperience(xpStr);
}

String& PlayerObjectAdapter::saveExperience() {
	return ((PlayerObjectImplementation*) impl)->saveExperience();
}

bool PlayerObjectAdapter::setCharacterBit(unsigned int bit, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->setCharacterBit(bit, updateClient);
}

bool PlayerObjectAdapter::clearCharacterBit(unsigned int bit, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->clearCharacterBit(bit, updateClient);
}

void PlayerObjectAdapter::setForcePowerBar(unsigned int fp) {
	return ((PlayerObjectImplementation*) impl)->setForcePowerBar(fp);
}

void PlayerObjectAdapter::updateMaxForcePowerBar(bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->updateMaxForcePowerBar(updateClient);
}

void PlayerObjectAdapter::setForcePower(unsigned int fp) {
	return ((PlayerObjectImplementation*) impl)->setForcePower(fp);
}

unsigned int PlayerObjectAdapter::getForcePower() {
	return ((PlayerObjectImplementation*) impl)->getForcePower();
}

unsigned int PlayerObjectAdapter::getForcePowerMax() {
	return ((PlayerObjectImplementation*) impl)->getForcePowerMax();
}

unsigned int PlayerObjectAdapter::getForceRegen() {
	return ((PlayerObjectImplementation*) impl)->getForceRegen();
}

bool PlayerObjectAdapter::isJedi() {
	return ((PlayerObjectImplementation*) impl)->isJedi();
}

bool PlayerObjectAdapter::isOnFullForce() {
	return ((PlayerObjectImplementation*) impl)->isOnFullForce();
}

unsigned int PlayerObjectAdapter::getCharacterBitmask() {
	return ((PlayerObjectImplementation*) impl)->getCharacterBitmask();
}

int PlayerObjectAdapter::getWaypointListSize() {
	return ((PlayerObjectImplementation*) impl)->getWaypointListSize();
}

int PlayerObjectAdapter::getDrinkFilling() {
	return ((PlayerObjectImplementation*) impl)->getDrinkFilling();
}

int PlayerObjectAdapter::getDrinkFillingMax() {
	return ((PlayerObjectImplementation*) impl)->getDrinkFillingMax();
}

int PlayerObjectAdapter::getFoodFilling() {
	return ((PlayerObjectImplementation*) impl)->getFoodFilling();
}

int PlayerObjectAdapter::getFoodFillingMax() {
	return ((PlayerObjectImplementation*) impl)->getFoodFillingMax();
}

void PlayerObjectAdapter::setDrinkFilling(int filling, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->setDrinkFilling(filling, updateClient);
}

void PlayerObjectAdapter::setDrinkFillingMax(int filling) {
	return ((PlayerObjectImplementation*) impl)->setDrinkFillingMax(filling);
}

void PlayerObjectAdapter::setFoodFilling(int filling, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->setFoodFilling(filling, updateClient);
}

void PlayerObjectAdapter::setFoodFillingMax(int filling) {
	return ((PlayerObjectImplementation*) impl)->setFoodFillingMax(filling);
}

void PlayerObjectAdapter::changeDrinkFilling(int filling, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->changeDrinkFilling(filling, updateClient);
}

void PlayerObjectAdapter::changeFoodFilling(int filling, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->changeFoodFilling(filling, updateClient);
}

bool PlayerObjectAdapter::isDigesting() {
	return ((PlayerObjectImplementation*) impl)->isDigesting();
}

void PlayerObjectAdapter::setAdminLevel(unsigned int level, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->setAdminLevel(level, updateClient);
}

unsigned int PlayerObjectAdapter::getAdminLevel() {
	return ((PlayerObjectImplementation*) impl)->getAdminLevel();
}

unsigned int PlayerObjectAdapter::getJediState() {
	return ((PlayerObjectImplementation*) impl)->getJediState();
}

WaypointObject* PlayerObjectAdapter::getWaypoint(unsigned long long id) {
	return ((PlayerObjectImplementation*) impl)->getWaypoint(id);
}

void PlayerObjectAdapter::addWaypoint(WaypointObject* wp, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->addWaypoint(wp, updateClient);
}

bool PlayerObjectAdapter::removeWaypoint(WaypointObject* wp, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->removeWaypoint(wp, updateClient);
}

void PlayerObjectAdapter::updateWaypoint(WaypointObject* wp) {
	return ((PlayerObjectImplementation*) impl)->updateWaypoint(wp);
}

Player* PlayerObjectAdapter::getPlayer() {
	return ((PlayerObjectImplementation*) impl)->getPlayer();
}

void PlayerObjectAdapter::setCurrentTitle(String& nTitle, bool updateClient) {
	return ((PlayerObjectImplementation*) impl)->setCurrentTitle(nTitle, updateClient);
}

void PlayerObjectAdapter::setTitle(String& temptitle) {
	return ((PlayerObjectImplementation*) impl)->setTitle(temptitle);
}

String& PlayerObjectAdapter::getCurrentTitle() {
	return ((PlayerObjectImplementation*) impl)->getCurrentTitle();
}

unsigned int PlayerObjectAdapter::getExperienceListCount() {
	return ((PlayerObjectImplementation*) impl)->getExperienceListCount();
}

unsigned int PlayerObjectAdapter::getNewExperienceListCount(int cnt) {
	return ((PlayerObjectImplementation*) impl)->getNewExperienceListCount(cnt);
}

unsigned int PlayerObjectAdapter::getWaypointListCount() {
	return ((PlayerObjectImplementation*) impl)->getWaypointListCount();
}

unsigned int PlayerObjectAdapter::getNewWaypointListCount(int cnt) {
	return ((PlayerObjectImplementation*) impl)->getNewWaypointListCount(cnt);
}

FriendsList* PlayerObjectAdapter::getFriendsList() {
	return ((PlayerObjectImplementation*) impl)->getFriendsList();
}

void PlayerObjectAdapter::addFriend(String& name, String& inServer) {
	return ((PlayerObjectImplementation*) impl)->addFriend(name, inServer);
}

void PlayerObjectAdapter::friendsMagicNumberReset() {
	return ((PlayerObjectImplementation*) impl)->friendsMagicNumberReset();
}

void PlayerObjectAdapter::removeFriend(String& name) {
	return ((PlayerObjectImplementation*) impl)->removeFriend(name);
}

void PlayerObjectAdapter::findFriend(String& name, PlayerManager* playerManager) {
	return ((PlayerObjectImplementation*) impl)->findFriend(name, playerManager);
}

void PlayerObjectAdapter::saveFriends() {
	return ((PlayerObjectImplementation*) impl)->saveFriends();
}

void PlayerObjectAdapter::loadFriends() {
	return ((PlayerObjectImplementation*) impl)->loadFriends();
}

void PlayerObjectAdapter::updateAllFriends(PlayerObject* playerObject) {
	return ((PlayerObjectImplementation*) impl)->updateAllFriends(playerObject);
}

void PlayerObjectAdapter::pokeReverseFriendList(unsigned long long playerID) {
	return ((PlayerObjectImplementation*) impl)->pokeReverseFriendList(playerID);
}

void PlayerObjectAdapter::removeFromReverseFriendList(unsigned long long playID) {
	return ((PlayerObjectImplementation*) impl)->removeFromReverseFriendList(playID);
}

int PlayerObjectAdapter::getReverseFriendListSize() {
	return ((PlayerObjectImplementation*) impl)->getReverseFriendListSize();
}

unsigned long long PlayerObjectAdapter::getReverseFriendListEntry(int i) {
	return ((PlayerObjectImplementation*) impl)->getReverseFriendListEntry(i);
}

IgnoreList* PlayerObjectAdapter::getIgnoreList() {
	return ((PlayerObjectImplementation*) impl)->getIgnoreList();
}

void PlayerObjectAdapter::addIgnore(String& name, String& inServer) {
	return ((PlayerObjectImplementation*) impl)->addIgnore(name, inServer);
}

void PlayerObjectAdapter::ignoreMagicNumberReset() {
	return ((PlayerObjectImplementation*) impl)->ignoreMagicNumberReset();
}

void PlayerObjectAdapter::removeIgnore(String& name) {
	return ((PlayerObjectImplementation*) impl)->removeIgnore(name);
}

void PlayerObjectAdapter::saveIgnore() {
	return ((PlayerObjectImplementation*) impl)->saveIgnore();
}

void PlayerObjectAdapter::loadIgnore() {
	return ((PlayerObjectImplementation*) impl)->loadIgnore();
}

void PlayerObjectAdapter::saveWaypoints(Player* player) {
	return ((PlayerObjectImplementation*) impl)->saveWaypoints(player);
}

WaypointObject* PlayerObjectAdapter::searchWaypoint(Player* play, const String& name, int mode) {
	return ((PlayerObjectImplementation*) impl)->searchWaypoint(play, name, mode);
}

/*
 *	PlayerObjectHelper
 */

PlayerObjectHelper* PlayerObjectHelper::staticInitializer = PlayerObjectHelper::instance();

PlayerObjectHelper::PlayerObjectHelper() {
	className = "PlayerObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void PlayerObjectHelper::finalizeHelper() {
	PlayerObjectHelper::finalize();
}

DistributedObject* PlayerObjectHelper::instantiateObject() {
	return new PlayerObject(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* PlayerObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new PlayerObjectAdapter((PlayerObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	PlayerObjectServant
 */

PlayerObjectServant::PlayerObjectServant(unsigned long long oid, int type) : SceneObjectImplementation(oid, type) {
	_classHelper = PlayerObjectHelper::instance();
}

PlayerObjectServant::~PlayerObjectServant() {
}

void PlayerObjectServant::_setStub(DistributedObjectStub* stub) {
	_this = (PlayerObject*) stub;
	SceneObjectServant::_setStub(stub);
}

DistributedObjectStub* PlayerObjectServant::_getStub() {
	return _this;
}

