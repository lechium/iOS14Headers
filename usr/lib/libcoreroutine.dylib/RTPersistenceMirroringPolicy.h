/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTTokenBucket;

@interface RTPersistenceMirroringPolicy : NSObject <NSCopying> {

	long long _qualityOfService;
	RTTokenBucket* _tokenBucket;

}

@property (nonatomic,retain) RTTokenBucket * tokenBucket;                    //@synthesize tokenBucket=_tokenBucket - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                   //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) BOOL allowsMirroringViaCellular; 
@property (nonatomic,readonly) BOOL mirroringOperationAllowed; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)qualityOfService;
-(double)timeIntervalUntilOperationAllowed;
-(id)init;
-(id)initWithQualityOfService:(long long)arg1 ;
-(id)description;
-(BOOL)mirroringOperationAllowed;
-(BOOL)allowsMirroringViaCellular;
-(id)initWithQualityOfService:(long long)arg1 tokenBucket:(id)arg2 ;
-(RTTokenBucket *)tokenBucket;
-(id)qualityOfServiceToString:(long long)arg1 ;
-(void)setTokenBucket:(RTTokenBucket *)arg1 ;
@end

