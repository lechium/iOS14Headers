/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSNumber, NSArray, NSDictionary;

@interface FTReInitiateMessage : FTFaceTimeMessage <NSCopying> {

	NSData* _selfBlob;
	NSData* _selfPushToken;
	NSNumber* _selfNATType;
	NSData* _selfNatIP;
	NSArray* _peers;
	NSArray* _canonicalizedPeers;
	NSDictionary* _regionInformation;

}

@property (copy) NSData * selfBlob;                             //@synthesize selfBlob=_selfBlob - In the implementation block
@property (copy) NSData * selfPushToken;                        //@synthesize selfPushToken=_selfPushToken - In the implementation block
@property (copy) NSNumber * selfNATType;                        //@synthesize selfNATType=_selfNATType - In the implementation block
@property (copy) NSData * selfNatIP;                            //@synthesize selfNatIP=_selfNatIP - In the implementation block
@property (copy) NSDictionary * regionInformation;              //@synthesize regionInformation=_regionInformation - In the implementation block
@property (copy) NSArray * peers;                               //@synthesize peers=_peers - In the implementation block
@property (copy) NSArray * canonicalizedPeers;                  //@synthesize canonicalizedPeers=_canonicalizedPeers - In the implementation block
-(NSArray *)peers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bagKey;
-(void)dealloc;
-(id)init;
-(void)setPeers:(NSArray *)arg1 ;
-(id)requiredKeys;
-(id)messageBody;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSData *)selfBlob;
-(void)setSelfBlob:(NSData *)arg1 ;
-(NSArray *)canonicalizedPeers;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(void)setSelfNATType:(NSNumber *)arg1 ;
-(void)setSelfNatIP:(NSData *)arg1 ;
-(void)setRegionInformation:(NSDictionary *)arg1 ;
-(NSData *)selfPushToken;
-(NSNumber *)selfNATType;
-(NSDictionary *)regionInformation;
-(NSData *)selfNatIP;
-(void)setCanonicalizedPeers:(NSArray *)arg1 ;
@end
