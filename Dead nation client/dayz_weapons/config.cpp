// config.bin - 14:37:27 04/28/13, generated in 0.14 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

#define VSoft		0
#define VArmor		1
#define VAir		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

class CfgPatches {
	class dayz_weapons {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip"};
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference
class Mode_Burst;	// External class reference

class CfgRecoils {
	DZ_Swing[] = {0, 0.06, -0.1, 0, 0.1, -0.12, 0.1, 0, 0};
	DZ_Stab[] = {0.02, -0.5, 0.2, 0.05, -0.5, 0.3, 0.04, 0, -0.1, 0.5, 0, 0};
};

class ItemActions {
	class Use {
		text = "";
		script = "";
		use[] = {};
	};
};

class CfgMovesBasic {
	class ManActions {
		GestureSwing = " ";
	};
	
	class Actions {
		class NoActions : ManActions {
			GestureSwing[] = {"GestureSwing", "Gesture"};
		};
	};
};
class CfgGesturesMale {
	skeletonName = "OFP2_ManSkeleton";
	
	class ManActions {};
	
	class Actions {
		class NoActions {
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	
	class Default {
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5, 1};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 1;
		showWeaponAim = 1;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};
	
	class States {
		class GestureSwing : Default {
			file = "\dayz_weapons\anim\melee_hatchet_swing.rtm";
			looped = 0;
			speed = 1.28205;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;
		};
	};
	
	class BlendAnims {
		handsWeapon[] = {"head", 1, "neck1", 1, "neck", 1, "weapon", 1, "LeftShoulder", 1, "LeftArm", 1, "LeftArmRoll", 1, "LeftForeArm", 1, "LeftForeArmRoll", 1, "LeftHand", 1, "LeftHandRing", 1, "LeftHandPinky1", 1, "LeftHandPinky2", 1, "LeftHandPinky3", 1, "LeftHandRing1", 1, "LeftHandRing2", 1, "LeftHandRing3", 1, "LeftHandMiddle1", 1, "LeftHandMiddle2", 1, "LeftHandMiddle3", 1, "LeftHandIndex1", 1, "LeftHandIndex2", 1, "LeftHandIndex3", 1, "LeftHandThumb1", 1, "LeftHandThumb2", 1, "LeftHandThumb3", 1, "RightShoulder", 1, "RightArm", 1, "RightArmRoll", 1, "RightForeArm", 1, "RightForeArmRoll", 1, "RightHand", 1, "RightHandRing", 1, "RightHandPinky1", 1, "RightHandPinky2", 1, "RightHandPinky3", 1, "RightHandRing1", 1, "RightHandRing2", 1, "RightHandRing3", 1, "RightHandMiddle1", 1, "RightHandMiddle2", 1, "RightHandMiddle3", 1, "RightHandIndex1", 1, "RightHandIndex2", 1, "RightHandIndex3", 1, "RightHandThumb1", 1, "RightHandThumb2", 1, "RightHandThumb3", 1, "Spine", 0.2, "Spine1", 0.3, "Spine2", 1, "Spine3", 1};
	};
};

class DZ_SingleMelee : Mode_SemiAuto {
	multiplier = 1;
	burst = 5;
	displayName = "Hack";
	dispersion = 0.2;
	sound[] = {"", 0, 1};
	soundContinuous = 1;
	reloadTime = 1;
	magazineReloadTime = 1;
	ffCount = 1;
	optics = "false";
	recoil = "empty";
	autoFire = "true";
	CraterEffects = "NoCrater";
	explosionEffects = "NoExplosion";
	aiRateOfFire = 0.7;
	aiRateOfFireDistance = 2.2;
	useAction = 1;
	useActionTitle = "GestureSwing";
	recoilProne = "empty";
	showToPlayer = "true";
	minRange = 0;
	minRangeProbab = 0.8;
	midRange = 0.3;
	midRangeProbab = 0.8;
	maxRange = 3;
	maxRangeProbab = 0;
	soundBurst = 1;
};

class cfgWeapons {
class Rifle;	// External class reference
class WeaponSlotsInfo;	// External class reference
class MeleeWeapon : Rifle {
		scope = 2;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		canDrop = 0;
		optics = 1;
		modelOptics = "-";
		modes[] = {"Single"};
		fireLightDuration = 0;
		fireLightIntensity = 0;
		reloadMagazineSound[] = {"", 1};
		
		class Single : DZ_SingleMelee {
			multiplier = 1;
			burst = 1;
			displayName = "Hack";
			dispersion = 0.0002;
			optics = 1;
			recoil = "DZ_Swing";
			autoFire = 1;
			CraterEffects = "NoCrater";
			explosionEffects = "NoExplosion";
			aiRateOfFire = 0.7;
			aiRateOfFireDistance = 2.2;
			useAction = 0;
			useActionTitle = "";
			recoilProne = "DZ_Swing";
			swing0[] = {"dayz_weapons\sounds\swing_0", 1.77828, 1, 30};
            swing1[] = {"dayz_weapons\sounds\swing_1", 1.77828, 1, 30};
			soundBegin[] = {"swing0", 0.5, "swing1", 0.5};
			drySound[] = {"", 1};
			reloadTime = 0;
			reloadMagazineSound[] = {"", 1};
			showToPlayer = 1;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 0.3;
			midRangeProbab = 0.8;
			maxRange = 3;
			maxRangeProbab = 0;
		};
		cursor = "EmptyCursor";
		cursorAim = "throw";
		cursorSize = 1;
		weaponInfoType = "RscWeaponEmpty";
		cameraDir = "look";
	};
	
	class MeleeHatchet : MeleeWeapon {
		autoreload = 1;
		scope = 2;
		weaponReloadtime = 0.75;
		model = "\dayz_weapons\models\Hatchet_weaponized.p3d";
		picture = "\dayz_equip\textures\equip_hatchet_CA.paa";
		displayName = "Hatchet";
		descriptionUse = "Hatchet";
		magazines[] = {"Hatchet_Swing"};
		handAnim[] = {"OFP2_ManSkeleton", "\dayz_weapons\anim\melee_hatchet_holding.rtm"};
		descriptionShort = $STR_EQUIP_DESC_41;
		
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 45;
		};
	};
	class MeleeCrowbar : MeleeHatchet {
		scope = public;
		model = "\dayz_weapons\models\crowbar_weaponized";
		picture = "\dayz_weapons\textures\equip_crowbar_CA.paa";
		displayName = "Crowbar";
		magazines[] = {"Crowbar_Swing"};
		
		class ItemActions {
			class Drop {
				text = "Drop Crowbar";
				script = "spawn player_dropWeapon;";
				use[] = {"Crowbar_Swing"};
			};
		};
		
		class Library {
			libTextDesc = "A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
		};
		descriptionShort = "A tool consisting of a metal bar with a single curved end and flattened points, often with a small fissure on one or both ends for removing nails.";
	};
	
	class Winchester1866 : Rifle {
		scope = public;
		model = "\dayz_weapons\models\Winchester1866";
		picture = "\dayz_weapons\textures\equip_winchester1866_CA.paa";
		UiPicture = "";
		magazines[] = {"15Rnd_W1866_Slug", "15Rnd_W1866_Pellet"};
		optics = true;
		modelOptics = "-";
		displayname = $STR_WPN_NAME_1;
		modes[] = {"Single"};
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		selectionFireAnim = "zasleh";
		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"};
		
		class Single : Mode_SemiAuto {
			dispersion = 0.003;
			soundContinuous = 0;
			reloadTime = 1;
			//reloadMagazineSound[] = {"\ca\sounds\weapons\rifles\M1014-reload", 0.316228, 1, 20};
			begin1[] = {"dayz_weapons\sounds\shotgun_0", 1.77828, 1, 1000};
			begin2[] = {"dayz_weapons\sounds\shotgun_1", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			drySound[] = {"ca\sounds\weapons\rifles\dry", 0.01, 1, 10};
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			recoil = "recoil_single_primary_9outof10";
			recoilProne = "recoil_single_primary_prone_8outof10";
		};
		
		class Library {
			libTextDesc = $STR_WPN_DESC_1;
		};
		descriptionShort = $STR_WPN_DESC_1;
	};
	
	class Remington870 : Winchester1866 {
		model = "\dayz_weapons\models\Remington870";
		picture = "\dayz_weapons\textures\equip_remington870_CA.paa";
		displayname = $STR_WPN_NAME_2;
		descriptionShort = $STR_WPN_DESC_2;
		magazines[] = {"8Rnd_B_Beneli_Pellets"};
	};
	
	class Remington870_lamp : Remington870 {
		model = "\dayz_weapons\models\Remington870_lamp";
		displayname = $STR_WPN_NAME_3;
		descriptionShort = $STR_WPN_DESC_3;
		magazines[] = {"8Rnd_B_Beneli_Pellets"};
		
		class FlashLight {
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			size = 1;
			innerAngle = 30;
			outerAngle = 80;
			coneFadeCoef = 8;
			intensity = 1500;
			scale[] = {0};
			useFlare = 1;
			dayLight = 0;
			flareSize = 0.75;
		};
	};
};

class cfgMagazines {
	class CA_Magazine;	// External class reference
	
	class Hatchet_Swing : CA_Magazine {
		scope = 2;
		type = 0;
		autoReload = 0;
		flash = "";
		flashSize = 0;
		initSpeed = 73;
		maxLeadSpeed = 20;
		picture = "\dayz_weapons\textures\equip_shells_ca.paa";
		displayName = "Melee";
		displayNameMagazine = "Melee";
		shortNameMagazine = "Melee";
		optics = 0;
		distanceZoomMin = 0;
		distanceZoomMax = 0;
		count = 100000;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		drySound[] = {"", 0, 1};
		reloadMagazineSound[] = {"", 0, 1};
		modes[] = {"Single"};
		ammo = "Hatchet_Swing_Ammo";
		mass = 0;
	};
	
	class crowbar_swing : Hatchet_Swing {
		displayName = "Crowbar";
		displayNameMagazine = "Crowbar";
		shortNameMagazine = "Crowbar";
		ammo = "Crowbar_Swing_Ammo";
	};
	
	class 15Rnd_W1866_Slug : CA_Magazine {
		scope = public;
		displayName = $STR_MAG_NAME_2;
		ammo = "B_1866_Slug";
		model = "\dayz_weapons\models\8shells_slugs.p3d";
		picture = "\dayz_weapons\textures\equip_shells_ca.paa";
		count = 15;
		initSpeed = 396;
		descriptionShort = $STR_MAG_DESC_2;
		displayNameShort = "Slug";
	};
	
	class 15Rnd_W1866_Pellet : 15Rnd_W1866_Slug {};
	
	class 8Rnd_B_Beneli_74Slug : CA_Magazine {
		scope = public;
		displayName = "8Rnd. Slug";
		model = "\dayz_weapons\models\8shells_slugs.p3d";
		picture = "\dayz_weapons\textures\equip_shells_ca.paa";
		ammo = "B_12Gauge_74Slug";
		count = 8;
		initSpeed = 396;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 8 <br/>Used in: M1014";
		
		class ItemActions {
			class ReloadMag {
				text = "Split into 4 x 2 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"8Rnd_B_Beneli_74Slug"};
				output[] = {"2Rnd_shotgun_74Slug", "2Rnd_shotgun_74Slug", "2Rnd_shotgun_74Slug", "2Rnd_shotgun_74Slug"};
			};
		};
	};
	
	class 8Rnd_B_Beneli_Pellets : CA_Magazine {
		scope = public;
		displayName = "8Rnd. Pellets";
		model = "\dayz_weapons\models\8shells_pellets.p3d";
		picture = "\dayz_weapons\textures\equip_pellets_ca.paa";
		ammo = "B_12Gauge_Pellets";
		count = 8;
		initSpeed = 396;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 8 Pellets<br/>Used in: M1014";
		displayNameShort = "Pellets";
		
		class ItemActions {
			class ReloadMag {
				text = "Split into 4x2 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"8Rnd_B_Beneli_Pellets"};
				output[] = {"2Rnd_shotgun_74Pellets", "2Rnd_shotgun_74Pellets", "2Rnd_shotgun_74Pellets", "2Rnd_shotgun_74Pellets"};
			};
		};
	};
	class 2Rnd_shotgun_74Slug : 8Rnd_B_Beneli_74Slug {
		displayName = "2Rnd. Slug";
		count = 2;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 2 <br/>Used in: M1014";
		
		class ItemActions {
			class ReloadMag {
				text = "Combine to 8 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"2Rnd_shotgun_74Slug", "2Rnd_shotgun_74Slug", "2Rnd_shotgun_74Slug", "2Rnd_shotgun_74Slug"};
				output[] = {"8Rnd_B_Beneli_74Slug"};
			};
		};
	};
	
	class 2Rnd_shotgun_74Pellets : 8Rnd_B_Beneli_Pellets {
		displayName = "2Rnd. Pellets";
		count = 2;
		descriptionShort = "Caliber: 12 gauge <br/>Rounds: 2 Pellets<br/>Used in: M1014";
		
		class ItemActions {
			class ReloadMag {
				text = "Combine to 8 rounds";
				script = "spawn player_reloadMag;";
				use[] = {"2Rnd_shotgun_74Pellets", "2Rnd_shotgun_74Pellets", "2Rnd_shotgun_74Pellets", "2Rnd_shotgun_74Pellets"};
				output[] = {"8Rnd_B_Beneli_Pellets"};
			};
		};
	};
	class HandGrenade;	// External class reference
	
	class TrashJackDaniels : HandGrenade {
		scope = public;
		displayName = $STR_EQUIP_NAME_34;
		model = "\dayz_equip\models\bottle_jd.p3d";
		picture = "\dayz_equip\textures\equip_bottle_jd_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_34;
		ammo = "JackDaniels";
	};
	
	class TrashTinCan : HandGrenade {
		scope = public;
		displayName = $STR_EQUIP_NAME_33;
		model = "\dayz_equip\models\trash_tincan.p3d";
		picture = "\dayz_equip\textures\equip_tincan_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_33;
		ammo = "TinCan";
	};
	
	class ItemSodaEmpty : HandGrenade {
		scope = public;
		displayName = $STR_EQUIP_NAME_35;
		model = "\dayz_equip\models\soda_coke_e.p3d";
		picture = "\dayz_equip\textures\equip_soda_empty_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_35;
		ammo = "SodaCan";
	};
	
	class HandRoadFlare : HandGrenade {
		displayName = $STR_MAG_NAME_4;
		picture = "\dayz_weapons\textures\equip_roadflare_ca.paa";
		model = "\dayz_weapons\models\roadflare";
		ammo = "RoadFlare";
		count = 10;
		descriptionShort = $STR_MAG_DESC_4;
	};
	
	class ChemLightMag : HandGrenade {
		count = 5;
	};
	
	class HandChemBlue : ChemLightMag {
		scope = public;
		displayName = $STR_MAG_NAME_7;
		picture = "\dayz_weapons\textures\equip_chem_blue_ca.paa";
		model = "\dayz_weapons\models\chem_gear_blue";
		ammo = "ChemBlue";
		count = 10;
		descriptionShort = $STR_MAG_DESC_5;
	};
	
	class HandChemGreen : ChemLightMag {
		scope = public;
		displayName = $STR_MAG_NAME_5;
		picture = "\dayz_weapons\textures\equip_chem_green_ca.paa";
		model = "\dayz_weapons\models\chem_gear_green";
		ammo = "ChemGreen";
		count = 10;
		descriptionShort = $STR_MAG_DESC_5;
	};
	
	class HandChemRed : ChemLightMag {
		scope = public;
		displayName = $STR_MAG_NAME_6;
		picture = "\dayz_weapons\textures\equip_chem_red_ca.paa";
		model = "\dayz_weapons\models\chem_gear_red";
		ammo = "ChemRed";
		count = 10;
		descriptionShort = $STR_MAG_DESC_5;
	};
	
	class BoltSteel : CA_Magazine {
		scope = public;
		displayName = $STR_MAG_NAME_3;
		model = "\dayz_weapons\models\bolt_gear";
		picture = "\dayz_weapons\textures\equip_bolt_ca.paa";
		ammo = "BoltSteel";
		count = 1;
		initSpeed = 150;
		descriptionShort = $STR_MAG_DESC_3;
		displayNameShort = $STR_MAG_ACTION_3;
	};
};

class CfgCloudlets {
	class Default;	// External class reference
	
	class FlareSmoke : Default {
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\Ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0, 0.6, 0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {0.2, 0.8, 2.6};
		sizeCoef = 1;
		color[] = {{0.6, 0.6, 0.6, 0}, {0.7, 0.7, 0.7, 0.2}, {0.8, 0.8, 0.8, 0.1}, {1, 1, 1, 0}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {1.5, 0.5};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.4;
		randomDirectionIntensity = 0.09;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		position[] = {0, 0, 0};
		positionVar[] = {0.1, 0.2, 0.1};
		MoveVelocityVar[] = {0.05, 0.5, 0.05};
		rotationVelocityVar = 0;
		sizeVar = 0.3;
		colorVar[] = {0, 0, 0, 0.1};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
	
	class FlareSparks : Default {
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.5;
		moveVelocity[] = {0, 0.7, 0};
		rotationVelocity = 0;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {0.7, 0};
		sizeCoef = 1;
		color[] = {{1, 1, 1, 0}, {1, 1, 1, -1}, {1, 1, 1, -1}, {1, 1, 1, -1}, {1, 1, 1, -1}, {1, 1, 1, 0}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		position[] = {0, 0, 0};
		positionVar[] = {0.05, 0.2, 0.05};
		moveVelocityVar[] = {0.08, 0.9, 0.08};
		rotationVelocityVar = 0;
		sizeVar = 0.06;
		colorVar[] = {0.1, 0.1, 0.1, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	
	class BottleGlassShards : Default {
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 2;
		moveVelocity[] = {0, 1, 0};
		rotationVelocity = 2;
		weight = 10;
		volume = 1;
		rubbing = 0;
		size[] = {0.05};
		sizeCoef = 1;
		color[] = {{1, 1, 1, 1}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0, 0, 0};
		positionVar[] = {0.02, 0.02, 0.02};
		moveVelocityVar[] = {0.2, 1, 0.2};
		rotationVelocityVar = 1;
		sizeVar = 0.04;
		colorVar[] = {0.1, 0.1, 0.1, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	
	class BottleGlassShards2 : Default {
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\ca\Data\ParticleEffects\Universal\GlassShards";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 3;
		lifeTime = 2;
		moveVelocity[] = {0, 2, 0};
		rotationVelocity = 2;
		weight = 10;
		volume = 1;
		rubbing = 0;
		size[] = {0.05};
		sizeCoef = 1;
		color[] = {{1, 1, 1, 1}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		position[] = {0, 0.4, 0};
		positionVar[] = {0.04, 0.04, 0.04};
		moveVelocityVar[] = {0.2, 3, 0.2};
		rotationVelocityVar = 0;
		sizeVar = 0.04;
		colorVar[] = {0.1, 0.1, 0.1, 0};
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 1;
	};
	
	class BottleGlassDust : Default {
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 0.7;
		moveVelocity[] = {0, 0.7, 0};
		rotationVelocity = 2;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {0.05, 0.15};
		sizeCoef = 1;
		color[] = {{0.5, 0.5, 0.5, 0.1}, {0.5, 0.5, 0.5, 0}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		position[] = {0, 0.4, 0};
		positionVar[] = {0.02, 0.02, 0.02};
		moveVelocityVar[] = {0.2, 0.5, 0.2};
		rotationVelocityVar = 0;
		sizeVar = 0.04;
		colorVar[] = {0.1, 0.1, 0.1, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};

class FlareSparks {
	class FlareSmoke {
		simulation = "particles";
		type = "FlareSmoke";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	
	class FlareSparks {
		simulation = "particles";
		type = "FlareSparks";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class GlassSmash {
	class BottleGlassShards {
		simulation = "particles";
		type = "BottleGlassShards";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	
	class BottleGlassShards2 {
		simulation = "particles";
		type = "BottleGlassShards2";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	
	class BottleGlassDust {
		simulation = "particles";
		type = "BottleGlassDust";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class cfgAmmo {
	class GrenadeHand;	// External class reference
	
	class ThrownObjects : GrenadeHand {
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		cost = 1;
		whistleDist = 0;
		fuseDistance = 0;
		initTime = 0;
		explosive = true;
	};
	class Default;	// External class reference
	
	class Melee : Default {
		explosive = "false";
		simulationStep = 0.001;
		timeToLive = 0.05;
		typicalSpeed = 60;
		airFriction = -1e-005;
		soundFly[] = {"", 0, 1};
		soundEngine[] = {"", 0, 1};
		visibleFire = 0.1;
		audibleFire = 1;
		caliber = 0.22;
		visibleFireTime = 0;
		maxControlRange = 1;
		cost = 0.01;
		tracerColor[] = {0, 0, 0, 0};
		tracerColorR[] = {0, 0, 0, 0};
		deflecting = 0;
		explosionEffects = "ImpactBlood";
		craterEffects = "ImpactEffectsBlood";
		model = "\a3\weapons_f\Ammo\shell";
	};
	
	class Hatchet_Swing_Ammo : Melee {
		hit = 12;
		simulation = "shotBullet";
		typicalSpeed = 70;
		explosive = "false";
		simulationStep = 0.001;
		timeToLive = 0.05;
		soundHit[] = {"", 3.16228e-005, 1};
		soundEngine[] = {"", 0.0001, 4};
		
		class Medical {
			InstantBleeding = 1;
			MedicalState = 3;
			MedicalChance = 80;
			BleedingLevel = 3;
			BleedingChance = 50;
			Infection = 0;
			InfectionChance = 0;
			Knockout = 0;
			KnockoutChance = 0;
			scale = 0;
		};
	};
	
	class Crowbar_Swing_Ammo : Melee {
		hit = 5;
		simulation = "shotBullet";
	};
	
	class SodaCan : ThrownObjects {
		model = "\dayz_equip\models\soda_coke_e.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_weapons\sounds\can_hit_0", 0.5, 1, 40};
	};
	
	class TinCan : ThrownObjects {
		model = "\dayz_equip\models\trash_tincan.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		soundHit[] = {"dayz_weapons\sounds\can_hit_1", 0.5, 1, 30};
	};
	
	class JackDaniels : ThrownObjects {
		model = "\dayz_equip\models\bottle_jd.p3d";
		CraterEffects = "NoCrater";
		explosionEffects = "GlassSmash";
		soundHit[] = {"dayz_weapons\sounds\bottle_break_0", 0.5, 1, 60};
	};
	
	class LitObject : GrenadeHand {
		displayName = $STR_MAG_ACTION_4;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = false;
		fuseDistance = 0;
		initTime = 0;
	};
	
	class RoadFlare : LitObject {
		displayName = $STR_MAG_ACTION_4;
		model = "\dayz_weapons\models\flare_red";
		simulation = "shotSmoke";
		simulationStep = 1;
		soundFly[] = {"dayz_weapons\sounds\roadflare", 0.316228, 1, 60};
		cost = 100;
		explosive = false;
		deflecting = 60;
		explosionTime = 0;
		timeToLive = 300;
		soundHit[] = {"", 0, 1};
		whistleDist = 0;
		smokeColor[] = {1, 1, 1, 1};
		effectsSmoke = "FlareSparks";
	};
	
	class ChemLight : LitObject {
		displayName = $STR_MAG_ACTION_5;
		simulation = "shotShell";
		simulationStep = 5;
		soundFly[] = {"", 0, 0};
		cost = 100;
		deflecting = 0;
		soundHit[] = {"", 0, 1};
		whistleDist = 0;
		smokeColor[] = {0, 0, 0, 0};
		effectsSmoke = "";
		explosionTime = 3600;
		timeToLive = 3600;
	};
	
	class ChemGreen : ChemLight {
		model = "\dayz_weapons\models\chem_green";
		lightColor[] = {0, 0.5, 0};
	};
	
	class ChemRed : ChemLight {
		model = "\dayz_weapons\models\chem_red";
		lightColor[] = {0.5, 0, 0};
	};
	
	class ChemBlue : ChemLight {
		model = "\dayz_weapons\models\chem_blue";
		lightColor[] = {0, 0, 0.5};
	};
	class BulletBase;	// External class reference
	
	class Bolt : BulletBase {
		model = "\dayz_weapons\models\bolt";
		soundFly[] = {"", 1, 1};
		hit = 6;
		cartridge = "";
		cost = 5;
		typicalSpeed = 100;
		airFriction = -0.002751;
		caliber = 0.33;
		visibleFire = 1;	// how much is visible when this weapon is fired
		audibleFire = 1;
	};
	
	class BoltSteel : Bolt {
		model = "\dayz_weapons\models\bolt";
		hit = 8;
		caliber = 0.33;
	};
	
	class B_1866_Slug : BulletBase {
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 200;
		visibleFire = 25;	// how much is visible when this weapon is fired
		audibleFire = 25;
		airFriction = -0.005;
		caliber = 0.5;
	};
};

class CfgVehicles {
	class groundweaponHolder;	// External class reference
	
	class BoltSteelF : groundweaponHolder {
		scope = public;
		displayName = $STR_MAG_NAME_3;
		model = "\dayz_weapons\models\bolt";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','BoltSteel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	class malaksurvivor;	// External class reference
	
	class Survivor1_DZ : malaksurvivor {
		_generalMacro = "B_Soldier_F";
		scope = public;
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		displayName = "Survivor";
		uniformClass = "U_C_Poloshirt_Pants";
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};		
		linkeditems[] = {};
		respawnlinkeditems[] = {};
		hiddenSelectionsTextures[] = {"CharExtras\textures\c_poloshirtpants_1_co.paa"};
		weaponSlots = 1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072;
		canHideBodies = true;
	};
	
	class Survivor2_DZ : malaksurvivor {
		_generalMacro = "B_Soldier_F";
		scope = public;
		model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
		displayName = "Survivor";
		uniformClass = "U_C_Poloshirt_Pants";
		weapons[] = {"Throw", "Put"};
		respawnWeapons[] = {"Throw", "Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};		
		linkeditems[] = {};
		respawnlinkeditems[] = {};
		hiddenSelectionsTextures[] = {"CharExtras\textures\c_poloshirtpants_1_co.paa"};
		weaponSlots = 1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072;
		canHideBodies = true;
	};
	
};