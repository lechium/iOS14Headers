/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarImageView;

@interface _UIStatusBarBluetoothItem : _UIStatusBarIndicatorItem {

	_UIStatusBarImageView* _batteryImageView;

}

@property (nonatomic,retain) _UIStatusBarImageView * batteryImageView;              //@synthesize batteryImageView=_batteryImageView - In the implementation block
+(id)batteryDisplayIdentifier;
-(_UIStatusBarImageView *)batteryImageView;
-(void)setBatteryImageView:(_UIStatusBarImageView *)arg1 ;
-(id)viewForIdentifier:(id)arg1 ;
-(void)_create_batteryImageView;
-(id)systemImageNameForUpdate:(id)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)indicatorEntryKey;
-(id)_batteryFillColorForEntry:(id)arg1 usingTintColor:(id)arg2 ;
@end

