spiderclan_elder = Creature:new {
	objectName = "@mob/creature_names:spider_nightsister_elder",
	socialGroup = "spider_nightsister",
	pvpFaction = "spider_nightsister",
	faction = "spider_nightsister",
	level = 277,
	chanceHit = 272.5,
	damageMin = 1520,
	damageMax = 2750,
	baseXp = 26555,
	baseHAM = 321000,
	baseHAMmax = 392000,
	armor = 3,
	resists = {80,100,85,80,100,100,90,100,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER + HEALER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_dathomir_spider_nightsister_elder.iff"},
	lootGroups = {
		{
			groups = {
				{group = "junk", chance = 1500000},
				{group = "crystals_premium", chance = 500000},
				{group = "color_crystals", chance = 500000},
				{group = "armor_attachments", chance = 600000},
				{group = "clothing_attachments", chance = 600000},
				{group = "melee_weapons", chance = 3000000},
				{group = "pistols", chance = 1100000},
				{group = "rifles", chance = 1100000},
				{group = "carbines", chance = 1100000},
			},
			lootChance = 6500000
		}			
	},
	weapons = {"mixed_force_weapons"},
	conversationTemplate = "",
	attacks = merge(brawlermaster,pikemanmaster,forcewielder)
}

CreatureTemplates:addCreatureTemplate(spiderclan_elder, "spiderclan_elder")
