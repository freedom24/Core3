/*
 *	server/zone/managers/planet/PlanetManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLANETMANAGER_H_
#define PLANETMANAGER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneProcessServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace building {

class BuildingObject;

} // namespace building
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::building;

namespace server {
namespace zone {
namespace objects {
namespace scene {
namespace variables {

class StringId;

} // namespace variables
} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene::variables;

namespace server {
namespace zone {
namespace managers {
namespace structure {

class StructureManager;

} // namespace structure
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::structure;

namespace server {
namespace zone {
namespace managers {
namespace weather {

class WeatherManager;

} // namespace weather
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::weather;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController;

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

namespace server {
namespace zone {
namespace objects {
namespace creature {
namespace shuttle {

class ShuttleCreature;

} // namespace shuttle
} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature::shuttle;

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

#include "server/zone/objects/region/Region.h"

#include "server/zone/managers/planet/RegionMap.h"

#include "server/zone/managers/terrain/TerrainManager.h"

#include "server/zone/managers/planet/ShuttleMap.h"

#include "server/zone/managers/planet/NoBuildAreaMap.h"

#include "server/zone/managers/planet/MissionTargetMap.h"

#include "server/zone/managers/planet/HuntingTargetMap.h"

#include "server/zone/managers/planet/HuntingTargetEntry.h"

#include "server/zone/templates/snapshot/WorldSnapshotNode.h"

#include "server/zone/templates/snapshot/WorldSnapshotIff.h"

#include "engine/core/ManagedService.h"

#include "engine/log/Logger.h"

#include "system/thread/Thread.h"

#include "system/util/SortedVector.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManager : public ManagedService {
public:
	PlanetManager(Zone* planet, ZoneProcessServer* srv);

	void initializeTransientMembers();

	void initialize();

	void loadRegions();

	void loadPlayerRegions();

	void loadNoBuildAreas();

	void loadShuttles();

	void loadBadgeAreas();

	void loadPerformanceLocations();

	void loadHuntingTargets();

	void loadReconLocations();

	ShuttleCreature* getShuttle(const String& arrivalPoint);

	void addShuttle(const String& city, ShuttleCreature* shuttle);

	void dropShuttle(const String& city);

	bool isNoBuildArea(float x, float y, StringId& fullAreaName);

	int getTravelFare(const String& destinationPlanet);

	void sendPlanetTravelPointListResponse(PlayerCreature* player);

	Vector<ManagedReference<Region* > > getRegions(StringId& regionName);

	StructureManager* getStructureManager();

	WeatherManager* getWeatherManager();

	TerrainManager* getTerrainManager();

	Region* getRegion(float x, float y);

	int getRegionCount();

	int getNumberOfCities();

	void increaseNumberOfCities();

	Region* getRegion(int index);

	void addRegion(Region* region);

	void dropRegion(Region* region);

	bool hasRegion(const String& name);

	void addPerformanceLocation(SceneObject* obj);

	MissionTargetMap* getPerformanceLocations();

	void addMissionNpc(SceneObject* npc);

	MissionTargetMap* getMissionNpcs();

	void addHuntingTargetTemplate(const String& temp1, const String& temp2, int level);

	HuntingTargetEntry* getHuntingTargetTemplate(int level);

	void addReconLoc(SceneObject* obj);

	MissionTargetMap* getReconLocs();

	void addInformant(SceneObject* obj);

	MissionTargetMap* getInformants();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PlanetManager(DummyConstructorParameter* param);

	virtual ~PlanetManager();

	friend class PlanetManagerHelper;
};

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManagerImplementation : public ManagedServiceImplementation, public Logger {
protected:
	ManagedWeakReference<Zone* > zone;

	RegionMap regionMap;

	VectorMap<String, int> travelFares;

	ManagedReference<StructureManager* > structureManager;

	ManagedReference<WeatherManager* > weatherManager;

	int numberOfCities;

	ManagedReference<ZoneProcessServer* > server;

	TerrainManager* terrainManager;

	ShuttleMap shuttleMap;

	NoBuildAreaMap noBuildAreaMap;

	MissionTargetMap missionNpcs;

	MissionTargetMap performanceLocations;

	HuntingTargetMap huntingTargets;

	MissionTargetMap reconLocs;

	MissionTargetMap informants;

public:
	PlanetManagerImplementation(Zone* planet, ZoneProcessServer* srv);

	PlanetManagerImplementation(DummyConstructorParameter* param);

private:
	void loadSnapshotObject(WorldSnapshotNode* node, WorldSnapshotIff* wsiff, int& totalObjects);

	void loadSnapshotObjects();

	void loadTravelFares();

	void loadLuaConfig();

public:
	void initializeTransientMembers();

	void finalize();

	void initialize();

	void loadRegions();

	void loadPlayerRegions();

	void loadNoBuildAreas();

	void loadShuttles();

	void loadBadgeAreas();

	void loadPerformanceLocations();

	void loadHuntingTargets();

	void loadReconLocations();

protected:
	void loadStaticTangibleObjects();

public:
	ShuttleCreature* getShuttle(const String& arrivalPoint);

	void addShuttle(const String& city, ShuttleCreature* shuttle);

	void dropShuttle(const String& city);

	bool isNoBuildArea(float x, float y, StringId& fullAreaName);

	int getTravelFare(const String& destinationPlanet);

	void sendPlanetTravelPointListResponse(PlayerCreature* player);

	Vector<ManagedReference<Region* > > getRegions(StringId& regionName);

	StructureManager* getStructureManager();

	WeatherManager* getWeatherManager();

	TerrainManager* getTerrainManager();

	Region* getRegion(float x, float y);

	int getRegionCount();

	int getNumberOfCities();

	void increaseNumberOfCities();

	Region* getRegion(int index);

	void addRegion(Region* region);

	void dropRegion(Region* region);

	bool hasRegion(const String& name);

	void addPerformanceLocation(SceneObject* obj);

	MissionTargetMap* getPerformanceLocations();

	void addMissionNpc(SceneObject* npc);

	MissionTargetMap* getMissionNpcs();

	void addHuntingTargetTemplate(const String& temp1, const String& temp2, int level);

	HuntingTargetEntry* getHuntingTargetTemplate(int level);

	void addReconLoc(SceneObject* obj);

	MissionTargetMap* getReconLocs();

	void addInformant(SceneObject* obj);

	MissionTargetMap* getInformants();

	PlanetManager* _this;

	operator const PlanetManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PlanetManagerImplementation();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class PlanetManager;
};

class PlanetManagerAdapter : public ManagedServiceAdapter {
public:
	PlanetManagerAdapter(PlanetManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	void finalize();

	void initialize();

	void loadRegions();

	void loadPlayerRegions();

	void loadNoBuildAreas();

	void loadShuttles();

	void loadBadgeAreas();

	void loadPerformanceLocations();

	void loadHuntingTargets();

	void loadReconLocations();

	ShuttleCreature* getShuttle(const String& arrivalPoint);

	void addShuttle(const String& city, ShuttleCreature* shuttle);

	void dropShuttle(const String& city);

	int getTravelFare(const String& destinationPlanet);

	void sendPlanetTravelPointListResponse(PlayerCreature* player);

	StructureManager* getStructureManager();

	WeatherManager* getWeatherManager();

	Region* getRegion(float x, float y);

	int getRegionCount();

	int getNumberOfCities();

	void increaseNumberOfCities();

	Region* getRegion(int index);

	void addRegion(Region* region);

	void dropRegion(Region* region);

	bool hasRegion(const String& name);

	void addPerformanceLocation(SceneObject* obj);

	void addMissionNpc(SceneObject* npc);

	void addHuntingTargetTemplate(const String& temp1, const String& temp2, int level);

	void addReconLoc(SceneObject* obj);

	void addInformant(SceneObject* obj);

protected:
	String _param0_getShuttle__String_;
	String _param0_addShuttle__String_ShuttleCreature_;
	String _param0_dropShuttle__String_;
	String _param0_getTravelFare__String_;
	String _param0_hasRegion__String_;
	String _param0_addHuntingTargetTemplate__String_String_int_;
	String _param1_addHuntingTargetTemplate__String_String_int_;
};

class PlanetManagerHelper : public DistributedObjectClassHelper, public Singleton<PlanetManagerHelper> {
	static PlanetManagerHelper* staticInitializer;

public:
	PlanetManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlanetManagerHelper>;
};

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

#endif /*PLANETMANAGER_H_*/
