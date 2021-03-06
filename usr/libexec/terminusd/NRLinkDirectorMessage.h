//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRLink, NSUUID;

@interface NRLinkDirectorMessage : NSObject
{
    unsigned char _messageVersion;	// 8 = 0x8
    unsigned short _messageHeaderSize;	// 10 = 0xa
    unsigned short _payloadLength;	// 12 = 0xc
    unsigned int _messageLen;	// 16 = 0x10
    NRLink *_preferredLink;	// 24 = 0x18
    NSUUID *_nrUUID;	// 32 = 0x20
    char *_messageBufferPtr;	// 40 = 0x28
    unsigned long long _identifier;	// 48 = 0x30
}

+ (_Bool)testForNRUUID:(id)arg1;	// IMP=0x0000000100009c08
+ (void)testCleanupForNRUUID:(id)arg1;	// IMP=0x0000000100009ba0
+ (_Bool)testMessage:(id)arg1;	// IMP=0x00000001000093dc
+ (id)createTestEndpointIPv6;	// IMP=0x0000000100009310
+ (id)createTestEndpointIPv4;	// IMP=0x0000000100009244
+ (id)createArrayFromSubDataArray:(id)arg1;	// IMP=0x00000001000090f4
+ (id)createSubDataArrayFromData:(id)arg1;	// IMP=0x0000000100008fc0
+ (id)testData;	// IMP=0x0000000100008db8
+ (id)createMessageWithData:(id)arg1 nrUUID:(id)arg2;	// IMP=0x0000000100008a14
- (void).cxx_destruct;	// IMP=0x0000000100008894
@property(nonatomic) unsigned short payloadLength; // @synthesize payloadLength=_payloadLength;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int messageLen; // @synthesize messageLen=_messageLen;
@property(nonatomic) unsigned short messageHeaderSize; // @synthesize messageHeaderSize=_messageHeaderSize;
@property(nonatomic) unsigned char messageVersion; // @synthesize messageVersion=_messageVersion;
@property(nonatomic) char *messageBufferPtr; // @synthesize messageBufferPtr=_messageBufferPtr;
@property(retain, nonatomic) NSUUID *nrUUID; // @synthesize nrUUID=_nrUUID;
@property(retain, nonatomic) NRLink *preferredLink; // @synthesize preferredLink=_preferredLink;
- (_Bool)send;	// IMP=0x0000000100008640
- (id)copySendBuffer;	// IMP=0x000000010000850c
- (id)copyFirstDataForType:(unsigned char)arg1;	// IMP=0x00000001000084c0
- (id)copyUpdateWiFiAddressEndpointsForInterfaceIndex:(unsigned int)arg1;	// IMP=0x00000001000080e4
- (id)copyFirstBoolForType:(unsigned char)arg1;	// IMP=0x0000000100008050
- (_Bool)hasType:(unsigned char)arg1;	// IMP=0x000000010000801c
- (id)copyAllDataForType:(unsigned char)arg1;	// IMP=0x0000000100007ae8
- (id)copyDeviceLinkState;	// IMP=0x00000001000078bc
- (void)addDeviceLinkState:(id)arg1;	// IMP=0x0000000100007558
- (void)addUpdateWiFiAddressEndpoint:(id)arg1 portHBO:(unsigned short)arg2;	// IMP=0x00000001000072b0
- (void)addType:(unsigned char)arg1;	// IMP=0x00000001000072a0
- (void)addType:(unsigned char)arg1 boolValue:(_Bool)arg2;	// IMP=0x0000000100007228
- (void)addType:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000100006dc0
- (id)description;	// IMP=0x0000000100006d2c
- (void)dealloc;	// IMP=0x0000000100006a74
- (id)initOutgoingDirectorMessageWithNRUUID:(id)arg1;	// IMP=0x00000001000069f0
- (id)initOutgoingDirectorMessageWithNRUUIDInner:(id)arg1 messageVersion:(unsigned char)arg2;	// IMP=0x00000001000067c4
- (void)writeMessagePayloadLengthNBOToSendBuffer:(const char *)arg1 len:(unsigned short)arg2;	// IMP=0x0000000100006558
- (void)writeMessageIdentifierNBOToSendBuffer:(const char *)arg1 len:(unsigned int)arg2;	// IMP=0x00000001000062b8
- (void)writeMessageOptionsToSendBuffer:(const char *)arg1 len:(unsigned char)arg2;	// IMP=0x0000000100006090
- (void)writeMessageVersionToSendBuffer:(unsigned char)arg1;	// IMP=0x0000000100005eac
- (id)initDirectorMessageWithNRUUID:(id)arg1 messageLen:(unsigned int)arg2 messageVersion:(unsigned char)arg3;	// IMP=0x0000000100005b0c

@end

