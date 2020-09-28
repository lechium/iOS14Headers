/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionController.h>

@protocol AVTAvatarAttributeEditorSectionController <NSObject>
@property (assign,nonatomic,__weak) id<AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate; 
@property (nonatomic,readonly) id<AVTAvatarAttributeEditorSection> section; 
@property (assign,nonatomic) long long selectedIndex; 
@required
+(double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2;
+(BOOL)supportsSelection;
-(void)setSelectedIndex:(long long)arg1;
-(unsigned long long)indexForItem:(id)arg1;
-(id<AVTAvatarAttributeEditorSection>)section;
-(void)updateWithSection:(id)arg1;
-(BOOL)evaluateDisplayCondition:(id)arg1;
-(id)viewForIndex:(long long)arg1;
-(CGSize*)sizeForItemAtIndex:(long long)arg1 fittingSize:(CGSize)arg2;
-(UIEdgeInsets*)edgeInsetsFittingSize:(CGSize)arg1;
-(id)prefetchingSectionItemForIndex:(long long)arg1;
-(void)resetToDefaultState;
-(void)updateCell:(id)arg1 forItemAtIndex:(long long)arg2;
-(void)cell:(id)arg1 willDisplayAtIndex:(long long)arg2;
-(void)invalidateLayoutForNewContainerSize:(CGSize)arg1;
-(void)didHighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)didUnhighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)didSelectItemAtIndex:(long long)arg1 cell:(id)arg2;
-(void)setDelegate:(id)arg1;
-(long long)selectedIndex;
-(id<AVTAvatarAttributeEditorControllerSubSelectionDelegate>)delegate;
-(long long)numberOfItems;

@end


@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTIndexBasedTaskScheduler, AVTTaskScheduler;
@class AVTAvatarAttributeEditorSection, AVTTransitionCoordinator, AVTUIEnvironment, NSString;

@interface AVTAvatarAttributeEditorSectionController : NSObject <AVTAvatarAttributeEditorSectionController> {

	long long _selectedIndex;
	id<AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
	AVTAvatarAttributeEditorSection* _section;
	AVTTransitionCoordinator* _transitionCoordinator;
	AVTUIEnvironment* _environment;
	id<AVTIndexBasedTaskScheduler> _thumbnailScheduler;
	id<AVTTaskScheduler> _renderingScheduler;

}

@property (nonatomic,retain) AVTAvatarAttributeEditorSection * section;                                               //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) AVTTransitionCoordinator * transitionCoordinator;                                        //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                                        //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTIndexBasedTaskScheduler> thumbnailScheduler;                                     //@synthesize thumbnailScheduler=_thumbnailScheduler - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> renderingScheduler;                                               //@synthesize renderingScheduler=_renderingScheduler - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate; 
@property (assign,nonatomic) long long selectedIndex;                                                                 //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2 ;
+(CGSize)cellSizeForSectionItem:(id)arg1 inSection:(id)arg2 fittingWidth:(double)arg3 environment:(id)arg4 ;
+(UIEdgeInsets)edgeInsetsForSection:(id)arg1 fittingWidth:(double)arg2 environment:(id)arg3 ;
+(BOOL)supportsSelection;
-(void)setSelectedIndex:(long long)arg1 ;
-(AVTTransitionCoordinator *)transitionCoordinator;
-(void)setSection:(AVTAvatarAttributeEditorSection *)arg1 ;
-(unsigned long long)indexForItem:(id)arg1 ;
-(AVTAvatarAttributeEditorSection *)section;
-(id)initWithThumbnailScheduler:(id)arg1 renderingScheduler:(id)arg2 environment:(id)arg3 ;
-(void)updateWithSection:(id)arg1 ;
-(BOOL)evaluateDisplayCondition:(id)arg1 ;
-(id)viewForIndex:(long long)arg1 ;
-(id<AVTIndexBasedTaskScheduler>)thumbnailScheduler;
-(CGSize)sizeForItemAtIndex:(long long)arg1 fittingSize:(CGSize)arg2 ;
-(UIEdgeInsets)edgeInsetsFittingSize:(CGSize)arg1 ;
-(id)prefetchingSectionItemForIndex:(long long)arg1 ;
-(void)resetToDefaultState;
-(void)updateCell:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)cell:(id)arg1 willDisplayAtIndex:(long long)arg2 ;
-(void)invalidateLayoutForNewContainerSize:(CGSize)arg1 ;
-(void)didHighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didUnhighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didSelectItemAtIndex:(long long)arg1 cell:(id)arg2 ;
-(void)setDelegate:(id<AVTAvatarAttributeEditorControllerSubSelectionDelegate>)arg1 ;
-(long long)selectedIndex;
-(id<AVTAvatarAttributeEditorControllerSubSelectionDelegate>)delegate;
-(AVTUIEnvironment *)environment;
-(long long)numberOfItems;
-(id<AVTTaskScheduler>)renderingScheduler;
-(void)setTransitionCoordinator:(AVTTransitionCoordinator *)arg1 ;
@end
