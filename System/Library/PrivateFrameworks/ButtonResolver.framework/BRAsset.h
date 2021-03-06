/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface BRAsset : NSObject {

	BOOL _hasAudio;
	BOOL _hasHaptic;
	BOOL _isNull;
	long long _type;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasAudio;                            //@synthesize hasAudio=_hasAudio - In the implementation block
@property (assign,nonatomic) BOOL hasHaptic;                           //@synthesize hasHaptic=_hasHaptic - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL isNull;                            //@synthesize isNull=_isNull - In the implementation block
@property (nonatomic,readonly) id propertyList; 
+(id)withType:(long long)arg1 andParameters:(id)arg2 ;
+(id)nullAsset;
-(NSDictionary *)parameters;
-(void)dealloc;
-(void)setHasAudio:(BOOL)arg1 ;
-(id)init;
-(BOOL)isNull;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAudio;
-(id)propertyList;
-(id)description;
-(id)initWithType:(long long)arg1 andParameters:(id)arg2 null:(BOOL)arg3 ;
-(BOOL)hasHaptic;
-(void)setHasHaptic:(BOOL)arg1 ;
@end

