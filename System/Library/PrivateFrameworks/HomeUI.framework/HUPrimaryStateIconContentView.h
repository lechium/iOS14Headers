/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUIconContentView.h>

@class HFPrimaryStateIconDescriptor;

@interface HUPrimaryStateIconContentView : HUIconContentView

@property (nonatomic,readonly) HFPrimaryStateIconDescriptor * iconDescriptor; 
-(void)tintColorDidChange;
-(void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)updateColorsForDisplayStyle:(unsigned long long)arg1 ;
@end
