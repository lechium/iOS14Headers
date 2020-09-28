/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarActivityIndicator;

@interface _UIStatusBarActivityItem : _UIStatusBarItem {

	_UIStatusBarActivityIndicator* _activityIndicator;

}

@property (nonatomic,retain) _UIStatusBarActivityIndicator * activityIndicator;                //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets activityIndicatorAlignmentRectInsets; 
-(UIEdgeInsets)activityIndicatorAlignmentRectInsets;
-(void)_create_activityIndicator;
-(id)viewForIdentifier:(id)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(BOOL)_enableForType:(long long)arg1 ;
-(void)setActivityIndicator:(_UIStatusBarActivityIndicator *)arg1 ;
-(_UIStatusBarActivityIndicator *)activityIndicator;
@end
