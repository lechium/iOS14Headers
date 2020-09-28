/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBUserOnboardingResume : PBCodable <NSCopying> {

	NSString* _onboardResumeStage;

}

@property (nonatomic,readonly) BOOL hasOnboardResumeStage; 
@property (nonatomic,retain) NSString * onboardResumeStage;              //@synthesize onboardResumeStage=_onboardResumeStage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setOnboardResumeStage:(NSString *)arg1 ;
-(BOOL)hasOnboardResumeStage;
-(NSString *)onboardResumeStage;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end
