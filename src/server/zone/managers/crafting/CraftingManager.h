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
 *	server/zone/managers/crafting/CraftingManager.h generated by Engine3 IDL compiler 0.51
 */

#ifndef CRAFTINGMANAGER_H_
#define CRAFTINGMANAGER_H_

#include "engine/orb/ObjectRequestBroker.h"

class Player;

class DraftSchematic;

class ResourceContainer;

class CraftingTool;

class CraftingStation;

class CraftingManager : public ORBObjectStub {
protected:
	CraftingManager();
	CraftingManager(ORBObjectServant* obj);
	CraftingManager(CraftingManager& ref);

	virtual ~CraftingManager();

public:
	CraftingManager* clone();

	void prepareCraftingSession(Player* player, CraftingTool* ct, DraftSchematic* ds);

	void addResourceToCraft(Player* player, ResourceContainer* rcno, int slot, int counter);

	void removeResourceFromCraft(Player* player, unsigned int resID, int slot, int counter);

	void nextCraftingStage(Player* player, string& test);

	void craftingCustomization(Player* player, string& name, int condition);

	void createPrototype(Player* player, string& test);

	void addDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName);

	void subtractDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName);

	friend class CraftingManagerHelper;
};

class CraftingManagerImplementation;

class CraftingManagerAdapter : public ORBObjectAdapter {
public:
	CraftingManagerAdapter(CraftingManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, ORBMethodInvocation* inv);

	void prepareCraftingSession(Player* player, CraftingTool* ct, DraftSchematic* ds);

	void addResourceToCraft(Player* player, ResourceContainer* rcno, int slot, int counter);

	void removeResourceFromCraft(Player* player, unsigned int resID, int slot, int counter);

	void nextCraftingStage(Player* player, string& test);

	void craftingCustomization(Player* player, string& name, int condition);

	void createPrototype(Player* player, string& test);

	void addDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName);

	void subtractDraftSchematicsFromGroupName(Player* player, const string& schematicGroupName);

protected:
	string _param1_nextCraftingStage__Player_string_;
	string _param1_craftingCustomization__Player_string_int_;
	string _param1_createPrototype__Player_string_;
	string _param1_addDraftSchematicsFromGroupName__Player_string_;
	string _param1_subtractDraftSchematicsFromGroupName__Player_string_;
};

class CraftingManagerHelper : public ORBClassHelper, public Singleton<CraftingManagerHelper> {
public:
	CraftingManagerHelper();

	void finalizeHelper();

	ORBObject* instantiateObject();

	ORBObjectAdapter* createAdapter(ORBObjectServant* obj);

	friend class SingletonWrapper<CraftingManagerHelper>;
};

class CraftingManagerServant : public ORBObjectServant {
public:
	CraftingManager* _this;

public:
	CraftingManagerServant();
	virtual ~CraftingManagerServant();

	void _setStub(ORBObjectStub* stub);
	ORBObjectStub* _getStub();

};

#endif /*CRAFTINGMANAGER_H_*/
