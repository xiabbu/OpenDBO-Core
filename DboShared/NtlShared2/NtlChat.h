#pragma once

#include "NtlSharedDef.h"

#define NTL_SAY_MESSAGE_RANGE_IN_METER		(100.0f)
#define NTL_SHOUT_MESSAGE_RANGE_IN_METER		(320.0f)


// 캐릭터 대화창 타입
enum eCHAR_DIALOG_TYPE
{
	CHAR_DIALOG_SAY,
	CHAR_DIALOG_SHOUT,
	CHAR_DIALOG_THINK,

	MAX_CHAR_DIALOG_TYPE,
	INVALID_CHAR_DIALOG,
};

enum eDBO_CHATTING_TYPE
{
	DBO_CHATTING_TYPE_GENERAL = 0,
	DBO_CHATTING_TYPE_PARTY_NOTICE,
	DBO_CHATTING_TYPE_GUILD_SCRAMBLE_NOTICE,

	DBO_CHATTING_TYPE_COUNT,

	DBO_CHATTING_TYPE_FIRST = DBO_CHATTING_TYPE_GENERAL,
	DBO_CHATTING_TYPE_LAST = DBO_CHATTING_TYPE_COUNT - 1,
};

//new
enum eDBO_USER_ON_CHANNEL
{
	DBO_USER_ON_CHANNEL_SAY = 0,
	DBO_USER_ON_CHANNEL_SHOUT,
	DBO_USER_ON_CHANNEL_WHISPER,
	DBO_USER_ON_CHANNEL_PARTY,
	DBO_USER_ON_CHANNEL_GUILD,
	DBO_USER_ON_CHANNEL_TRADE,
	DBO_USER_ON_CHANNEL_FIND_PARTY,

	DBO_USER_ON_CHANNEL_COUNT,

	DBO_USER_ON_CHANNEL_FIRST = DBO_USER_ON_CHANNEL_SAY,
	DBO_USER_ON_CHANNEL_LAST = DBO_USER_ON_CHANNEL_COUNT - 1,
};

//new
enum eDBO_BROADCASTING_MSG_TYPE
{
	DBO_BROADCASTING_MSG_TYPE_ITEMUPGRADE = 1,
	DBO_BROADCASTING_MSG_TYPE_ITEMMIX,
	DBO_BROADCASTING_MSG_TYPE_TMQ,
	DBO_BROADCASTING_MSG_TYPE_BUDOKAI,
	DBO_BROADCASTING_MSG_TYPE_CCBD,
};

struct sMSG_BROADCAST_DATA
{
	union
	{
		struct sMSG_ITEM_UPGRADE
		{
			WCHAR		wszName[NTL_MAX_SIZE_CHAR_NAME + 1];
			TBLIDX		tblidx;
			BYTE		byGrade;
		};
		struct sMSG_ITEM_MIX
		{
			WCHAR wszName[NTL_MAX_SIZE_CHAR_NAME + 1];
			TBLIDX tblidx;
		};
		struct sMSG_TMQ_RECORD
		{
			TBLIDX tblidx;
			BYTE byDifficulty;
			DWORD dwClearTime;
			BYTE byMemberCount;
			WCHAR awszMember[5][NTL_MAX_SIZE_CHAR_NAME + 1];
			bool bIsBestRecord;
		};
		struct sMSG_BUDOKAI_RECORD
		{
			WORD wSeason;
			BYTE byRank;
			BYTE byBudokaiType;
			BYTE byMatchType;
			BYTE byMemberCount;
			WCHAR awszMember[5][NTL_MAX_SIZE_CHAR_NAME + 1];
		};		
		struct sMSG_FINISH_CCBD_LAST_STAGE
		{
			BYTE byStage;
			BYTE byMemberCount;
			WCHAR awszMember[5][NTL_MAX_SIZE_CHAR_NAME + 1];
		};

		sMSG_ITEM_UPGRADE sItemUpgrade;
		sMSG_ITEM_MIX sItemMix;
		sMSG_TMQ_RECORD sTmqRecord;
		sMSG_BUDOKAI_RECORD sBudokaiRecord;		
		sMSG_FINISH_CCBD_LAST_STAGE sCCBD;
	};
};


