/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSData;

@interface CUTDSDevice : NSObject {

	BOOL _paired;
	NSUUID* _identifier;
	NSData* _bloomFilterData;
	NSData* _deviceAddress;
	unsigned long long _lastSeenTicks;

}

@property (nonatomic,copy) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * bloomFilterData;                        //@synthesize bloomFilterData=_bloomFilterData - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;                          //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (assign,nonatomic) unsigned long long lastSeenTicks;              //@synthesize lastSeenTicks=_lastSeenTicks - In the implementation block
@property (assign,nonatomic) BOOL paired;                                   //@synthesize paired=_paired - In the implementation block
-(BOOL)paired;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setPaired:(BOOL)arg1 ;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(void)setBloomFilterData:(NSData *)arg1 ;
-(NSData *)bloomFilterData;
-(void)setLastSeenTicks:(unsigned long long)arg1 ;
-(unsigned long long)lastSeenTicks;
-(id)description;
@end
