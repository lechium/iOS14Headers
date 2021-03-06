/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WFSettingsCell.h>

@class UISwitch;

@interface WFSettingsSwitchCell : WFSettingsCell {

	UISwitch* _switchControl;

}

@property (nonatomic,__weak,readonly) UISwitch * switchControl;              //@synthesize switchControl=_switchControl - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(UISwitch *)switchControl;
-(unsigned long long)accessibilityTraits;
@end

