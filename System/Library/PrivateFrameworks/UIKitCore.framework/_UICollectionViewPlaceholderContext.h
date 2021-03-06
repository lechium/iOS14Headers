/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewPlaceholderContext.h>
#import <UIKitCore/_UICollectionViewDropPlaceholderContext.h>

@protocol _UICollectionViewPlaceholderContextDelegate;
@class NSUUID, NSString, NSIndexPath, _UIDropAnimationHandlers, UIDragItem;

@interface _UICollectionViewPlaceholderContext : NSObject <UICollectionViewPlaceholderContext, _UICollectionViewDropPlaceholderContext> {

	NSUUID* _shadowUpdateIdentifier;
	NSString* _reuseIdentifier;
	NSIndexPath* _originalInsertionIndexPath;
	/*^block*/id _cellUpdateHandler;
	_UIDropAnimationHandlers* _animationHandlers;
	id<_UICollectionViewPlaceholderContextDelegate> _delegate;
	UIDragItem* _dragItem;

}

@property (assign,nonatomic,__weak) id<_UICollectionViewPlaceholderContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIDragItem * dragItem;                                                        //@synthesize dragItem=_dragItem - In the implementation block
@property (nonatomic,retain) _UIDropAnimationHandlers * animationHandlers;                                 //@synthesize animationHandlers=_animationHandlers - In the implementation block
@property (nonatomic,retain) NSUUID * shadowUpdateIdentifier;                                              //@synthesize shadowUpdateIdentifier=_shadowUpdateIdentifier - In the implementation block
@property (nonatomic,retain) NSString * reuseIdentifier;                                                   //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (nonatomic,retain) NSIndexPath * originalInsertionIndexPath;                                     //@synthesize originalInsertionIndexPath=_originalInsertionIndexPath - In the implementation block
@property (nonatomic,copy) id cellUpdateHandler;                                                           //@synthesize cellUpdateHandler=_cellUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addCompletion:(/*^block*/id)arg1 ;
-(id)initWithOriginalInsertionIndexPath:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 delegate:(id)arg4 cellUpdateHandler:(/*^block*/id)arg5 ;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(UIDragItem *)dragItem;
-(NSString *)reuseIdentifier;
-(void)setDelegate:(id<_UICollectionViewPlaceholderContextDelegate>)arg1 ;
-(void)setDragItem:(UIDragItem *)arg1 ;
-(id<_UICollectionViewPlaceholderContextDelegate>)delegate;
-(void)setNeedsCellUpdate;
-(id)cellUpdateHandler;
-(NSUUID *)shadowUpdateIdentifier;
-(NSIndexPath *)originalInsertionIndexPath;
-(void)setShadowUpdateIdentifier:(NSUUID *)arg1 ;
-(void)setCellUpdateHandler:(id)arg1 ;
-(NSString *)description;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(BOOL)deletePlaceholder;
-(BOOL)commitInsertionWithDataSourceUpdates:(/*^block*/id)arg1 ;
-(void)setOriginalInsertionIndexPath:(NSIndexPath *)arg1 ;
-(void)setAnimationHandlers:(_UIDropAnimationHandlers *)arg1 ;
-(_UIDropAnimationHandlers *)animationHandlers;
@end

