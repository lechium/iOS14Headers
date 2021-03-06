/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAAccessory, NSString, NSInputStream, NSOutputStream;

@interface EASession : NSObject {

	EAAccessory* _accessory;
	unsigned _sessionID;
	NSString* _protocolString;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	BOOL _openCompleted;
	int _sock;
	BOOL _useSocketInterfaceForEASession;
	NSString* _eaSessionUUIDFromCoreAccessories;

}

@property (nonatomic,readonly) EAAccessory * accessory;                    //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSString * protocolString;                  //@synthesize protocolString=_protocolString - In the implementation block
@property (nonatomic,readonly) NSInputStream * inputStream;                //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize outputStream=_outputStream - In the implementation block
-(unsigned)_sessionID;
-(void)dealloc;
-(NSOutputStream *)outputStream;
-(EAAccessory *)accessory;
-(id)init;
-(NSInputStream *)inputStream;
-(id)_shortDescription;
-(NSString *)protocolString;
-(id)initWithAccessory:(id)arg1 forProtocol:(id)arg2 ;
-(id)description;
-(void)_handleIncomingEAData:(id)arg1 ;
-(id)EASessionUUID;
-(void)_streamClosed;
-(void)_endStreams;
-(BOOL)isOpenCompleted;
-(void)setOpenCompleted:(BOOL)arg1 ;
@end

