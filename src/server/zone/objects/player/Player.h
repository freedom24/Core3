/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/zone/objects/player/Player.h generated by Engine3 IDL compiler 0.51
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "engine/orb/ObjectRequestBroker.h"

#include "engine/service/proto/BaseMessage.h"

#include "engine/service/proto/StandaloneBaseMessage.h"

class ZoneClient;

class Zone;

class SceneObject;

class CreatureObject;

class TangibleObject;

class PlayerObject;

class Weapon;

class Armor;

class Attachment;

class Powerup;

class Datapad;

class SurveyTool;

class GroupObject;

class Guild;

class WaypointObject;

class ChatRoom;

class SuiBox;

class DraftSchematic;

class CraftingTool;

class ResourceContainer;

#include "../creature/CreatureObject.h"

class Player : public CreatureObject {
protected:
	Player();
	Player(ORBObjectServant* obj);
	Player(Player& ref);

	virtual ~Player();

public:
	Player* clone();

	Player* create(ZoneClient* client);

	void load(ZoneClient* client);

	void reload(ZoneClient* client);

	void unload();

	void disconnect(bool closeClient = true, bool doLock = true);

	void logout(bool doLock = true);

	void userLogout(int msgCounter = 3);

	void clearLogoutEvent();

	void insertToZone(Zone* zone);

	void reinsertToZone(Zone* zone);

	void updateZone(bool lightUpdate = false);

	void updateZoneWithParent(unsigned long long cell, bool lightUpdate = false);

	void switchMap(int planetid);

	void doWarp(float x, float y, float z = 0, float randomizeDistance = 0, unsigned long long parentID = 0);

	void bounceBack();

	void sendTo(Player* player);

	void notifySceneReady();

	void addDatapadItem(SceneObject* item);

	SceneObject* getDatapadItem(unsigned long long oid);

	void removeDatapadItem(unsigned long long oid);

	SceneObject* getPlayerItem(unsigned long long oid);

	void clearQueueAction(unsigned int actioncntr, float timer = 0, unsigned int tab1 = 0, unsigned int tab2 = 0);

	void queueAction(Player* player, unsigned long long target, unsigned int actionCRC, unsigned int actionCntr, string& actionModifier);

	void deleteQueueAction(unsigned int actioncntr);

	void changePosture(int post);

	void doCenterOfBeing();

	void removeCenterOfBeing();

	void doPeace();

	void kill();

	void lootCorpse();

	void addTradeItem(TangibleObject* item);

	void clearTradeItems();

	int getTradeSize();

	TangibleObject* getTradeItem(int idx);

	void setAcceptedTrade(bool val);

	bool hasAcceptedTrade();

	void setVerifiedTrade(bool val);

	bool hasVerifiedTrade();

	void setMoneyToTrade(unsigned int value);

	unsigned int getMoneyToTrade();

	void changeCloth(unsigned long long itemid);

	void changeWeapon(unsigned long long itemid);

	void changeArmor(unsigned long long itemid, bool forced);

	void setWeaponSkillMods(Weapon* weapon);

	void setArmorSkillMods(Armor* armor);

	bool setArmorEncumbrance(Armor* armor, bool forced);

	void applyAttachment(unsigned long long attachmentID, unsigned long long targetID);

	void applyPowerup(unsigned long long powerupID, unsigned long long targetID);

	void createItems();

	void loadItems();

	void createBaseStats();

	void decayInventory();

	void saveProfessions();

	void loadProfessions();

	bool trainSkillBox(const string& name);

	void surrenderSkillBox(const string& name);

	void resetSkillBoxesIterator();

	int getSkillBoxesSize();

	string& getNextSkillBox();

	bool hasNextSkillBox();

	bool hasSkillBox(string& skillBox);

	void addWaypoint(WaypointObject* wp);

	bool removeWaypoint(WaypointObject* wp);

	WaypointObject* getWaypoint(unsigned long long id);

	void updateWaypoint(WaypointObject* wp);

	void addXp(string& xpType, int xp, bool updateClient);

	void removeXp(string& xpType, int xp, bool updateClient);

	void removeFromDuelList(Player* targetPlayer);

	void addToDuelList(Player* targetPlayer);

	bool isInDuelWith(Player* targetPlayer, bool doLock = true);

	Player* getDuelListObject(int index);

	bool requestedDuelTo(Player* targetPlayer);

	bool isDuelListEmpty();

	int getDuelListSize();

	bool setGuild(unsigned int gid);

	void setGuild(Guild* gild);

	bool updateGuild(unsigned int gid);

	void updateGuild(Guild* guild);

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

	void sendSystemMessage(const string& msg);

	void sendSystemMessage(unicode& msg);

	void sendSystemMessage(const string& file, const string& str, unsigned long long targetid = 0);

	void setConversatingCreature(CreatureObject* conversator);

	void setFirstName(const string& name);

	void setBiography(const string& bio);

	void setBiography(unicode& bio);

	void setHairData(string& hair);

	bool changeForceBar(int fp);

	void setCharacterID(unsigned long long id);

	void setStartingProfession(const string& prof);

	void setHairObject(const string& hair);

	void setPlayerObject(PlayerObject* obj);

	void setOnline();

	void clearDisconnectEvent();

	void setClient(ZoneClient* client);

	void setOvert();

	void setCovert();

	void newChangeFactionEvent(unsigned int faction);

	void setRaceFileName(string& name);

	void setStartingLocation(string& loc);

	void setFactionRank(string& fac);

	void setItemShift(unsigned int shift);

	void toggleCharacterBit(unsigned int bit);

	bool awardBadge(unsigned int badgeindex);

	void setLinkDead();

	void setLoggingIn();

	void setAdminLevel(int level);

	void setLastTestPositionX(float pos);

	void setLastTestPositionY(float pos);

	void setTradeRequestedPlayer(unsigned long long ID);

	unsigned long long getTradeRequestedPlayer();

	void launchFirework();

	void sendMessage(BaseMessage* msg);

	void sendMessage(StandaloneBaseMessage* msg);

	bool isJedi();

	bool hasSuiBox(unsigned int boxID);

	void removeSuiBox(unsigned int boxID);

	SuiBox* getSuiBox(unsigned int boxID);

	void addSuiBox(SuiBox* sui);

	unsigned int getNewSuiBoxID(unsigned int type);

	bool isOnline();

	bool isOffline();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	PlayerObject* getPlayerObject();

	CreatureObject* getConversatingCreature();

	string& getFirstName();

	string& getRaceFileName();

	unicode& getBiography();

	string& getHairData();

	unsigned long long getCharacterID();

	string& getStartingProfession();

	int getZoneIndex();

	string& getHairObject();

	ZoneClient* getClient();

	GroupObject* getGroupObject();

	string& getFactionRank();

	unsigned int getRebelPoints();

	unsigned int getImperialPoints();

	int getPvpRating();

	void getPlayersNearYou();

	int getRegionID();

	int getCertificationListSize();

	string& getCertification(int idx);

	bool checkCertification(string& certification);

	int getSlicingAbility();

	CraftingTool* getCurrentCraftingTool();

	void setCurrentCraftingTool(CraftingTool* ct);

	void clearCurrentCraftingTool();

	void prepareCraftingSession(CraftingTool* ct, DraftSchematic* ds);

	void addResourceToCraft(ResourceContainer* rnco, int slot, int counter);

	void removeResourceFromCraft(unsigned long long resID, int slot, int counter);

	void nextCraftingStage(string& test);

	void craftingCustomization(string& name, int condition);

	void createPrototype(string& test);

	void sendDraftSchematics();

	void addDraftSchematicsFromGroupName(const string& schematicGroupName);

	void subtractDraftSchematicsFromGroupName(const string& schematicGroupName);

	void addDraftSchematic(DraftSchematic* ds);

	void subtractDraftSchematic(DraftSchematic* ds);

	unsigned int getDraftSchematicListSize();

	unsigned int getDraftSchematicUpdateCount(unsigned int count);

	DraftSchematic* getDraftSchematic(unsigned int schematicID);

	DraftSchematic* getDraftSchematic(int index);

	bool isChangingFaction();

	Datapad* getDatapad();

	unsigned long long getNewItemID();

	unsigned int getItemShift();

	float getLastTestPositionX();

	float getLastTestPositionY();

	unsigned int getForcePower();

	SurveyTool* getSurveyTool();

	void setSurveyTool(SurveyTool* sTool);

	void setSurveyWaypoint(WaypointObject* id);

	WaypointObject* getSurveyWaypoint();

	bool getCanSurvey();

	bool getCanSample();

	void setCanSurvey();

	void setCanSample();

	void setSurveyEvent(string& resourcename);

	void setSampleEvent(string& resourcename, bool firstTime = false);

	void setCancelSample(bool val);

	bool getCancelSample();

	void sendSampleTimeRemaining();

	void setSurveyErrorMessage();

	void setSampleErrorMessage();

	bool getSurveyErrorMessage();

	bool getSampleErrorMessage();

	void setEntertainerEvent();

protected:
	string _return_getCertification;

	string _return_getFactionRank;

	string _return_getFirstName;

	string _return_getHairData;

	string _return_getHairObject;

	string _return_getNextSkillBox;

	string _return_getRaceFileName;

	string _return_getStartingProfession;

	unicode _return_getBiography;


	friend class PlayerHelper;
};

class PlayerImplementation;

class PlayerAdapter : public CreatureObjectAdapter {
public:
	PlayerAdapter(PlayerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, ORBMethodInvocation* inv);

	Player* create(ZoneClient* client);

	void load(ZoneClient* client);

	void reload(ZoneClient* client);

	void unload();

	void disconnect(bool closeClient, bool doLock);

	void logout(bool doLock);

	void userLogout(int msgCounter);

	void clearLogoutEvent();

	void insertToZone(Zone* zone);

	void reinsertToZone(Zone* zone);

	void updateZone(bool lightUpdate);

	void updateZoneWithParent(unsigned long long cell, bool lightUpdate);

	void switchMap(int planetid);

	void doWarp(float x, float y, float z, float randomizeDistance, unsigned long long parentID);

	void bounceBack();

	void sendTo(Player* player);

	void notifySceneReady();

	void addDatapadItem(SceneObject* item);

	SceneObject* getDatapadItem(unsigned long long oid);

	void removeDatapadItem(unsigned long long oid);

	SceneObject* getPlayerItem(unsigned long long oid);

	void clearQueueAction(unsigned int actioncntr, float timer, unsigned int tab1, unsigned int tab2);

	void queueAction(Player* player, unsigned long long target, unsigned int actionCRC, unsigned int actionCntr, string& actionModifier);

	void deleteQueueAction(unsigned int actioncntr);

	void changePosture(int post);

	void doCenterOfBeing();

	void removeCenterOfBeing();

	void doPeace();

	void kill();

	void lootCorpse();

	void addTradeItem(TangibleObject* item);

	void clearTradeItems();

	int getTradeSize();

	TangibleObject* getTradeItem(int idx);

	void setAcceptedTrade(bool val);

	bool hasAcceptedTrade();

	void setVerifiedTrade(bool val);

	bool hasVerifiedTrade();

	void setMoneyToTrade(unsigned int value);

	unsigned int getMoneyToTrade();

	void changeCloth(unsigned long long itemid);

	void changeWeapon(unsigned long long itemid);

	void changeArmor(unsigned long long itemid, bool forced);

	void setWeaponSkillMods(Weapon* weapon);

	void setArmorSkillMods(Armor* armor);

	bool setArmorEncumbrance(Armor* armor, bool forced);

	void applyAttachment(unsigned long long attachmentID, unsigned long long targetID);

	void applyPowerup(unsigned long long powerupID, unsigned long long targetID);

	void createItems();

	void loadItems();

	void createBaseStats();

	void decayInventory();

	void saveProfessions();

	void loadProfessions();

	bool trainSkillBox(const string& name);

	void surrenderSkillBox(const string& name);

	void resetSkillBoxesIterator();

	int getSkillBoxesSize();

	string& getNextSkillBox();

	bool hasNextSkillBox();

	bool hasSkillBox(string& skillBox);

	void addWaypoint(WaypointObject* wp);

	bool removeWaypoint(WaypointObject* wp);

	WaypointObject* getWaypoint(unsigned long long id);

	void updateWaypoint(WaypointObject* wp);

	void addXp(string& xpType, int xp, bool updateClient);

	void removeXp(string& xpType, int xp, bool updateClient);

	void removeFromDuelList(Player* targetPlayer);

	void addToDuelList(Player* targetPlayer);

	bool isInDuelWith(Player* targetPlayer, bool doLock);

	Player* getDuelListObject(int index);

	bool requestedDuelTo(Player* targetPlayer);

	bool isDuelListEmpty();

	int getDuelListSize();

	bool setGuild(unsigned int gid);

	void setGuild(Guild* gild);

	bool updateGuild(unsigned int gid);

	void updateGuild(Guild* guild);

	void addChatRoom(ChatRoom* room);

	void removeChatRoom(ChatRoom* room);

	void sendSystemMessage(const string& msg);

	void sendSystemMessage(unicode& msg);

	void sendSystemMessage(const string& file, const string& str, unsigned long long targetid);

	void setConversatingCreature(CreatureObject* conversator);

	void setFirstName(const string& name);

	void setBiography(const string& bio);

	void setBiography(unicode& bio);

	void setHairData(string& hair);

	bool changeForceBar(int fp);

	void setCharacterID(unsigned long long id);

	void setStartingProfession(const string& prof);

	void setHairObject(const string& hair);

	void setPlayerObject(PlayerObject* obj);

	void setOnline();

	void clearDisconnectEvent();

	void setClient(ZoneClient* client);

	void setOvert();

	void setCovert();

	void newChangeFactionEvent(unsigned int faction);

	void setRaceFileName(string& name);

	void setStartingLocation(string& loc);

	void setFactionRank(string& fac);

	void setItemShift(unsigned int shift);

	void toggleCharacterBit(unsigned int bit);

	bool awardBadge(unsigned int badgeindex);

	void setLinkDead();

	void setLoggingIn();

	void setAdminLevel(int level);

	void setLastTestPositionX(float pos);

	void setLastTestPositionY(float pos);

	void setTradeRequestedPlayer(unsigned long long ID);

	unsigned long long getTradeRequestedPlayer();

	void launchFirework();

	void sendMessage(BaseMessage* msg);

	void sendMessage(StandaloneBaseMessage* msg);

	bool isJedi();

	bool hasSuiBox(unsigned int boxID);

	void removeSuiBox(unsigned int boxID);

	SuiBox* getSuiBox(unsigned int boxID);

	void addSuiBox(SuiBox* sui);

	unsigned int getNewSuiBoxID(unsigned int type);

	bool isOnline();

	bool isOffline();

	bool isLinkDead();

	bool isLoggingIn();

	bool isLoggingOut();

	PlayerObject* getPlayerObject();

	CreatureObject* getConversatingCreature();

	string& getFirstName();

	string& getRaceFileName();

	unicode& getBiography();

	string& getHairData();

	unsigned long long getCharacterID();

	string& getStartingProfession();

	int getZoneIndex();

	string& getHairObject();

	ZoneClient* getClient();

	GroupObject* getGroupObject();

	string& getFactionRank();

	unsigned int getRebelPoints();

	unsigned int getImperialPoints();

	int getPvpRating();

	void getPlayersNearYou();

	int getRegionID();

	int getCertificationListSize();

	string& getCertification(int idx);

	bool checkCertification(string& certification);

	int getSlicingAbility();

	CraftingTool* getCurrentCraftingTool();

	void setCurrentCraftingTool(CraftingTool* ct);

	void clearCurrentCraftingTool();

	void prepareCraftingSession(CraftingTool* ct, DraftSchematic* ds);

	void addResourceToCraft(ResourceContainer* rnco, int slot, int counter);

	void removeResourceFromCraft(unsigned long long resID, int slot, int counter);

	void nextCraftingStage(string& test);

	void craftingCustomization(string& name, int condition);

	void createPrototype(string& test);

	void sendDraftSchematics();

	void addDraftSchematicsFromGroupName(const string& schematicGroupName);

	void subtractDraftSchematicsFromGroupName(const string& schematicGroupName);

	void addDraftSchematic(DraftSchematic* ds);

	void subtractDraftSchematic(DraftSchematic* ds);

	unsigned int getDraftSchematicListSize();

	unsigned int getDraftSchematicUpdateCount(unsigned int count);

	DraftSchematic* getDraftSchematic(unsigned int schematicID);

	DraftSchematic* getDraftSchematic(int index);

	bool isChangingFaction();

	Datapad* getDatapad();

	unsigned long long getNewItemID();

	unsigned int getItemShift();

	float getLastTestPositionX();

	float getLastTestPositionY();

	unsigned int getForcePower();

	SurveyTool* getSurveyTool();

	void setSurveyTool(SurveyTool* sTool);

	void setSurveyWaypoint(WaypointObject* id);

	WaypointObject* getSurveyWaypoint();

	bool getCanSurvey();

	bool getCanSample();

	void setCanSurvey();

	void setCanSample();

	void setSurveyEvent(string& resourcename);

	void setSampleEvent(string& resourcename, bool firstTime);

	void setCancelSample(bool val);

	bool getCancelSample();

	void sendSampleTimeRemaining();

	void setSurveyErrorMessage();

	void setSampleErrorMessage();

	bool getSurveyErrorMessage();

	bool getSampleErrorMessage();

	void setEntertainerEvent();

protected:
	string _param4_queueAction__Player_long_int_int_string_;
	string _param0_trainSkillBox__string_;
	string _param0_surrenderSkillBox__string_;
	string _param0_hasSkillBox__string_;
	string _param0_addXp__string_int_bool_;
	string _param0_removeXp__string_int_bool_;
	string _param0_sendSystemMessage__string_;
	unicode _param0_sendSystemMessage__unicode_;
	string _param0_sendSystemMessage__string_string_long_;
	string _param1_sendSystemMessage__string_string_long_;
	string _param0_setFirstName__string_;
	string _param0_setBiography__string_;
	unicode _param0_setBiography__unicode_;
	string _param0_setHairData__string_;
	string _param0_setStartingProfession__string_;
	string _param0_setHairObject__string_;
	string _param0_setRaceFileName__string_;
	string _param0_setStartingLocation__string_;
	string _param0_setFactionRank__string_;
	string _param0_checkCertification__string_;
	string _param0_nextCraftingStage__string_;
	string _param0_craftingCustomization__string_int_;
	string _param0_createPrototype__string_;
	string _param0_addDraftSchematicsFromGroupName__string_;
	string _param0_subtractDraftSchematicsFromGroupName__string_;
	string _param0_setSurveyEvent__string_;
	string _param0_setSampleEvent__string_bool_;
};

class PlayerHelper : public ORBClassHelper, public Singleton<PlayerHelper> {
public:
	PlayerHelper();

	void finalizeHelper();

	ORBObject* instantiateObject();

	ORBObjectAdapter* createAdapter(ORBObjectServant* obj);

	friend class SingletonWrapper<PlayerHelper>;
};

#include "../creature/CreatureObjectImplementation.h"

class PlayerServant : public CreatureObjectImplementation {
public:
	Player* _this;

public:
	PlayerServant(unsigned long long oid);
	virtual ~PlayerServant();

	void _setStub(ORBObjectStub* stub);
	ORBObjectStub* _getStub();

};

#endif /*PLAYER_H_*/
