/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewPropertyAnimator.h>

@class NSHashTable;

@interface _UISwipePropertyAnimator : UIViewPropertyAnimator {

	NSHashTable* _viewsToAnimateAdditively;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)addViewsToAnimateAdditively:(id)arg1 ;
@end

