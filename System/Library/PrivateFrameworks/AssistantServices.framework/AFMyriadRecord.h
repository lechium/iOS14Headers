/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSData;

@interface AFMyriadRecord : NSObject <NSCopying> {

	unsigned char _goodness;
	unsigned char _userConfidence;
	unsigned char _deviceGroup;
	unsigned char _deviceClass;
	unsigned char _productType;
	unsigned char _tieBreaker;
	BOOL _isMe;
	unsigned char _rawAudioGoodnessScore;
	unsigned char _bump;
	unsigned char _isCollectedFromContextCollector;
	BOOL _advertisementDataIsDirty;
	unsigned short _pHash;
	NSUUID* _deviceID;
	NSData* _advertisementData;

}

@property (assign,nonatomic) BOOL advertisementDataIsDirty;                              //@synthesize advertisementDataIsDirty=_advertisementDataIsDirty - In the implementation block
@property (assign,nonatomic) unsigned char rawAudioGoodnessScore;                        //@synthesize rawAudioGoodnessScore=_rawAudioGoodnessScore - In the implementation block
@property (assign,nonatomic) unsigned char bump;                                         //@synthesize bump=_bump - In the implementation block
@property (assign,nonatomic) unsigned char goodness;                                     //@synthesize goodness=_goodness - In the implementation block
@property (nonatomic,copy) NSData * advertisementData;                                   //@synthesize advertisementData=_advertisementData - In the implementation block
@property (assign,nonatomic) unsigned char userConfidence;                               //@synthesize userConfidence=_userConfidence - In the implementation block
@property (assign,nonatomic) unsigned short pHash;                                       //@synthesize pHash=_pHash - In the implementation block
@property (nonatomic,copy) NSUUID * deviceID;                                            //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) unsigned char deviceGroup;                                  //@synthesize deviceGroup=_deviceGroup - In the implementation block
@property (assign,nonatomic) unsigned char deviceClass;                                  //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) unsigned char productType;                                  //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) unsigned char tieBreaker;                                   //@synthesize tieBreaker=_tieBreaker - In the implementation block
@property (assign,nonatomic) BOOL isMe;                                                  //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) unsigned char isCollectedFromContextCollector;              //@synthesize isCollectedFromContextCollector=_isCollectedFromContextCollector - In the implementation block
-(BOOL)isMe;
-(void)setDeviceID:(NSUUID *)arg1 ;
-(unsigned char)bump;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned char)deviceGroup;
-(void)setIsMe:(BOOL)arg1 ;
-(unsigned short)pHash;
-(unsigned char)deviceClass;
-(BOOL)isSlowdown;
-(BOOL)isSane;
-(unsigned char)productType;
-(NSData *)advertisementData;
-(id)initWithDeviceID:(id)arg1 data:(id)arg2 ;
-(void)setIsCollectedFromContextCollector:(unsigned char)arg1 ;
-(unsigned char)tieBreaker;
-(id)init;
-(void)setGoodness:(unsigned char)arg1 ;
-(BOOL)isAContinuation;
-(unsigned char)userConfidence;
-(void)setRawAudioGoodnessScore:(unsigned char)arg1 ;
-(void)setUserConfidence:(unsigned char)arg1 ;
-(void)setDeviceGroup:(unsigned char)arg1 ;
-(void)setTieBreaker:(unsigned char)arg1 ;
-(id)asAdvertisementData;
-(unsigned char)rawAudioGoodnessScore;
-(unsigned char)isCollectedFromContextCollector;
-(id)initWithAudioData:(id)arg1 ;
-(void)adjustByMultiplier:(float)arg1 adding:(int)arg2 ;
-(void)setRawAudioGoodnessScore:(unsigned char)arg1 withBump:(unsigned char)arg2 ;
-(void)generateRandomConfidence;
-(void)generateTiebreaker;
-(BOOL)isInEarTrump;
-(BOOL)isCarplayTrump;
-(BOOL)isALateSupressionTrumpFor:(id)arg1 ;
-(BOOL)isAnEmergency;
-(BOOL)isAnEmergencyHandled;
-(int)slowdownDelay;
-(BOOL)hasEqualAdvertismentData:(id)arg1 ;
-(BOOL)advertisementDataIsDirty;
-(void)setAdvertisementDataIsDirty:(BOOL)arg1 ;
-(void)setProductType:(unsigned char)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isATrump;
-(unsigned char)goodness;
-(void)setBump:(unsigned char)arg1 ;
-(NSUUID *)deviceID;
-(void)setDeviceClass:(unsigned char)arg1 ;
-(unsigned long long)hash;
-(void)setPHash:(unsigned short)arg1 ;
-(void)setAdvertisementData:(NSData *)arg1 ;
-(id)description;
@end
