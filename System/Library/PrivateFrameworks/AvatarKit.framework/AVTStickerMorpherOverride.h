/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVTStickerMorpherOverride : NSObject {

	float _value;
	NSString* _geometry;
	NSString* _morpher;

}

@property (nonatomic,copy,readonly) NSString * geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,copy,readonly) NSString * morpher;               //@synthesize morpher=_morpher - In the implementation block
@property (nonatomic,readonly) float value;                           //@synthesize value=_value - In the implementation block
+(id)morpherOverrideFromDictionary:(id)arg1 ;
-(void)applyToAvatar:(id)arg1 ;
-(float)value;
-(NSString *)morpher;
-(NSString *)geometry;
-(id)description;
-(id)overridenMorpherForAvatar:(id)arg1 ;
-(id)initWithGeometry:(id)arg1 morpher:(id)arg2 value:(float)arg3 ;
@end

