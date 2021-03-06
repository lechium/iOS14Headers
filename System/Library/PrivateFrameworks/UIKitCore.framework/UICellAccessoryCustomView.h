/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class UIView;

@interface UICellAccessoryCustomView : UICellAccessory {

	BOOL _maintainsFixedSize;
	UIView* _customView;
	long long _placement;
	/*^block*/id _position;

}

@property (nonatomic,readonly) UIView * customView;                //@synthesize customView=_customView - In the implementation block
@property (nonatomic,readonly) long long placement;                //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) BOOL maintainsFixedSize;              //@synthesize maintainsFixedSize=_maintainsFixedSize - In the implementation block
@property (nonatomic,copy) id position;                            //@synthesize position=_position - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPosition:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_defaultPlacementForHeader:(BOOL)arg1 ;
-(id)position;
-(long long)placement;
-(id)_identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)customView;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)_isSystemType;
-(id)initWithCustomView:(id)arg1 placement:(long long)arg2 ;
-(BOOL)maintainsFixedSize;
-(void)setMaintainsFixedSize:(BOOL)arg1 ;
@end

