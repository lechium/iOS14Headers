/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISwipeViewManipulator.h>

@class UICollectionView, NSString;

@interface _UICollectionViewLayoutSwipeViewManipulator : NSObject <_UISwipeViewManipulator> {

	UICollectionView* _collectionView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollectionView:(id)arg1 ;
-(void)moveSwipedView:(id)arg1 atIndexPath:(id)arg2 withSwipeInfo:(SCD_Struct_UI41)arg3 animator:(id)arg4 ;
-(CGRect)restingFrameForSwipedView:(id)arg1 atIndexPath:(id)arg2 ;
@end

