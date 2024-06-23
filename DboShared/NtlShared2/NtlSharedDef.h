#pragma once

#include "NtlVector.h"

//----------------------------------------------------------------------------
// client version

#define	CLIENT_LVER		1
#define CLIENT_RVER		20


// Entire Server Connection Structure
#define NTL_MAX_COUNT_CHARACTER_SERVER					(10)
//#define NTL_MAX_SIZE_SERVER_FARM_NAME					(32)
#define NTL_MAX_SIZE_SERVER_FARM_NAME_UNICODE			(32)
//#define NTL_MAX_SIZE_SERVER_CHANNEL_NAME				(32)
#define NTL_MAX_SIZE_SERVER_CHANNEL_NAME_UNICODE		(32)
#define NTL_MAX_SERVER_CHANNEL_COUNT_IN_SERVER_FARM		(10)
#define NTL_MAX_GAME_FARM_SERVER						(10)

#define START_CHANNELS_COUNT							(1)
#define DOJO_CHANNEL_INDEX								(9)


// User AccountID and Password
#define NTL_MAX_SIZE_USERID								(16)
#define NTL_MAX_SIZE_USERPW								(16)
#define NTL_MAX_SIZE_USERPW_ENCRYPT						(32)


//new
#define MAX_SIZE_EMAIL_UNICODE							(64)


#define NTL_MAX_COUNT_TOOL_AUTH							(160)
#define NTL_MAX_COUNT_COMMAND_AUTH						(160)
#define NTL_MAX_COUNT_ETC_AUTH							(160)
#define NTL_MAX_SIZE_TOOL_AUTH							(int)(( NTL_MAX_COUNT_TOOL_AUTH - 1) / 8 + 1)
#define NTL_MAX_SIZE_COMMAND_AUTH						(int)(( NTL_MAX_COUNT_COMMAND_AUTH - 1) / 8 + 1)
#define NTL_MAX_SIZE_ETC_AUTH							(int)(( NTL_MAX_COUNT_ETC_AUTH - 1) / 8 + 1)
#define NTL_MAX_COUNT_TOOL_USER							(100)
#define NTL_MAX_COUNT_GM_GROUP							(20)
#define NTL_MAX_COUNT_ON_PLAY_USER						(100)

#define NTL_MAX_SIZE_AUTH_KEY							(16)
#define NTL_MAX_LENGTH_OF_IP_ADDRESS					(64)
#define NTL_MAX_LENGTH_OF_IP							(64)
#define NTL_MAX_LENGTH_OF_RECENT_DATE					(20)

#define MAX_HOST_LENGTH			(15)

#define NTL_MAX_LENGTH_OF_CHAT_MESSAGE					(256)

#define NTL_MAX_COUNT_USER_CHAR_SLOT					(8)
#define NTL_MAX_COUNT_USER_HAVE_INVEN_ITEM				NTL_MAX_BAGSLOT_COUNT + NTL_MAX_ITEM_SLOT + (NTL_MAX_BAG_ITEM_SLOT * 4) + EQUIP_SLOT_TYPE_COUNT
#define NTL_MAX_COUNT_USER_HAVE_NORMAL_BANK_ITEM		(52)
#define NTL_MAX_COUNT_USER_HAVE_PUBLIC_BANK_ITEM		(16)
#define NTL_MAX_COUNT_USER_HAVE_BANK_ITEM				(NTL_MAX_COUNT_USER_HAVE_NORMAL_BANK_ITEM + NTL_MAX_COUNT_USER_HAVE_PUBLIC_BANK_ITEM)
#define NTL_MAX_COUNT_USER_HAVE_TOTAL_ITEM				(NTL_MAX_COUNT_USER_HAVE_INVEN_ITEM + NTL_MAX_COUNT_USER_HAVE_BANK_ITEM)


#define NTL_MIN_SIZE_CHAR_NAME						(2)
#define NTL_MAX_SIZE_CHAR_NAME						(16)

#define NTL_MIN_SIZE_PARTY_NAME						(2)
#define NTL_MAX_SIZE_PARTY_NAME						(16)

#define NTL_MIN_SIZE_GUILD_NAME						(2)
#define NTL_MAX_SIZE_GUILD_NAME						(16)
#define NTL_MAX_LENGTH_OF_GUILD_NOTICE				(256)

#define NTL_MAX_LENGTH_OF_DOJO_NOTICE				(64)

#define NTL_MAX_LENGTH_MODEL_NAME						(32)

#define NTL_MAX_LENGTH_REPORT_NAME						(64) // 리포트 남길 떄 사용하는 이름의 최대길이(스킬, 아이템 몹 등등)
#define NTL_MAX_LENGTH_REPORT_NAME_UNICODE				(64)
#define NTL_MAX_LENGTH_REPORT_NAME_MUlTIBYTE_BUFFER		(512)

#define NTL_MAX_PRIVATESHOP_NAME_IN_UNICODE				(32)
#define NTL_MAX_PRIVATESHOP_NOTICE_IN_UNICODE			(64)
#define NTL_MAX_COUNT_PRIVATESHOP_ITEM					(66)

#define NTL_MAX_LENGTH_OF_MAIL_MESSAGE					(128)

#define NTL_MAX_COUNT_WAR_FOG							(80)
#define NTL_MAX_SIZE_WAR_FOG							(int)(( NTL_MAX_COUNT_WAR_FOG - 1) / 8 + 1)

#define NTL_MAX_COUNT_FRIEND							(100)		// 100 FRIEND / 100 BLACKLIST = 200 TOTAL
#define NTL_MAX_COUNT_FRIEND_PACKET						(70)		//

#define NTL_MIN_LENGTH_BUDOKAI_TEAM_NAME_IN_UNICODE		(2)
#define NTL_MAX_LENGTH_BUDOKAI_TEAM_NAME_IN_UNICODE		(20)
#define NTL_REPORT_LOG_PARAMATER_MAX					(7)

#define	NTL_MAX_SIZE_FILE_NAME							(256)
#define NTL_MAX_SIZE_LOCALSETTING_FILE					(2048)

#define NTL_MAX_SIZE_MOB_NAME							(60)

#define NTL_MAX_SIZE_WORLD_NAME							(32)
#define NTL_MAX_SIZE_WORLD_NAME_UNICODE					(32)
#define NTL_MAX_SIZE_FULL_WORLD_NAME					(64)

#define NTL_MAX_LENGTH_SKILL_NAME_TEXT					(40) // GM 툴 사용 로그에서 사용하는 크기
#define NTL_MAX_LENGTH_ITEM_NAME_TEXT					(32)
#define NTL_MAX_LENGTH_BEFORE_AFTER_STATUS				(128)

#define NTL_MAX_SIZE_TAB_NAME_IN_UNICODE				(16)


#define CREATE_CHAR_BASIC_SLOT	4
#define CREATE_CHAR_PREMIUM_SLOT	4

struct sDBO_TIME
{
	sDBO_TIME()
	{
		year = 0;
		month = 0;
		day = 0;
		hour = 0;
		minute = 0;
		second = 0;
	};

	WORD   year;
	BYTE   month;
	BYTE   day;
	BYTE   hour;
	BYTE   minute;
	BYTE   second;
};


