/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIPrototypingMenuCell.h>

@class UISwitch;

@interface _UIPrototypingMenuBoolCell : _UIPrototypingMenuCell {

	UISwitch* _valueSwitch;

}

@property (nonatomic,retain) UISwitch * valueSwitch;              //@synthesize valueSwitch=_valueSwitch - In the implementation block
+(long long)_layoutAxis;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)valueSwitch;
-(void)_switchDidChangeValue:(id)arg1 ;
-(void)_prototypingSettingDidChange;
-(void)setValueSwitch:(UISwitch *)arg1 ;
@end

