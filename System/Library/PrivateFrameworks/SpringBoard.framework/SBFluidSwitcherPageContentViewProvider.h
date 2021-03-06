/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBAppSwitcherTransientOverlayPageContentViewDelegate.h>

@protocol SBFluidSwitcherPageContentViewProviderDelegate;
@class SBAppSwitcherSnapshotImageCache, SBAppSwitcherSnapshotLockoutViewControllerProvider, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface SBFluidSwitcherPageContentViewProvider : NSObject <SBAppSwitcherTransientOverlayPageContentViewDelegate> {

	id<SBFluidSwitcherPageContentViewProviderDelegate> _delegate;
	SBAppSwitcherSnapshotImageCache* _snapshotCache;
	SBAppSwitcherSnapshotLockoutViewControllerProvider* _lockoutVCProvider;
	NSMapTable* _pageContentViewToTransientOverlayViewController;
	NSMutableArray* _transientOverlayPageContentViews;
	NSMutableDictionary* _switcherServiceViewControllerMap;

}

@property (assign,nonatomic,__weak) id<SBFluidSwitcherPageContentViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_containerViewController;
-(CGSize)_pageViewSizeForAppLayout:(id)arg1 ;
-(void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2 ;
-(void)purgePageContentViewForAppLayout:(id)arg1 ;
-(void)_relinquishTransientOverlayViewController:(id)arg1 forPageContentView:(id)arg2 ;
-(long long)_interfaceOrientation;
-(id)_snapshotViewDelegate;
-(id)_viewForService:(id)arg1 appLayout:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 snapshotCache:(id)arg2 lockoutViewProvider:(id)arg3 ;
-(id)init;
-(id)existingTransientOverlayViewControllerForAppLayout:(id)arg1 ;
-(void)setDelegate:(id<SBFluidSwitcherPageContentViewProviderDelegate>)arg1 ;
-(void)relinquishTransientOverlayViewController:(id)arg1 ;
-(BOOL)isSuitableForRecycledItemContainer:(id)arg1 ;
-(id)_snapshotViewForAppLayout:(id)arg1 setActive:(BOOL)arg2 ;
-(void)_applyTransientOverlayViewController:(id)arg1 toPageContentView:(id)arg2 ;
-(id<SBFluidSwitcherPageContentViewProviderDelegate>)delegate;
-(void)appSwitcherTransientOverlayPageContentViewDidChangeContainerOrientation:(id)arg1 ;
-(void)appSwitcherTransientOverlayPageContentViewDidChangeActive:(id)arg1 ;
-(id)pageContentViewForAppLayout:(id)arg1 setActive:(BOOL)arg2 ;
-(long long)_preferredContentInterfaceOrientationForViewController:(id)arg1 preferredInterfaceOrientation:(long long)arg2 ;
@end

