#pragma once

#include "NtlPacketCommon.h"
#include "NtlCSArchitecture.h"



//------------------------------------------------------------------
// Packet Enumeration
//------------------------------------------------------------------
enum eOPCODE_AU
{
	AU_OPCODE_BEGIN = 1000,

	AU_HEARTBEAT,
	AU_LOGIN_RES,
	AU_LOGIN_CREATEUSER_RES,
	AU_LOGIN_DISCONNECT_RES,
	AU_COMMERCIAL_SETTING_NFY,

	AU_OPCODE_DUMMY,
	AU_OPCODE_END = AU_OPCODE_DUMMY - 1
};


//------------------------------------------------------------------
//
//------------------------------------------------------------------
const char * NtlGetPacketName_AU(WORD wOpCode);
//------------------------------------------------------------------



#pragma pack(1)
//------------------------------------------------------------------
BEGIN_PROTOCOL(AU_LOGIN_RES)
WORD				wResultCode;
WCHAR				awchUserId[NTL_MAX_SIZE_USERID + 1];
BYTE				abyAuthKey[NTL_MAX_SIZE_AUTH_KEY];
ACCOUNTID			accountId;
SERVERFARMID		lastServerFarmId;
BYTE				lastChannelId; // TODO: Remove this one ~Nady
DWORD				dwAllowedFunctionForDeveloper;
BYTE				byServerInfoCount;
sSERVER_INFO		aServerInfo[DBO_MAX_CHARACTER_SERVER_COUNT];
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(AU_LOGIN_DISCONNECT_RES)
END_PROTOCOL()
//------------------------------------------------------------------
BEGIN_PROTOCOL(AU_COMMERCIAL_SETTING_NFY)
BYTE		abySetting[3]; // eDBO_ALLOWED_SERVICE_SERVICE_FUNC
END_PROTOCOL()

#pragma pack()