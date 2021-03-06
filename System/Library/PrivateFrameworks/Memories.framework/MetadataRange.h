/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:34 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface MetadataRange : NSObject <NSCopying> {

	int _type;
	int _startTime;
	int _duration;
	NSDictionary* _attributes;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int startTime;                          //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) int duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)descriptionForFacePositions:(int)arg1 ;
+(id)descriptionForShotType:(int)arg1 ;
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(NSDictionary *)attributes;
-(int)startTime;
-(void)setStartTime:(int)arg1 ;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(unsigned long long)hash;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)plistRepresentation;
-(id)description;
-(id)initWithType:(int)arg1 startTime:(int)arg2 duration:(int)arg3 attributes:(id)arg4 ;
@end

