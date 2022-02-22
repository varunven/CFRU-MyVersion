#include "defines.h"

#ifdef INCLUDE_FOOTPRINTS

const u32 gMonFootprintTable[NUM_SPECIES] =
	{
		[SPECIES_NONE] = 0x8d3058c,
		[SPECIES_BULBASAUR] = 0x8d3058c,
		[SPECIES_IVYSAUR] = 0x8d3108c,
		[SPECIES_VENUSAUR] = 0x8d31f04,
		[SPECIES_CHARMANDER] = 0x8d32898,
		[SPECIES_CHARMELEON] = 0x8d333a8,
		[SPECIES_CHARIZARD] = 0x8d34120,
		[SPECIES_SQUIRTLE] = 0x8d34ab4,
		[SPECIES_WARTORTLE] = 0x8d35618,
		[SPECIES_BLASTOISE] = 0x8d363a0,
		[SPECIES_CATERPIE] = 0x8d36cf0,
		[SPECIES_METAPOD] = 0x8d37588,
		[SPECIES_BUTTERFREE] = 0x8d38174,
		[SPECIES_WEEDLE] = 0x8d38a88,
		[SPECIES_KAKUNA] = 0x8d393b4,
		[SPECIES_BEEDRILL] = 0x8d39fb8,
		[SPECIES_PIDGEY] = 0x8d3a9f4,
		[SPECIES_PIDGEOTTO] = 0x8d3b548,
		[SPECIES_PIDGEOT] = 0x8d3c28c,
		[SPECIES_RATTATA] = 0x8d3cc0c,
		[SPECIES_RATICATE] = 0x8d3d71c,
		[SPECIES_SPEAROW] = 0x8d3e128,
		[SPECIES_FEAROW] = 0x8d3ed4c,
		[SPECIES_EKANS] = 0x8d3f774,
		[SPECIES_ARBOK] = 0x8d402e0,
		[SPECIES_PIKACHU] = 0x8d40cf8,
		[SPECIES_RAICHU] = 0x8d41880,
		[SPECIES_SANDSHREW] = 0x8d422f4,
		[SPECIES_SANDSLASH] = 0x8d42f98,
		[SPECIES_NIDORAN_F] = 0x8d4394c,
		[SPECIES_NIDORINA] = 0x8d44470,
		[SPECIES_NIDOQUEEN] = 0x8d450d0,
		[SPECIES_NIDORAN_M] = 0x8d45b00,
		[SPECIES_NIDORINO] = 0x8d466b0,
		[SPECIES_NIDOKING] = 0x8d47498,
		[SPECIES_CLEFAIRY] = 0x8d47e74,
		[SPECIES_CLEFABLE] = 0x8d4895c,
		[SPECIES_VULPIX] = 0x8d493fc,
		[SPECIES_NINETALES] = 0x8d4a0a8,
		[SPECIES_JIGGLYPUFF] = 0x8d4a9f8,
		[SPECIES_WIGGLYTUFF] = 0x8d4b474,
		[SPECIES_ZUBAT] = 0x8d4be5c,
		[SPECIES_GOLBAT] = 0x8d4c928,
		[SPECIES_ODDISH] = 0x8d4d29c,
		[SPECIES_GLOOM] = 0x8d4ddf4,
		[SPECIES_VILEPLUME] = 0x8d4ea04,
		[SPECIES_PARAS] = 0x8d4f380,
		[SPECIES_PARASECT] = 0x8d4fe7c,
		[SPECIES_VENONAT] = 0x8d5093c,
		[SPECIES_VENOMOTH] = 0x8d51554,
		[SPECIES_DIGLETT] = 0x8d51de0,
		[SPECIES_DUGTRIO] = 0x8d52828,
		[SPECIES_MEOWTH] = 0x8d53268,
		[SPECIES_PERSIAN] = 0x8d53d90,
		[SPECIES_PSYDUCK] = 0x8d54780,
		[SPECIES_GOLDUCK] = 0x8d552d4,
		[SPECIES_MANKEY] = 0x8d55da4,
		[SPECIES_PRIMEAPE] = 0x8d56910,
		[SPECIES_GROWLITHE] = 0x8d573e4,
		[SPECIES_ARCANINE] = 0x8d58130,
		[SPECIES_POLIWAG] = 0x8d58aa0,
		[SPECIES_POLIWHIRL] = 0x8d5950c,
		[SPECIES_POLIWRATH] = 0x8d5a034,
		[SPECIES_ABRA] = 0x8d5aa44,
		[SPECIES_KADABRA] = 0x8d5b728,
		[SPECIES_ALAKAZAM] = 0x8d5c3b0,
		[SPECIES_MACHOP] = 0x8d5cd8c,
		[SPECIES_MACHOKE] = 0x8d5d918,
		[SPECIES_MACHAMP] = 0x8d5e6d0,
		[SPECIES_BELLSPROUT] = 0x8d5f068,
		[SPECIES_WEEPINBELL] = 0x8d5faf8,
		[SPECIES_VICTREEBEL] = 0x8d6072c,
		[SPECIES_TENTACOOL] = 0x8d61110,
		[SPECIES_TENTACRUEL] = 0x8d61e10,
		[SPECIES_GEODUDE] = 0x8d62790,
		[SPECIES_GRAVELER] = 0x8d63270,
		[SPECIES_GOLEM] = 0x8d63dd0,
		[SPECIES_PONYTA] = 0x8d6490c,
		[SPECIES_RAPIDASH] = 0x8d65614,
		[SPECIES_SLOWPOKE] = 0x8d65fbc,
		[SPECIES_SLOWBRO] = 0x8d66c68,
		[SPECIES_MAGNEMITE] = 0x8d67494,
		[SPECIES_MAGNETON] = 0x8d67fc0,
		[SPECIES_FARFETCHD] = 0x8d68af0,
		[SPECIES_DODUO] = 0x8d6955c,
		[SPECIES_DODRIO] = 0x8d6a270,
		[SPECIES_SEEL] = 0x8d6acf0,
		[SPECIES_DEWGONG] = 0x8d6b7bc,
		[SPECIES_GRIMER] = 0x8d6c210,
		[SPECIES_MUK] = 0x8d6cd00,
		[SPECIES_SHELLDER] = 0x8d6d6f0,
		[SPECIES_CLOYSTER] = 0x8d6e3a0,
		[SPECIES_GASTLY] = 0x8d6eeec,
		[SPECIES_HAUNTER] = 0x8d6fa20,
		[SPECIES_GENGAR] = 0x8d70528,
		[SPECIES_ONIX] = 0x8d711cc,
		[SPECIES_DROWZEE] = 0x8d71bb0,
		[SPECIES_HYPNO] = 0x8d72780,
		[SPECIES_KRABBY] = 0x8d732a0,
		[SPECIES_KINGLER] = 0x8d73f14,
		[SPECIES_VOLTORB] = 0x8d747f8,
		[SPECIES_ELECTRODE] = 0x8d7513c,
		[SPECIES_EXEGGCUTE] = 0x8d75c3c,
		[SPECIES_EXEGGUTOR] = 0x8d768c8,
		[SPECIES_CUBONE] = 0x8d77334,
		[SPECIES_MAROWAK] = 0x8d77e38,
		[SPECIES_HITMONLEE] = 0x8d788c0,
		[SPECIES_HITMONCHAN] = 0x8d793b4,
		[SPECIES_LICKITUNG] = 0x8d79ea0,
		[SPECIES_KOFFING] = 0x8d7a910,
		[SPECIES_WEEZING] = 0x8d7b5c0,
		[SPECIES_RHYHORN] = 0x8d7c164,
		[SPECIES_RHYDON] = 0x8d7cf18,
		[SPECIES_CHANSEY] = 0x8d7d90c,
		[SPECIES_TANGELA] = 0x8d7e4f4,
		[SPECIES_KANGASKHAN] = 0x8d7f23c,
		[SPECIES_HORSEA] = 0x8d7fbf8,
		[SPECIES_SEADRA] = 0x8d80790,
		[SPECIES_GOLDEEN] = 0x8d812d8,
		[SPECIES_SEAKING] = 0x8d81f0c,
		[SPECIES_STARYU] = 0x8d82894,
		[SPECIES_STARMIE] = 0x8d83348,
		[SPECIES_MR_MIME] = 0x8d83ea8,
		[SPECIES_SCYTHER] = 0x8d84b58,
		[SPECIES_JYNX] = 0x8d85680,
		[SPECIES_ELECTABUZZ] = 0x8d86258,
		[SPECIES_MAGMAR] = 0x8d86e30,
		[SPECIES_PINSIR] = 0x8d87a1c,
		[SPECIES_TAUROS] = 0x8d885a0,
		[SPECIES_MAGIKARP] = 0x8d89088,
		[SPECIES_GYARADOS] = 0x8d89f54,
		[SPECIES_LAPRAS] = 0x8d8aae8,
		[SPECIES_DITTO] = 0x8d8b338,
		[SPECIES_EEVEE] = 0x8d8bdbc,
		[SPECIES_VAPOREON] = 0x8d8c888,
		[SPECIES_JOLTEON] = 0x8d8d3f4,
		[SPECIES_FLAREON] = 0x8d8df78,
		[SPECIES_PORYGON] = 0x8d8e950,
		[SPECIES_OMANYTE] = 0x8d8f39c,
		[SPECIES_OMASTAR] = 0x8d8ff0c,
		[SPECIES_KABUTO] = 0x8d9083c,
		[SPECIES_KABUTOPS] = 0x8d91458,
		[SPECIES_AERODACTYL] = 0x8d9201c,
		[SPECIES_SNORLAX] = 0x8d92a7c,
		[SPECIES_ARTICUNO] = 0x8d93640,
		[SPECIES_ZAPDOS] = 0x8d9423c,
		[SPECIES_MOLTRES] = 0x8d94eb4,
		[SPECIES_DRATINI] = 0x8d95868,
		[SPECIES_DRAGONAIR] = 0x8d96380,
		[SPECIES_DRAGONITE] = 0x8d97038,
		[SPECIES_MEWTWO] = 0x8d97ca8,
		[SPECIES_MEW] = 0x8d98720,
		[SPECIES_CHIKORITA] = 0x8d990bc,
		[SPECIES_BAYLEEF] = 0x8d99c90,
		[SPECIES_MEGANIUM] = 0x8d9a9ac,
		[SPECIES_CYNDAQUIL] = 0x8d9b3d4,
		[SPECIES_QUILAVA] = 0x8d9bed4,
		[SPECIES_TYPHLOSION] = 0x8d9cb70,
		[SPECIES_TOTODILE] = 0x8d9d564,
		[SPECIES_CROCONAW] = 0x8d9e08c,
		[SPECIES_FERALIGATR] = 0x8d9ef34,
		[SPECIES_SENTRET] = 0x8d9f924,
		[SPECIES_FURRET] = 0x8da03f0,
		[SPECIES_HOOTHOOT] = 0x8da0dec,
		[SPECIES_NOCTOWL] = 0x8da190c,
		[SPECIES_LEDYBA] = 0x8da23a0,
		[SPECIES_LEDIAN] = 0x8da2ef0,
		[SPECIES_SPINARAK] = 0x8da3838,
		[SPECIES_ARIADOS] = 0x8da43e0,
		[SPECIES_CROBAT] = 0x8da4f08,
		[SPECIES_CHINCHOU] = 0x8da5948,
		[SPECIES_LANTURN] = 0x8da6428,
		[SPECIES_PICHU] = 0x8da6d10,
		[SPECIES_CLEFFA] = 0x8da759c,
		[SPECIES_IGGLYBUFF] = 0x8da7e30,
		[SPECIES_TOGEPI] = 0x8da86e8,
		[SPECIES_TOGETIC] = 0x8da90f8,
		[SPECIES_NATU] = 0x8da9948,
		[SPECIES_XATU] = 0x8daa40c,
		[SPECIES_MAREEP] = 0x8daae24,
		[SPECIES_FLAAFFY] = 0x8dab8b0,
		[SPECIES_AMPHAROS] = 0x8dac3f4,
		[SPECIES_BELLOSSOM] = 0x8dacdf8,
		[SPECIES_MARILL] = 0x8dad7d8,
		[SPECIES_AZUMARILL] = 0x8dae204,
		[SPECIES_SUDOWOODO] = 0x8daece8,
		[SPECIES_POLITOED] = 0x8daf750,
		[SPECIES_HOPPIP] = 0x8db0154,
		[SPECIES_SKIPLOOM] = 0x8db0b2c,
		[SPECIES_JUMPLUFF] = 0x8db1700,
		[SPECIES_AIPOM] = 0x8db2160,
		[SPECIES_SUNKERN] = 0x8db2acc,
		[SPECIES_SUNFLORA] = 0x8db3634,
		[SPECIES_YANMA] = 0x8db41dc,
		[SPECIES_WOOPER] = 0x8db4b18,
		[SPECIES_QUAGSIRE] = 0x8db55f8,
		[SPECIES_ESPEON] = 0x8db607c,
		[SPECIES_UMBREON] = 0x8db6b14,
		[SPECIES_MURKROW] = 0x8db757c,
		[SPECIES_SLOWKING] = 0x8db812c,
		[SPECIES_MISDREAVUS] = 0x8db8b80,
		[SPECIES_UNOWN] = 0x8db93b4,
		[SPECIES_WOBBUFFET] = 0x8db9db8,
		[SPECIES_GIRAFARIG] = 0x8dba9d8,
		[SPECIES_PINECO] = 0x8dbb458,
		[SPECIES_FORRETRESS] = 0x8dbbfa4,
		[SPECIES_DUNSPARCE] = 0x8dbca20,
		[SPECIES_GLIGAR] = 0x8dbd690,
		[SPECIES_STEELIX] = 0x8dbe3cc,
		[SPECIES_SNUBBULL] = 0x8dbee38,
		[SPECIES_GRANBULL] = 0x8dbf958,
		[SPECIES_QWILFISH] = 0x8dc0368,
		[SPECIES_SCIZOR] = 0x8dc1040,
		[SPECIES_SHUCKLE] = 0x8dc19d0,
		[SPECIES_HERACROSS] = 0x8dc29a0,
		[SPECIES_SNEASEL] = 0x8dc3478,
		[SPECIES_TEDDIURSA] = 0x8dc3e08,
		[SPECIES_URSARING] = 0x8dc4a38,
		[SPECIES_SLUGMA] = 0x8dc53fc,
		[SPECIES_MAGCARGO] = 0x8dc5fcc,
		[SPECIES_SWINUB] = 0x8dc6874,
		[SPECIES_PILOSWINE] = 0x8dc7258,
		[SPECIES_CORSOLA] = 0x8dc7c70,
		[SPECIES_REMORAID] = 0x8dc865c,
		[SPECIES_OCTILLERY] = 0x8dc90b8,
		[SPECIES_DELIBIRD] = 0x8dc9c58,
		[SPECIES_MANTINE] = 0x8dca804,
		[SPECIES_SKARMORY] = 0x8dcb458,
		[SPECIES_HOUNDOUR] = 0x8dcbe00,
		[SPECIES_HOUNDOOM] = 0x8dcc994,
		[SPECIES_KINGDRA] = 0x8dcd5d8,
		[SPECIES_PHANPY] = 0x8dcdf68,
		[SPECIES_DONPHAN] = 0x8dceb48,
		[SPECIES_PORYGON2] = 0x8dcf55c,
		[SPECIES_STANTLER] = 0x8dd012c,
		[SPECIES_SMEARGLE] = 0x8dd0c54,
		[SPECIES_TYROGUE] = 0x8dd166c,
		[SPECIES_HITMONTOP] = 0x8dd2490,
		[SPECIES_SMOOCHUM] = 0x8dd2dd0,
		[SPECIES_ELEKID] = 0x8dd38a0,
		[SPECIES_MAGBY] = 0x8dd4240,
		[SPECIES_MILTANK] = 0x8dd4dfc,
		[SPECIES_BLISSEY] = 0x8dd5920,
		[SPECIES_RAIKOU] = 0x8dd66b4,
		[SPECIES_ENTEI] = 0x8dd7544,
		[SPECIES_SUICUNE] = 0x8dd8414,
		[SPECIES_LARVITAR] = 0x8dd8d8c,
		[SPECIES_PUPITAR] = 0x8dd9824,
		[SPECIES_TYRANITAR] = 0x8dda5bc,
		[SPECIES_LUGIA] = 0x8ddb2c4,
		[SPECIES_HO_OH] = 0x8ddc198,
		[SPECIES_CELEBI] = 0x8ddcc2c,
		[252] = 0x8e7735c,
		[253] = 0x8e7735c,
		[254] = 0x8e7735c,
		[255] = 0x8e7735c,
		[256] = 0x8e7735c,
		[257] = 0x8e7735c,
		[258] = 0x8e7735c,
		[259] = 0x8e7735c,
		[260] = 0x8e7735c,
		[261] = 0x8e7735c,
		[262] = 0x8e7735c,
		[263] = 0x8e7735c,
		[264] = 0x8e7735c,
		[265] = 0x8e7735c,
		[266] = 0x8e7735c,
		[267] = 0x8e7735c,
		[268] = 0x8e7735c,
		[269] = 0x8e7735c,
		[270] = 0x8e7735c,
		[271] = 0x8e7735c,
		[272] = 0x8e7735c,
		[273] = 0x8e7735c,
		[274] = 0x8e7735c,
		[275] = 0x8e7735c,
		[276] = 0x8e7735c,
		[SPECIES_TREECKO] = 0x8ddd9d4,
		[SPECIES_GROVYLE] = 0x8dde60c,
		[SPECIES_SCEPTILE] = 0x8ddf37c,
		[SPECIES_TORCHIC] = 0x8ddfd60,
		[SPECIES_COMBUSKEN] = 0x8de098c,
		[SPECIES_BLAZIKEN] = 0x8de1650,
		[SPECIES_MUDKIP] = 0x8de2058,
		[SPECIES_MARSHTOMP] = 0x8de2c00,
		[SPECIES_SWAMPERT] = 0x8de39a0,
		[SPECIES_POOCHYENA] = 0x8de4404,
		[SPECIES_MIGHTYENA] = 0x8de5024,
		[SPECIES_ZIGZAGOON] = 0x8de5ba4,
		[SPECIES_LINOONE] = 0x8de6658,
		[SPECIES_WURMPLE] = 0x8de6f9c,
		[SPECIES_SILCOON] = 0x8de78a8,
		[SPECIES_BEAUTIFLY] = 0x8de8420,
		[SPECIES_CASCOON] = 0x8de8d0c,
		[SPECIES_DUSTOX] = 0x8de973c,
		[SPECIES_LOTAD] = 0x8dea0f4,
		[SPECIES_LOMBRE] = 0x8deab78,
		[SPECIES_LUDICOLO] = 0x8deb7c8,
		[SPECIES_SEEDOT] = 0x8dec1ac,
		[SPECIES_NUZLEAF] = 0x8decbd0,
		[SPECIES_SHIFTRY] = 0x8ded7c0,
		[SPECIES_NINCADA] = 0x8dee188,
		[SPECIES_NINJASK] = 0x8deed34,
		[SPECIES_SHEDINJA] = 0x8def864,
		[SPECIES_TAILLOW] = 0x8df014c,
		[SPECIES_SWELLOW] = 0x8df0cb8,
		[SPECIES_SHROOMISH] = 0x8df1670,
		[SPECIES_BRELOOM] = 0x8df22a8,
		[SPECIES_SPINDA] = 0x8df2d54,
		[SPECIES_WINGULL] = 0x8df3750,
		[SPECIES_PELIPPER] = 0x8df42d8,
		[SPECIES_SURSKIT] = 0x8df4b8c,
		[SPECIES_MASQUERAIN] = 0x8df56f0,
		[SPECIES_WAILMER] = 0x8df6024,
		[SPECIES_WAILORD] = 0x8df6a70,
		[SPECIES_SKITTY] = 0x8df7528,
		[SPECIES_DELCATTY] = 0x8df80c0,
		[SPECIES_KECLEON] = 0x8df8c88,
		[SPECIES_BALTOY] = 0x8df95b4,
		[SPECIES_CLAYDOL] = 0x8dfa1b0,
		[SPECIES_NOSEPASS] = 0x8dfab8c,
		[SPECIES_TORKOAL] = 0x8dfb770,
		[SPECIES_SABLEYE] = 0x8dfc1dc,
		[SPECIES_BARBOACH] = 0x8dfcb6c,
		[SPECIES_WHISCASH] = 0x8dfd6a0,
		[SPECIES_LUVDISC] = 0x8dfde9c,
		[SPECIES_CORPHISH] = 0x8dfe984,
		[SPECIES_CRAWDAUNT] = 0x8dff668,
		[SPECIES_FEEBAS] = 0x8e0009c,
		[SPECIES_MILOTIC] = 0x8e00c90,
		[SPECIES_CARVANHA] = 0x8e0173c,
		[SPECIES_SHARPEDO] = 0x8e02294,
		[SPECIES_TRAPINCH] = 0x8e02b40,
		[SPECIES_VIBRAVA] = 0x8e03598,
		[SPECIES_FLYGON] = 0x8e04334,
		[SPECIES_MAKUHITA] = 0x8e04da8,
		[SPECIES_HARIYAMA] = 0x8e05aa8,
		[SPECIES_ELECTRIKE] = 0x8e06434,
		[SPECIES_MANECTRIC] = 0x8e06e00,
		[SPECIES_NUMEL] = 0x8e077fc,
		[SPECIES_CAMERUPT] = 0x8e08348,
		[SPECIES_SPHEAL] = 0x8e08c28,
		[SPECIES_SEALEO] = 0x8e09694,
		[SPECIES_WALREIN] = 0x8e0a32c,
		[SPECIES_CACNEA] = 0x8e0ae0c,
		[SPECIES_CACTURNE] = 0x8e0b9b4,
		[SPECIES_SNORUNT] = 0x8e0c3cc,
		[SPECIES_GLALIE] = 0x8e0cfb4,
		[SPECIES_LUNATONE] = 0x8e0daa4,
		[SPECIES_SOLROCK] = 0x8e0e74c,
		[SPECIES_AZURILL] = 0x8e0f19c,
		[SPECIES_SPOINK] = 0x8e0fab8,
		[SPECIES_GRUMPIG] = 0x8e10644,
		[SPECIES_PLUSLE] = 0x8e10ff8,
		[SPECIES_MINUN] = 0x8e11998,
		[SPECIES_MAWILE] = 0x8e125c4,
		[SPECIES_MEDITITE] = 0x8e12fb0,
		[SPECIES_MEDICHAM] = 0x8e13a88,
		[SPECIES_SWABLU] = 0x8e14588,
		[SPECIES_ALTARIA] = 0x8e1514c,
		[SPECIES_WYNAUT] = 0x8e15ae4,
		[SPECIES_DUSKULL] = 0x8e164f4,
		[SPECIES_DUSCLOPS] = 0x8e16ff0,
		[SPECIES_ROSELIA] = 0x8e17b94,
		[SPECIES_SLAKOTH] = 0x8e185d4,
		[SPECIES_VIGOROTH] = 0x8e19108,
		[SPECIES_SLAKING] = 0x8e19e10,
		[SPECIES_GULPIN] = 0x8e1a71c,
		[SPECIES_SWALOT] = 0x8e1b218,
		[SPECIES_TROPIUS] = 0x8e1bf24,
		[SPECIES_WHISMUR] = 0x8e1c898,
		[SPECIES_LOUDRED] = 0x8e1d4f0,
		[SPECIES_EXPLOUD] = 0x8e1e2d4,
		[SPECIES_CLAMPERL] = 0x8e1ecb0,
		[SPECIES_HUNTAIL] = 0x8e1f840,
		[SPECIES_GOREBYSS] = 0x8e202a8,
		[SPECIES_ABSOL] = 0x8e20ea8,
		[SPECIES_SHUPPET] = 0x8e217e8,
		[SPECIES_BANETTE] = 0x8e22188,
		[SPECIES_SEVIPER] = 0x8e22ea4,
		[SPECIES_ZANGOOSE] = 0x8e23a54,
		[SPECIES_RELICANTH] = 0x8e245b0,
		[SPECIES_ARON] = 0x8e24e30,
		[SPECIES_LAIRON] = 0x8e25958,
		[SPECIES_AGGRON] = 0x8e2676c,
		[SPECIES_CASTFORM] = 0x8e280cc,
		[SPECIES_VOLBEAT] = 0x8e28c2c,
		[SPECIES_ILLUMISE] = 0x8e2972c,
		[SPECIES_LILEEP] = 0x8e2a224,
		[SPECIES_CRADILY] = 0x8e2aeac,
		[SPECIES_ANORITH] = 0x8e2b888,
		[SPECIES_ARMALDO] = 0x8e2c6b0,
		[SPECIES_RALTS] = 0x8e2cf8c,
		[SPECIES_KIRLIA] = 0x8e2da6c,
		[SPECIES_GARDEVOIR] = 0x8e2e58c,
		[SPECIES_BAGON] = 0x8e2ef5c,
		[SPECIES_SHELGON] = 0x8e2f9b8,
		[SPECIES_SALAMENCE] = 0x8e30570,
		[SPECIES_BELDUM] = 0x8e30f40,
		[SPECIES_METANG] = 0x8e31b30,
		[SPECIES_METAGROSS] = 0x8e326d0,
		[SPECIES_REGIROCK] = 0x8e33448,
		[SPECIES_REGICE] = 0x8e33ff0,
		[SPECIES_REGISTEEL] = 0x8e34c20,
		[SPECIES_KYOGRE] = 0x8e35778,
		[SPECIES_GROUDON] = 0x8e365e4,
		[SPECIES_RAYQUAZA] = 0x8e3729c,
		[SPECIES_LATIAS] = 0x8e37e2c,
		[SPECIES_LATIOS] = 0x8e38a50,
		[SPECIES_JIRACHI] = 0x8e3956c,
		[SPECIES_DEOXYS] = 0x8e3ab88,
		[SPECIES_CHIMECHO] = 0x8e3b4b8,
		[SPECIES_EGG] = 0x8db93b4,
		[SPECIES_UNOWN_B] = 0x8db93b4,
		[SPECIES_UNOWN_C] = 0x8db93b4,
		[SPECIES_UNOWN_D] = 0x8db93b4,
		[SPECIES_UNOWN_E] = 0x8db93b4,
		[SPECIES_UNOWN_F] = 0x8db93b4,
		[SPECIES_UNOWN_G] = 0x8db93b4,
		[SPECIES_UNOWN_H] = 0x8db93b4,
		[SPECIES_UNOWN_I] = 0x8db93b4,
		[SPECIES_UNOWN_J] = 0x8db93b4,
		[SPECIES_UNOWN_K] = 0x8db93b4,
		[SPECIES_UNOWN_L] = 0x8db93b4,
		[SPECIES_UNOWN_M] = 0x8db93b4,
		[SPECIES_UNOWN_N] = 0x8db93b4,
		[SPECIES_UNOWN_O] = 0x8db93b4,
		[SPECIES_UNOWN_P] = 0x8db93b4,
		[SPECIES_UNOWN_Q] = 0x8db93b4,
		[SPECIES_UNOWN_R] = 0x8db93b4,
		[SPECIES_UNOWN_S] = 0x8db93b4,
		[SPECIES_UNOWN_T] = 0x8db93b4,
		[SPECIES_UNOWN_U] = 0x8db93b4,
		[SPECIES_UNOWN_V] = 0x8db93b4,
		[SPECIES_UNOWN_W] = 0x8db93b4,
		[SPECIES_UNOWN_X] = 0x8db93b4,
		[SPECIES_UNOWN_Y] = 0x8db93b4,
		[SPECIES_UNOWN_Z] = 0x8db93b4,
		[SPECIES_UNOWN_EXCLAMATION] = 0x8db93b4,
		[SPECIES_UNOWN_QUESTION] = 0x8db93b4,

		// New Data Starts Here
		[SPECIES_TURTWIG] = 0x8d3058c,
		[SPECIES_GROTLE] = 0x8d3058c,
		[SPECIES_TORTERRA] = 0x8d3058c,
		[SPECIES_CHIMCHAR] = 0x8d3058c,
		[SPECIES_MONFERNO] = 0x8d3058c,
		[SPECIES_INFERNAPE] = 0x8d3058c,
		[SPECIES_PIPLUP] = 0x8d3058c,
		[SPECIES_PRINPLUP] = 0x8d3058c,
		[SPECIES_EMPOLEON] = 0x8d3058c,
		[SPECIES_STARLY] = 0x8d3058c,
		[SPECIES_STARAVIA] = 0x8d3058c,
		[SPECIES_STARAPTOR] = 0x8d3058c,
		[SPECIES_BIDOOF] = 0x8d3058c,
		[SPECIES_BIBAREL] = 0x8d3058c,
		[SPECIES_KRICKETOT] = 0x8d3058c,
		[SPECIES_KRICKETUNE] = 0x8d3058c,
		[SPECIES_SHINX] = 0x8d3058c,
		[SPECIES_LUXIO] = 0x8d3058c,
		[SPECIES_LUXRAY] = 0x8d3058c,
		[SPECIES_BUDEW] = 0x8d3058c,
		[SPECIES_ROSERADE] = 0x8d3058c,
		[SPECIES_CRANIDOS] = 0x8d3058c,
		[SPECIES_RAMPARDOS] = 0x8d3058c,
		[SPECIES_SHIELDON] = 0x8d3058c,
		[SPECIES_BASTIODON] = 0x8d3058c,
		[SPECIES_BURMY] = 0x8d3058c,
		[SPECIES_WORMADAM] = 0x8d3058c,
		[SPECIES_MOTHIM] = 0x8d3058c,
		[SPECIES_COMBEE] = 0x8d3058c,
		[SPECIES_VESPIQUEN] = 0x8d3058c,
		[SPECIES_PACHIRISU] = 0x8d3058c,
		[SPECIES_BUIZEL] = 0x8d3058c,
		[SPECIES_FLOATZEL] = 0x8d3058c,
		[SPECIES_CHERUBI] = 0x8d3058c,
		[SPECIES_CHERRIM] = 0x8d3058c,
		[SPECIES_SHELLOS] = 0x8d3058c,
		[SPECIES_GASTRODON] = 0x8d3058c,
		[SPECIES_AMBIPOM] = 0x8d3058c,
		[SPECIES_DRIFLOON] = 0x8d3058c,
		[SPECIES_DRIFBLIM] = 0x8d3058c,
		[SPECIES_BUNEARY] = 0x8d3058c,
		[SPECIES_LOPUNNY] = 0x8d3058c,
		[SPECIES_MISMAGIUS] = 0x8d3058c,
		[SPECIES_HONCHKROW] = 0x8d3058c,
		[SPECIES_GLAMEOW] = 0x8d3058c,
		[SPECIES_PURUGLY] = 0x8d3058c,
		[SPECIES_CHINGLING] = 0x8d3058c,
		[SPECIES_STUNKY] = 0x8d3058c,
		[SPECIES_SKUNTANK] = 0x8d3058c,
		[SPECIES_BRONZOR] = 0x8d3058c,
		[SPECIES_BRONZONG] = 0x8d3058c,
		[SPECIES_BONSLY] = 0x8d3058c,
		[SPECIES_MIME_JR] = 0x8d3058c,
		[SPECIES_HAPPINY] = 0x8d3058c,
		[SPECIES_CHATOT] = 0x8d3058c,
		[SPECIES_SPIRITOMB] = 0x8d3058c,
		[SPECIES_GIBLE] = 0x8d3058c,
		[SPECIES_GABITE] = 0x8d3058c,
		[SPECIES_GARCHOMP] = 0x8d3058c,
		[SPECIES_MUNCHLAX] = 0x8d3058c,
		[SPECIES_RIOLU] = 0x8d3058c,
		[SPECIES_LUCARIO] = 0x8d3058c,
		[SPECIES_HIPPOPOTAS] = 0x8d3058c,
		[SPECIES_HIPPOWDON] = 0x8d3058c,
		[SPECIES_SKORUPI] = 0x8d3058c,
		[SPECIES_DRAPION] = 0x8d3058c,
		[SPECIES_CROAGUNK] = 0x8d3058c,
		[SPECIES_TOXICROAK] = 0x8d3058c,
		[SPECIES_CARNIVINE] = 0x8d3058c,
		[SPECIES_FINNEON] = 0x8d3058c,
		[SPECIES_LUMINEON] = 0x8d3058c,
		[SPECIES_MANTYKE] = 0x8d3058c,
		[SPECIES_SNOVER] = 0x8d3058c,
		[SPECIES_ABOMASNOW] = 0x8d3058c,
		[SPECIES_WEAVILE] = 0x8d3058c,
		[SPECIES_MAGNEZONE] = 0x8d3058c,
		[SPECIES_LICKILICKY] = 0x8d3058c,
		[SPECIES_RHYPERIOR] = 0x8d3058c,
		[SPECIES_TANGROWTH] = 0x8d3058c,
		[SPECIES_ELECTIVIRE] = 0x8d3058c,
		[SPECIES_MAGMORTAR] = 0x8d3058c,
		[SPECIES_TOGEKISS] = 0x8d3058c,
		[SPECIES_YANMEGA] = 0x8d3058c,
		[SPECIES_LEAFEON] = 0x8d3058c,
		[SPECIES_GLACEON] = 0x8d3058c,
		[SPECIES_GLISCOR] = 0x8d3058c,
		[SPECIES_MAMOSWINE] = 0x8d3058c,
		[SPECIES_PORYGON_Z] = 0x8d3058c,
		[SPECIES_GALLADE] = 0x8d3058c,
		[SPECIES_PROBOPASS] = 0x8d3058c,
		[SPECIES_DUSKNOIR] = 0x8d3058c,
		[SPECIES_FROSLASS] = 0x8d3058c,
		[SPECIES_ROTOM] = 0x8d3058c,
		[SPECIES_UXIE] = 0x8d3058c,
		[SPECIES_MESPRIT] = 0x8d3058c,
		[SPECIES_AZELF] = 0x8d3058c,
		[SPECIES_DIALGA] = 0x8d3058c,
		[SPECIES_PALKIA] = 0x8d3058c,
		[SPECIES_HEATRAN] = 0x8d3058c,
		[SPECIES_REGIGIGAS] = 0x8d3058c,
		[SPECIES_GIRATINA] = 0x8d3058c,
		[SPECIES_CRESSELIA] = 0x8d3058c,
		[SPECIES_PHIONE] = 0x8d3058c,
		[SPECIES_MANAPHY] = 0x8d3058c,
		[SPECIES_DARKRAI] = 0x8d3058c,
		[SPECIES_SHAYMIN] = 0x8d3058c,
		[SPECIES_ARCEUS] = 0x8d3058c,
		[SPECIES_VICTINI] = 0x8d3058c,
		[SPECIES_SNIVY] = 0x8d3058c,
		[SPECIES_SERVINE] = 0x8d3058c,
		[SPECIES_SERPERIOR] = 0x8d3058c,
		[SPECIES_TEPIG] = 0x8d3058c,
		[SPECIES_PIGNITE] = 0x8d3058c,
		[SPECIES_EMBOAR] = 0x8d3058c,
		[SPECIES_OSHAWOTT] = 0x8d3058c,
		[SPECIES_DEWOTT] = 0x8d3058c,
		[SPECIES_SAMUROTT] = 0x8d3058c,
		[SPECIES_PATRAT] = 0x8d3058c,
		[SPECIES_WATCHOG] = 0x8d3058c,
		[SPECIES_LILLIPUP] = 0x8d3058c,
		[SPECIES_HERDIER] = 0x8d3058c,
		[SPECIES_STOUTLAND] = 0x8d3058c,
		[SPECIES_PURRLOIN] = 0x8d3058c,
		[SPECIES_LIEPARD] = 0x8d3058c,
		[SPECIES_PANSAGE] = 0x8d3058c,
		[SPECIES_SIMISAGE] = 0x8d3058c,
		[SPECIES_PANSEAR] = 0x8d3058c,
		[SPECIES_SIMISEAR] = 0x8d3058c,
		[SPECIES_PANPOUR] = 0x8d3058c,
		[SPECIES_SIMIPOUR] = 0x8d3058c,
		[SPECIES_MUNNA] = 0x8d3058c,
		[SPECIES_MUSHARNA] = 0x8d3058c,
		[SPECIES_PIDOVE] = 0x8d3058c,
		[SPECIES_TRANQUILL] = 0x8d3058c,
		[SPECIES_UNFEZANT] = 0x8d3058c,
		[SPECIES_BLITZLE] = 0x8d3058c,
		[SPECIES_ZEBSTRIKA] = 0x8d3058c,
		[SPECIES_ROGGENROLA] = 0x8d3058c,
		[SPECIES_BOLDORE] = 0x8d3058c,
		[SPECIES_GIGALITH] = 0x8d3058c,
		[SPECIES_WOOBAT] = 0x8d3058c,
		[SPECIES_SWOOBAT] = 0x8d3058c,
		[SPECIES_DRILBUR] = 0x8d3058c,
		[SPECIES_EXCADRILL] = 0x8d3058c,
		[SPECIES_AUDINO] = 0x8d3058c,
		[SPECIES_TIMBURR] = 0x8d3058c,
		[SPECIES_GURDURR] = 0x8d3058c,
		[SPECIES_CONKELDURR] = 0x8d3058c,
		[SPECIES_TYMPOLE] = 0x8d3058c,
		[SPECIES_PALPITOAD] = 0x8d3058c,
		[SPECIES_SEISMITOAD] = 0x8d3058c,
		[SPECIES_THROH] = 0x8d3058c,
		[SPECIES_SAWK] = 0x8d3058c,
		[SPECIES_SEWADDLE] = 0x8d3058c,
		[SPECIES_SWADLOON] = 0x8d3058c,
		[SPECIES_LEAVANNY] = 0x8d3058c,
		[SPECIES_VENIPEDE] = 0x8d3058c,
		[SPECIES_WHIRLIPEDE] = 0x8d3058c,
		[SPECIES_SCOLIPEDE] = 0x8d3058c,
		[SPECIES_COTTONEE] = 0x8d3058c,
		[SPECIES_WHIMSICOTT] = 0x8d3058c,
		[SPECIES_PETILIL] = 0x8d3058c,
		[SPECIES_LILLIGANT] = 0x8d3058c,
		[SPECIES_BASCULIN_RED] = 0x8d3058c,
		[SPECIES_SANDILE] = 0x8d3058c,
		[SPECIES_KROKOROK] = 0x8d3058c,
		[SPECIES_KROOKODILE] = 0x8d3058c,
		[SPECIES_DARUMAKA] = 0x8d3058c,
		[SPECIES_DARMANITAN] = 0x8d3058c,
		[SPECIES_MARACTUS] = 0x8d3058c,
		[SPECIES_DWEBBLE] = 0x8d3058c,
		[SPECIES_CRUSTLE] = 0x8d3058c,
		[SPECIES_SCRAGGY] = 0x8d3058c,
		[SPECIES_SCRAFTY] = 0x8d3058c,
		[SPECIES_SIGILYPH] = 0x8d3058c,
		[SPECIES_YAMASK] = 0x8d3058c,
		[SPECIES_COFAGRIGUS] = 0x8d3058c,
		[SPECIES_TIRTOUGA] = 0x8d3058c,
		[SPECIES_CARRACOSTA] = 0x8d3058c,
		[SPECIES_ARCHEN] = 0x8d3058c,
		[SPECIES_ARCHEOPS] = 0x8d3058c,
		[SPECIES_TRUBBISH] = 0x8d3058c,
		[SPECIES_GARBODOR] = 0x8d3058c,
		[SPECIES_ZORUA] = 0x8d3058c,
		[SPECIES_ZOROARK] = 0x8d3058c,
		[SPECIES_MINCCINO] = 0x8d3058c,
		[SPECIES_CINCCINO] = 0x8d3058c,
		[SPECIES_GOTHITA] = 0x8d3058c,
		[SPECIES_GOTHORITA] = 0x8d3058c,
		[SPECIES_GOTHITELLE] = 0x8d3058c,
		[SPECIES_SOLOSIS] = 0x8d3058c,
		[SPECIES_DUOSION] = 0x8d3058c,
		[SPECIES_REUNICLUS] = 0x8d3058c,
		[SPECIES_DUCKLETT] = 0x8d3058c,
		[SPECIES_SWANNA] = 0x8d3058c,
		[SPECIES_VANILLITE] = 0x8d3058c,
		[SPECIES_VANILLISH] = 0x8d3058c,
		[SPECIES_VANILLUXE] = 0x8d3058c,
		[SPECIES_DEERLING] = 0x8d3058c,
		[SPECIES_SAWSBUCK] = 0x8d3058c,
		[SPECIES_EMOLGA] = 0x8d3058c,
		[SPECIES_KARRABLAST] = 0x8d3058c,
		[SPECIES_ESCAVALIER] = 0x8d3058c,
		[SPECIES_FOONGUS] = 0x8d3058c,
		[SPECIES_AMOONGUSS] = 0x8d3058c,
		[SPECIES_FRILLISH] = 0x8d3058c,
		[SPECIES_JELLICENT] = 0x8d3058c,
		[SPECIES_ALOMOMOLA] = 0x8d3058c,
		[SPECIES_JOLTIK] = 0x8d3058c,
		[SPECIES_GALVANTULA] = 0x8d3058c,
		[SPECIES_FERROSEED] = 0x8d3058c,
		[SPECIES_FERROTHORN] = 0x8d3058c,
		[SPECIES_KLINK] = 0x8d3058c,
		[SPECIES_KLANG] = 0x8d3058c,
		[SPECIES_KLINKLANG] = 0x8d3058c,
		[SPECIES_TYNAMO] = 0x8d3058c,
		[SPECIES_EELEKTRIK] = 0x8d3058c,
		[SPECIES_EELEKTROSS] = 0x8d3058c,
		[SPECIES_ELGYEM] = 0x8d3058c,
		[SPECIES_BEHEEYEM] = 0x8d3058c,
		[SPECIES_LITWICK] = 0x8d3058c,
		[SPECIES_LAMPENT] = 0x8d3058c,
		[SPECIES_CHANDELURE] = 0x8d3058c,
		[SPECIES_AXEW] = 0x8d3058c,
		[SPECIES_FRAXURE] = 0x8d3058c,
		[SPECIES_HAXORUS] = 0x8d3058c,
		[SPECIES_CUBCHOO] = 0x8d3058c,
		[SPECIES_BEARTIC] = 0x8d3058c,
		[SPECIES_CRYOGONAL] = 0x8d3058c,
		[SPECIES_SHELMET] = 0x8d3058c,
		[SPECIES_ACCELGOR] = 0x8d3058c,
		[SPECIES_STUNFISK] = 0x8d3058c,
		[SPECIES_MIENFOO] = 0x8d3058c,
		[SPECIES_MIENSHAO] = 0x8d3058c,
		[SPECIES_DRUDDIGON] = 0x8d3058c,
		[SPECIES_GOLETT] = 0x8d3058c,
		[SPECIES_GOLURK] = 0x8d3058c,
		[SPECIES_PAWNIARD] = 0x8d3058c,
		[SPECIES_BISHARP] = 0x8d3058c,
		[SPECIES_BOUFFALANT] = 0x8d3058c,
		[SPECIES_RUFFLET] = 0x8d3058c,
		[SPECIES_BRAVIARY] = 0x8d3058c,
		[SPECIES_VULLABY] = 0x8d3058c,
		[SPECIES_MANDIBUZZ] = 0x8d3058c,
		[SPECIES_HEATMOR] = 0x8d3058c,
		[SPECIES_DURANT] = 0x8d3058c,
		[SPECIES_DEINO] = 0x8d3058c,
		[SPECIES_ZWEILOUS] = 0x8d3058c,
		[SPECIES_HYDREIGON] = 0x8d3058c,
		[SPECIES_LARVESTA] = 0x8d3058c,
		[SPECIES_VOLCARONA] = 0x8d3058c,
		[SPECIES_COBALION] = 0x8d3058c,
		[SPECIES_TERRAKION] = 0x8d3058c,
		[SPECIES_VIRIZION] = 0x8d3058c,
		[SPECIES_TORNADUS] = 0x8d3058c,
		[SPECIES_THUNDURUS] = 0x8d3058c,
		[SPECIES_RESHIRAM] = 0x8d3058c,
		[SPECIES_ZEKROM] = 0x8d3058c,
		[SPECIES_LANDORUS] = 0x8d3058c,
		[SPECIES_KYUREM] = 0x8d3058c,
		[SPECIES_KELDEO] = 0x8d3058c,
		[SPECIES_MELOETTA] = 0x8d3058c,
		[SPECIES_GENESECT] = 0x8d3058c,
		[SPECIES_UNFEZANT_F] = 0x8d3058c,
		[SPECIES_FRILLISH_F] = 0x8d3058c,
		[SPECIES_JELLICENT_F] = 0x8d3058c,
		[SPECIES_SHADOW_WARRIOR] = 0x8d3058c,
		[SPECIES_BURMY_SANDY] = 0x8d3058c,
		[SPECIES_BURMY_TRASH] = 0x8d3058c,
		[SPECIES_WORMADAM_SANDY] = 0x8d3058c,
		[SPECIES_WORMADAM_TRASH] = 0x8d3058c,
		[SPECIES_SHELLOS_EAST] = 0x8d3058c,
		[SPECIES_GASTRODON_EAST] = 0x8d3058c,
		[SPECIES_ROTOM_HEAT] = 0x8d3058c,
		[SPECIES_ROTOM_WASH] = 0x8d3058c,
		[SPECIES_ROTOM_FROST] = 0x8d3058c,
		[SPECIES_ROTOM_FAN] = 0x8d3058c,
		[SPECIES_ROTOM_MOW] = 0x8d3058c,
		[SPECIES_GIRATINA_ORIGIN] = 0x8d3058c,
		[SPECIES_SHAYMIN_SKY] = 0x8d3058c,
		[SPECIES_ARCEUS_FIGHT] = 0x8d3058c,
		[SPECIES_ARCEUS_FLYING] = 0x8d3058c,
		[SPECIES_ARCEUS_POISON] = 0x8d3058c,
		[SPECIES_ARCEUS_GROUND] = 0x8d3058c,
		[SPECIES_ARCEUS_ROCK] = 0x8d3058c,
		[SPECIES_ARCEUS_BUG] = 0x8d3058c,
		[SPECIES_ARCEUS_GHOST] = 0x8d3058c,
		[SPECIES_ARCEUS_STEEL] = 0x8d3058c,
		[SPECIES_ARCEUS_FIRE] = 0x8d3058c,
		[SPECIES_ARCEUS_WATER] = 0x8d3058c,
		[SPECIES_ARCEUS_GRASS] = 0x8d3058c,
		[SPECIES_ARCEUS_ELECTRIC] = 0x8d3058c,
		[SPECIES_ARCEUS_PSYCHIC] = 0x8d3058c,
		[SPECIES_ARCEUS_ICE] = 0x8d3058c,
		[SPECIES_ARCEUS_DRAGON] = 0x8d3058c,
		[SPECIES_ARCEUS_DARK] = 0x8d3058c,
		[SPECIES_BASCULIN_BLUE] = 0x8d3058c,
		[SPECIES_DARMANITANZEN] = 0x8d3058c,
		[SPECIES_DEERLING_SUMMER] = 0x8d3058c,
		[SPECIES_DEERLING_AUTUMN] = 0x8d3058c,
		[SPECIES_DEERLING_WINTER] = 0x8d3058c,
		[SPECIES_SAWSBUCK_SUMMER] = 0x8d3058c,
		[SPECIES_SAWSBUCK_AUTUMN] = 0x8d3058c,
		[SPECIES_SAWSBUCK_WINTER] = 0x8d3058c,
		[SPECIES_HIPPOPOTAS_F] = 0x8d3058c,
		[SPECIES_HIPPOWDON_F] = 0x8d3058c,
		[SPECIES_MELOETTA_PIROUETTE] = 0x8d3058c,
		[SPECIES_GENESECT_SHOCK] = 0x8d3058c,
		[SPECIES_GENESECT_BURN] = 0x8d3058c,
		[SPECIES_GENESECT_CHILL] = 0x8d3058c,
		[SPECIES_GENESECT_DOUSE] = 0x8d3058c,
		[SPECIES_CHERRIM_SUN] = 0x8d3058c,
		[SPECIES_KYUREM_BLACK] = 0x8d3058c,
		[SPECIES_KYUREM_WHITE] = 0x8d3058c,
		[SPECIES_TORNADUS_THERIAN] = 0x8d3058c,
		[SPECIES_THUNDURUS_THERIAN] = 0x8d3058c,
		[SPECIES_LANDORUS_THERIAN] = 0x8d3058c,
		[SPECIES_KELDEO_RESOLUTE] = 0x8d3058c,
		[SPECIES_CHESPIN] = 0x8d3058c,
		[SPECIES_QUILLADIN] = 0x8d3058c,
		[SPECIES_CHESNAUGHT] = 0x8d3058c,
		[SPECIES_FENNEKIN] = 0x8d3058c,
		[SPECIES_BRAIXEN] = 0x8d3058c,
		[SPECIES_DELPHOX] = 0x8d3058c,
		[SPECIES_FROAKIE] = 0x8d3058c,
		[SPECIES_FROGADIER] = 0x8d3058c,
		[SPECIES_GRENINJA] = 0x8d3058c,
		[SPECIES_BUNNELBY] = 0x8d3058c,
		[SPECIES_DIGGERSBY] = 0x8d3058c,
		[SPECIES_FLETCHLING] = 0x8d3058c,
		[SPECIES_FLETCHINDER] = 0x8d3058c,
		[SPECIES_TALONFLAME] = 0x8d3058c,
		[SPECIES_SCATTERBUG] = 0x8d3058c,
		[SPECIES_SPEWPA] = 0x8d3058c,
		[SPECIES_VIVILLON] = 0x8d3058c,
		[SPECIES_LITLEO] = 0x8d3058c,
		[SPECIES_PYROAR] = 0x8d3058c,
		[SPECIES_FLABEBE] = 0x8d3058c,
		[SPECIES_FLOETTE] = 0x8d3058c,
		[SPECIES_FLORGES] = 0x8d3058c,
		[SPECIES_SKIDDO] = 0x8d3058c,
		[SPECIES_GOGOAT] = 0x8d3058c,
		[SPECIES_PANCHAM] = 0x8d3058c,
		[SPECIES_PANGORO] = 0x8d3058c,
		[SPECIES_FURFROU] = 0x8d3058c,
		[SPECIES_ESPURR] = 0x8d3058c,
		[SPECIES_MEOWSTIC] = 0x8d3058c,
		[SPECIES_HONEDGE] = 0x8d3058c,
		[SPECIES_DOUBLADE] = 0x8d3058c,
		[SPECIES_AEGISLASH] = 0x8d3058c,
		[SPECIES_SPRITZEE] = 0x8d3058c,
		[SPECIES_AROMATISSE] = 0x8d3058c,
		[SPECIES_SWIRLIX] = 0x8d3058c,
		[SPECIES_SLURPUFF] = 0x8d3058c,
		[SPECIES_INKAY] = 0x8d3058c,
		[SPECIES_MALAMAR] = 0x8d3058c,
		[SPECIES_BINACLE] = 0x8d3058c,
		[SPECIES_BARBARACLE] = 0x8d3058c,
		[SPECIES_SKRELP] = 0x8d3058c,
		[SPECIES_DRAGALGE] = 0x8d3058c,
		[SPECIES_CLAUNCHER] = 0x8d3058c,
		[SPECIES_CLAWITZER] = 0x8d3058c,
		[SPECIES_HELIOPTILE] = 0x8d3058c,
		[SPECIES_HELIOLISK] = 0x8d3058c,
		[SPECIES_TYRUNT] = 0x8d3058c,
		[SPECIES_TYRANTRUM] = 0x8d3058c,
		[SPECIES_AMAURA] = 0x8d3058c,
		[SPECIES_AURORUS] = 0x8d3058c,
		[SPECIES_SYLVEON] = 0x8d3058c,
		[SPECIES_HAWLUCHA] = 0x8d3058c,
		[SPECIES_DEDENNE] = 0x8d3058c,
		[SPECIES_CARBINK] = 0x8d3058c,
		[SPECIES_GOOMY] = 0x8d3058c,
		[SPECIES_SLIGGOO] = 0x8d3058c,
		[SPECIES_GOODRA] = 0x8d3058c,
		[SPECIES_KLEFKI] = 0x8d3058c,
		[SPECIES_PHANTUMP] = 0x8d3058c,
		[SPECIES_TREVENANT] = 0x8d3058c,
		[SPECIES_PUMPKABOO] = 0x8d3058c,
		[SPECIES_GOURGEIST] = 0x8d3058c,
		[SPECIES_BERGMITE] = 0x8d3058c,
		[SPECIES_AVALUGG] = 0x8d3058c,
		[SPECIES_NOIBAT] = 0x8d3058c,
		[SPECIES_NOIVERN] = 0x8d3058c,
		[SPECIES_XERNEAS] = 0x8d3058c,
		[SPECIES_YVELTAL] = 0x8d3058c,
		[SPECIES_ZYGARDE] = 0x8d3058c,
		[SPECIES_DIANCIE] = 0x8d3058c,
		[SPECIES_HOOPA] = 0x8d3058c,
		[SPECIES_HOOPA_UNBOUND] = 0x8d3058c,
		[SPECIES_VOLCANION] = 0x8d3058c,
		[SPECIES_PYROAR_FEMALE] = 0x8d3058c,
		[SPECIES_MEOWSTIC_FEMALE] = 0x8d3058c,
		[SPECIES_AEGISLASH_BLADE] = 0x8d3058c,
		[SPECIES_ARCEUS_FAIRY] = 0x8d3058c,
		[SPECIES_ZYGARDE_CELL] = 0x8d3058c,
		[SPECIES_ZYGARDE_CORE] = 0x8d3058c,
		[SPECIES_ZYGARDE_10] = 0x8d3058c,
		[SPECIES_ZYGARDE_COMPLETE] = 0x8d3058c,
		[SPECIES_ASHGRENINJA] = 0x8d3058c,
		[SPECIES_FLABEBE_BLUE] = 0x8d3058c,
		[SPECIES_FLABEBE_ORANGE] = 0x8d3058c,
		[SPECIES_FLABEBE_YELLOW] = 0x8d3058c,
		[SPECIES_FLABEBE_WHITE] = 0x8d3058c,
		[SPECIES_FLOETTE_BLUE] = 0x8d3058c,
		[SPECIES_FLOETTE_ORANGE] = 0x8d3058c,
		[SPECIES_FLOETTE_YELLOW] = 0x8d3058c,
		[SPECIES_FLOETTE_WHITE] = 0x8d3058c,
		[SPECIES_FLOETTE_ETERNAL] = 0x8d3058c,
		[SPECIES_FLORGES_BLUE] = 0x8d3058c,
		[SPECIES_FLORGES_ORANGE] = 0x8d3058c,
		[SPECIES_FLORGES_YELLOW] = 0x8d3058c,
		[SPECIES_FLORGES_WHITE] = 0x8d3058c,
		[SPECIES_PUMPKABOO_XL] = 0x8d3058c,
		[SPECIES_PUMPKABOO_L] = 0x8d3058c,
		[SPECIES_PUMPKABOO_M] = 0x8d3058c,
		[SPECIES_GOURGEIST_XL] = 0x8d3058c,
		[SPECIES_GOURGEIST_L] = 0x8d3058c,
		[SPECIES_GOURGEIST_M] = 0x8d3058c,
		[SPECIES_FURFROU_HEART] = 0x8d3058c,
		[SPECIES_FURFROU_DIAMOND] = 0x8d3058c,
		[SPECIES_FURFROU_STAR] = 0x8d3058c,
		[SPECIES_FURFROU_PHAROAH] = 0x8d3058c,
		[SPECIES_FURFROU_KABUKI] = 0x8d3058c,
		[SPECIES_FURFROU_LA_REINE] = 0x8d3058c,
		[SPECIES_FURFROU_MATRON] = 0x8d3058c,
		[SPECIES_FURFROU_DANDY] = 0x8d3058c,
		[SPECIES_FURFROU_DEBUTANTE] = 0x8d3058c,
		[SPECIES_VIVILLON_FANCY] = 0x8d3058c,
		[SPECIES_VENUSAUR_MEGA] = 0x8d3058c,
		[SPECIES_CHARIZARD_MEGA_X] = 0x8d3058c,
		[SPECIES_CHARIZARD_MEGA_Y] = 0x8d3058c,
		[SPECIES_BLASTOISE_MEGA] = 0x8d3058c,
		[SPECIES_BEEDRILL_MEGA] = 0x8d3058c,
		[SPECIES_PIDGEOT_MEGA] = 0x8d3058c,
		[SPECIES_ALAKAZAM_MEGA] = 0x8d3058c,
		[SPECIES_SLOWBRO_MEGA] = 0x8d3058c,
		[SPECIES_GENGAR_MEGA] = 0x8d3058c,
		[SPECIES_KANGASKHAN_MEGA] = 0x8d3058c,
		[SPECIES_PINSIR_MEGA] = 0x8d3058c,
		[SPECIES_GYARADOS_MEGA] = 0x8d3058c,
		[SPECIES_AERODACTYL_MEGA] = 0x8d3058c,
		[SPECIES_MEWTWO_MEGA_X] = 0x8d3058c,
		[SPECIES_MEWTWO_MEGA_Y] = 0x8d3058c,
		[SPECIES_AMPHAROS_MEGA] = 0x8d3058c,
		[SPECIES_STEELIX_MEGA] = 0x8d3058c,
		[SPECIES_SCIZOR_MEGA] = 0x8d3058c,
		[SPECIES_HERACROSS_MEGA] = 0x8d3058c,
		[SPECIES_HOUNDOOM_MEGA] = 0x8d3058c,
		[SPECIES_TYRANITAR_MEGA] = 0x8d3058c,
		[SPECIES_SCEPTILE_MEGA] = 0x8d3058c,
		[SPECIES_BLAZIKEN_MEGA] = 0x8d3058c,
		[SPECIES_SWAMPERT_MEGA] = 0x8d3058c,
		[SPECIES_GARDEVOIR_MEGA] = 0x8d3058c,
		[SPECIES_SABLEYE_MEGA] = 0x8d3058c,
		[SPECIES_MAWILE_MEGA] = 0x8d3058c,
		[SPECIES_AGGRON_MEGA] = 0x8d3058c,
		[SPECIES_MEDICHAM_MEGA] = 0x8d3058c,
		[SPECIES_MANECTRIC_MEGA] = 0x8d3058c,
		[SPECIES_SHARPEDO_MEGA] = 0x8d3058c,
		[SPECIES_CAMERUPT_MEGA] = 0x8d3058c,
		[SPECIES_ALTARIA_MEGA] = 0x8d3058c,
		[SPECIES_BANETTE_MEGA] = 0x8d3058c,
		[SPECIES_ABSOL_MEGA] = 0x8d3058c,
		[SPECIES_GLALIE_MEGA] = 0x8d3058c,
		[SPECIES_SALAMENCE_MEGA] = 0x8d3058c,
		[SPECIES_METAGROSS_MEGA] = 0x8d3058c,
		[SPECIES_LATIAS_MEGA] = 0x8d3058c,
		[SPECIES_LATIOS_MEGA] = 0x8d3058c,
		[SPECIES_GROUDON_PRIMAL] = 0x8d3058c,
		[SPECIES_KYOGRE_PRIMAL] = 0x8d3058c,
		[SPECIES_RAYQUAZA_MEGA] = 0x8d3058c,
		[SPECIES_LOPUNNY_MEGA] = 0x8d3058c,
		[SPECIES_GARCHOMP_MEGA] = 0x8d3058c,
		[SPECIES_LUCARIO_MEGA] = 0x8d3058c,
		[SPECIES_ABOMASNOW_MEGA] = 0x8d3058c,
		[SPECIES_GALLADE_MEGA] = 0x8d3058c,
		[SPECIES_AUDINO_MEGA] = 0x8d3058c,
		[SPECIES_DIANCIE_MEGA] = 0x8d3058c,
		[SPECIES_DIALGA_PRIMAL] = 0x8d3058c,
		[SPECIES_PALKIA_PRIMAL] = 0x8d3058c,
		[SPECIES_VIVILLON_ARCHIPELAGO] = 0x8d3058c,
		[SPECIES_VIVILLON_CONTINENTAL] = 0x8d3058c,
		[SPECIES_VIVILLON_ELEGANT] = 0x8d3058c,
		[SPECIES_VIVILLON_GARDEN] = 0x8d3058c,
		[SPECIES_VIVILLON_HIGH_PLAINS] = 0x8d3058c,
		[SPECIES_VIVILLON_ICY_SNOW] = 0x8d3058c,
		[SPECIES_VIVILLON_JUNGLE] = 0x8d3058c,
		[SPECIES_VIVILLON_MARINE] = 0x8d3058c,
		[SPECIES_VIVILLON_MODERN] = 0x8d3058c,
		[SPECIES_VIVILLON_MONSOON] = 0x8d3058c,
		[SPECIES_VIVILLON_OCEAN] = 0x8d3058c,
		[SPECIES_VIVILLON_POKEBALL] = 0x8d3058c,
		[SPECIES_VIVILLON_POLAR] = 0x8d3058c,
		[SPECIES_VIVILLON_RIVER] = 0x8d3058c,
		[SPECIES_VIVILLON_SANDSTORM] = 0x8d3058c,
		[SPECIES_VIVILLON_SAVANNA] = 0x8d3058c,
		[SPECIES_VIVILLON_SUN] = 0x8d3058c,
		[SPECIES_VIVILLON_TUNDRA] = 0x8d3058c,
		[SPECIES_ROWLET] = 0x8d3058c,
		[SPECIES_DARTRIX] = 0x8d3058c,
		[SPECIES_DECIDUEYE] = 0x8d3058c,
		[SPECIES_LITTEN] = 0x8d3058c,
		[SPECIES_TORRACAT] = 0x8d3058c,
		[SPECIES_INCINEROAR] = 0x8d3058c,
		[SPECIES_POPPLIO] = 0x8d3058c,
		[SPECIES_BRIONNE] = 0x8d3058c,
		[SPECIES_PRIMARINA] = 0x8d3058c,
		[SPECIES_PIKIPEK] = 0x8d3058c,
		[SPECIES_TRUMBEAK] = 0x8d3058c,
		[SPECIES_TOUCANNON] = 0x8d3058c,
		[SPECIES_YUNGOOS] = 0x8d3058c,
		[SPECIES_GUMSHOOS] = 0x8d3058c,
		[SPECIES_GRUBBIN] = 0x8d3058c,
		[SPECIES_CHARJABUG] = 0x8d3058c,
		[SPECIES_VIKAVOLT] = 0x8d3058c,
		[SPECIES_CRABRAWLER] = 0x8d3058c,
		[SPECIES_CRABOMINABLE] = 0x8d3058c,
		[SPECIES_ORICORIO] = 0x8d3058c,
		[SPECIES_CUTIEFLY] = 0x8d3058c,
		[SPECIES_RIBOMBEE] = 0x8d3058c,
		[SPECIES_ROCKRUFF] = 0x8d3058c,
		[SPECIES_LYCANROC] = 0x8d3058c,
		[SPECIES_WISHIWASHI] = 0x8d3058c,
		[SPECIES_MAREANIE] = 0x8d3058c,
		[SPECIES_TOXAPEX] = 0x8d3058c,
		[SPECIES_MUDBRAY] = 0x8d3058c,
		[SPECIES_MUDSDALE] = 0x8d3058c,
		[SPECIES_DEWPIDER] = 0x8d3058c,
		[SPECIES_ARAQUANID] = 0x8d3058c,
		[SPECIES_FOMANTIS] = 0x8d3058c,
		[SPECIES_LURANTIS] = 0x8d3058c,
		[SPECIES_MORELULL] = 0x8d3058c,
		[SPECIES_SHIINOTIC] = 0x8d3058c,
		[SPECIES_SALANDIT] = 0x8d3058c,
		[SPECIES_SALAZZLE] = 0x8d3058c,
		[SPECIES_STUFFUL] = 0x8d3058c,
		[SPECIES_BEWEAR] = 0x8d3058c,
		[SPECIES_BOUNSWEET] = 0x8d3058c,
		[SPECIES_STEENEE] = 0x8d3058c,
		[SPECIES_TSAREENA] = 0x8d3058c,
		[SPECIES_COMFEY] = 0x8d3058c,
		[SPECIES_ORANGURU] = 0x8d3058c,
		[SPECIES_PASSIMIAN] = 0x8d3058c,
		[SPECIES_WIMPOD] = 0x8d3058c,
		[SPECIES_GOLISOPOD] = 0x8d3058c,
		[SPECIES_SANDYGAST] = 0x8d3058c,
		[SPECIES_PALOSSAND] = 0x8d3058c,
		[SPECIES_PYUKUMUKU] = 0x8d3058c,
		[SPECIES_TYPE_NULL] = 0x8d3058c,
		[SPECIES_SILVALLY] = 0x8d3058c,
		[SPECIES_MINIOR_SHIELD] = 0x8d3058c,
		[SPECIES_KOMALA] = 0x8d3058c,
		[SPECIES_TURTONATOR] = 0x8d3058c,
		[SPECIES_TOGEDEMARU] = 0x8d3058c,
		[SPECIES_MIMIKYU] = 0x8d3058c,
		[SPECIES_BRUXISH] = 0x8d3058c,
		[SPECIES_DRAMPA] = 0x8d3058c,
		[SPECIES_DHELMISE] = 0x8d3058c,
		[SPECIES_JANGMO_O] = 0x8d3058c,
		[SPECIES_HAKAMO_O] = 0x8d3058c,
		[SPECIES_KOMMO_O] = 0x8d3058c,
		[SPECIES_TAPU_KOKO] = 0x8d3058c,
		[SPECIES_TAPU_LELE] = 0x8d3058c,
		[SPECIES_TAPU_BULU] = 0x8d3058c,
		[SPECIES_TAPU_FINI] = 0x8d3058c,
		[SPECIES_COSMOG] = 0x8d3058c,
		[SPECIES_COSMOEM] = 0x8d3058c,
		[SPECIES_SOLGALEO] = 0x8d3058c,
		[SPECIES_LUNALA] = 0x8d3058c,
		[SPECIES_NIHILEGO] = 0x8d3058c,
		[SPECIES_BUZZWOLE] = 0x8d3058c,
		[SPECIES_PHEROMOSA] = 0x8d3058c,
		[SPECIES_XURKITREE] = 0x8d3058c,
		[SPECIES_CELESTEELA] = 0x8d3058c,
		[SPECIES_KARTANA] = 0x8d3058c,
		[SPECIES_GUZZLORD] = 0x8d3058c,
		[SPECIES_NECROZMA] = 0x8d3058c,
		[SPECIES_MAGEARNA] = 0x8d3058c,
		[SPECIES_MARSHADOW] = 0x8d3058c,
		[SPECIES_RATTATA_A] = 0x8d3058c,
		[SPECIES_RATICATE_A] = 0x8d3058c,
		[SPECIES_RAICHU_A] = 0x8d3058c,
		[SPECIES_SANDSHREW_A] = 0x8d3058c,
		[SPECIES_SANDSLASH_A] = 0x8d3058c,
		[SPECIES_VULPIX_A] = 0x8d3058c,
		[SPECIES_NINETALES_A] = 0x8d3058c,
		[SPECIES_DIGLETT_A] = 0x8d3058c,
		[SPECIES_DUGTRIO_A] = 0x8d3058c,
		[SPECIES_MEOWTH_A] = 0x8d3058c,
		[SPECIES_PERSIAN_A] = 0x8d3058c,
		[SPECIES_GEODUDE_A] = 0x8d3058c,
		[SPECIES_GRAVELER_A] = 0x8d3058c,
		[SPECIES_GOLEM_A] = 0x8d3058c,
		[SPECIES_GRIMER_A] = 0x8d3058c,
		[SPECIES_MUK_A] = 0x8d3058c,
		[SPECIES_EXEGGCUTE_A] = 0x8d3058c,
		[SPECIES_EXEGGUTOR_A] = 0x8d3058c,
		[SPECIES_CUBONE_A] = 0x8d3058c,
		[SPECIES_MAROWAK_A] = 0x8d3058c,
		[SPECIES_DEOXYS_ATTACK] = 0x8d3058c,
		[SPECIES_DEOXYS_DEFENSE] = 0x8d3058c,
		[SPECIES_DEOXYS_SPEED] = 0x8d3058c,
		[SPECIES_ORICORIO_Y] = 0x8d3058c,
		[SPECIES_ORICORIO_P] = 0x8d3058c,
		[SPECIES_ORICORIO_S] = 0x8d3058c,
		[SPECIES_LYCANROC_N] = 0x8d3058c,
		[SPECIES_WISHIWASHI_S] = 0x8d3058c,
		[SPECIES_SILVALLY_FIGHT] = 0x8d3058c,
		[SPECIES_SILVALLY_FLYING] = 0x8d3058c,
		[SPECIES_SILVALLY_POISON] = 0x8d3058c,
		[SPECIES_SILVALLY_GROUND] = 0x8d3058c,
		[SPECIES_SILVALLY_ROCK] = 0x8d3058c,
		[SPECIES_SILVALLY_BUG] = 0x8d3058c,
		[SPECIES_SILVALLY_GHOST] = 0x8d3058c,
		[SPECIES_SILVALLY_STEEL] = 0x8d3058c,
		[SPECIES_SILVALLY_FIRE] = 0x8d3058c,
		[SPECIES_SILVALLY_WATER] = 0x8d3058c,
		[SPECIES_SILVALLY_GRASS] = 0x8d3058c,
		[SPECIES_SILVALLY_ELECTRIC] = 0x8d3058c,
		[SPECIES_SILVALLY_PSYCHIC] = 0x8d3058c,
		[SPECIES_SILVALLY_ICE] = 0x8d3058c,
		[SPECIES_SILVALLY_DRAGON] = 0x8d3058c,
		[SPECIES_SILVALLY_DARK] = 0x8d3058c,
		[SPECIES_SILVALLY_FAIRY] = 0x8d3058c,
		[SPECIES_MINIOR_RED] = 0x8d3058c,
		[SPECIES_MINIOR_BLUE] = 0x8d3058c,
		[SPECIES_MINIOR_ORANGE] = 0x8d3058c,
		[SPECIES_MINIOR_YELLOW] = 0x8d3058c,
		[SPECIES_MINIOR_INDIGO] = 0x8d3058c,
		[SPECIES_MINIOR_GREEN] = 0x8d3058c,
		[SPECIES_MINIOR_VIOLET] = 0x8d3058c,
		[SPECIES_MIMIKYU_BUSTED] = 0x8d3058c,
		[SPECIES_MAGEARNA_P] = 0x8d3058c,
		[SPECIES_POIPOLE] = 0x8d3058c,
		[SPECIES_NAGANADEL] = 0x8d3058c,
		[SPECIES_STAKATAKA] = 0x8d3058c,
		[SPECIES_BLACEPHALON] = 0x8d3058c,
		[SPECIES_ZERAORA] = 0x8d3058c,
		[SPECIES_NECROZMA_MANE] = 0x8d3058c,
		[SPECIES_NECROZMA_WINGS] = 0x8d3058c,
		[SPECIES_NECROZMA_ULTRA] = 0x8d3058c,
		[SPECIES_LYCANROC_DUSK] = 0x8d3058c,
		[SPECIES_PIKACHU_SURFING] = 0x8d3058c,
		[SPECIES_PIKACHU_FLYING] = 0x8d3058c,
		[SPECIES_PIKACHU_COSPLAY] = 0x8d3058c,
		[SPECIES_PIKACHU_LIBRE] = 0x8d3058c,
		[SPECIES_PIKACHU_POP_STAR] = 0x8d3058c,
		[SPECIES_PIKACHU_ROCK_STAR] = 0x8d3058c,
		[SPECIES_PIKACHU_BELLE] = 0x8d3058c,
		[SPECIES_PIKACHU_PHD] = 0x8d3058c,
		[SPECIES_PIKACHU_CAP_ORIGINAL] = 0x8d3058c,
		[SPECIES_PIKACHU_CAP_HOENN] = 0x8d3058c,
		[SPECIES_PIKACHU_CAP_SINNOH] = 0x8d3058c,
		[SPECIES_PIKACHU_CAP_UNOVA] = 0x8d3058c,
		[SPECIES_PIKACHU_CAP_KALOS] = 0x8d3058c,
		[SPECIES_PIKACHU_CAP_ALOLA] = 0x8d3058c,
		[SPECIES_PIKACHU_CAP_PARTNER] = 0x8d3058c,
		[SPECIES_PICHU_SPIKY] = 0x8d3058c,
		[SPECIES_XERNEAS_NATURAL] = 0x8d3058c,
		[SPECIES_GROOKEY] = 0x8d3058c,
		[SPECIES_THWACKEY] = 0x8d3058c,
		[SPECIES_RILLABOOM] = 0x8d3058c,
		[SPECIES_SCORBUNNY] = 0x8d3058c,
		[SPECIES_RABOOT] = 0x8d3058c,
		[SPECIES_CINDERACE] = 0x8d3058c,
		[SPECIES_SOBBLE] = 0x8d3058c,
		[SPECIES_DRIZZILE] = 0x8d3058c,
		[SPECIES_INTELEON] = 0x8d3058c,
};

#endif
