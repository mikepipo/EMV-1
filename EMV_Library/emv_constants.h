#ifndef EMV_CONSTANTS_H
#define EMV_CONSTANTS_H

// Cryptogram Types
enum CRYPTOGRAM_TYPE {AAC = 0x00, TC, ARQC, AAR};

// Terminal Response decision
enum TERMINAL_RESPONSE {TERMINAL_DECLINE, TERMINAL_APPROVE};

// Terminal Authentication Response messages
#define SCS_OFFLINE_APPROVED "Y1"
#define SCS_OFFLINE_DECLINED "Z1"
#define SCS_APPROVED_AFTER_ICC_REFERRAL "Y2"
#define SCS_DECLINED_AFTER_ICC_REFERRAL "Z2"
#define SCS_OFFLINE_APPROVED_NO_ONLINE "Y3"
#define SCS_OFFLINE_DECLINED_NO_ONLINE "Z3"

// Data Authentication Methods
#define CRYPTO_NO_AUTHENTICATION 0x00
#define CRYPTO_SDA 0x01
#define CRYPTO_DDA 0x02
#define CRYPTO_DDA_AC 0x03

// errors
#define ERR_APPL_INIT_CONDITIONS_NOT_SATISFIED  0xA2000001
#define ERR_ICC_INVALID_CRYPTOGRAM_RESPONSE     0xA2000002
#define EXCEEDED_PIN_TRY_LIMIT				    0xA2000003
#define PIN_NOT_MATCH							0xA2000004
#define PIN_MATCH								0xA2000005
#define TRM_ERROR_DATA_NOT_FOUND				0xA2000006
#define ERR_CMD_INVALID_INSTRUCTION_ID			0xA2000007
#define ERR_CMD_READER_ISNOT_INITIALIZED		0xA2000008
#define ERR_CMD_COMMAND_ISNOT_INITIALIZED		0xA2000009
#define ERR_CMD_INVALID_CRYPTOGRAM_TYPE			0xA200000A
#define ERR_CMD_INVALID_SCRIPT_COMMAND			0xA200000B
#define ERR_CMD_INVALID_ICC_RESPONSE            0xA200000C
#define ERR_EXCESSIVE_USE_GENERATEAC            0xA200000D

#define EMV_AIP_NOT_FOUND				        0xA200000E
#define EMV_AFL_NOT_FOUND				        0xA200000F
#define EMV_INVALID_FORMAT				        0xA2000010
#define EMV_AFL_INVALID_FORMAT			        0xA2000011
#define EMV_READ_RECORD_FAILED			        0xA2000012
#define EMV_REDUNDANT_PRIMITIVE_DATA            0xA2000013
#define EMV_MISSING_MANDATORY_DATA              0xA2000014
#define EMV_DATA_NOT_FOUND                      0xA2000015
#define EMV_CONDITIONS_NOT_SATISFIED            0xA2000016
#define EMV_FUNCTION_IS_MISSING_FOR_TERMINAL_TYPE 0xA2000017

// Context errors
#define NO_TAG_FOUND				            0xA2000020
#define DATA_INCOMPATIBLE_SIZE		            0xA2000021
#define DATA_INCOMPATIBLE_TYPE		            0xA2000022

#endif
