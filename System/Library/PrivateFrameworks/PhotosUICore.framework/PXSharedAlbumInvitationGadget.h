/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXSharedAlbumInvitationViewDelegate.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PXGadget.h>

@protocol PXGadgetDelegate;
@class PXGadgetSpec, PXFeedInvitationSectionInfo, PXSharedAlbumHeaderView, PXSharedAlbumInvitationView, NSString;

@interface PXSharedAlbumInvitationGadget : UIViewController <PXSharedAlbumInvitationViewDelegate, PXSettingsKeyObserver, PXGadget> {

	BOOL _loadedContentData;
	PXGadgetSpec* _gadgetSpec;
	long long _priority;
	id<PXGadgetDelegate> _delegate;
	PXFeedInvitationSectionInfo* _invitationSectionInfo;
	PXSharedAlbumHeaderView* _headerView;
	PXSharedAlbumInvitationView* _invitationView;

}

@property (nonatomic,retain) PXSharedAlbumHeaderView * headerView;                             //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) PXSharedAlbumInvitationView * invitationView;                     //@synthesize invitationView=_invitationView - In the implementation block
@property (assign,nonatomic) BOOL loadedContentData;                                           //@synthesize loadedContentData=_loadedContentData - In the implementation block
@property (nonatomic,retain) PXFeedInvitationSectionInfo * invitationSectionInfo;              //@synthesize invitationSectionInfo=_invitationSectionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
@property (nonatomic,readonly) unsigned long long gadgetCapabilities; 
@property (nonatomic,retain) PXGadgetSpec * gadgetSpec;                                        //@synthesize gadgetSpec=_gadgetSpec - In the implementation block
@property (assign,nonatomic,__weak) id<PXGadgetDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long accessoryButtonType; 
@property (nonatomic,readonly) NSString * accessoryButtonTitle; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (assign,nonatomic) long long priority;                                               //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) Class collectionViewItemClass; 
@property (assign,nonatomic) CGRect visibleContentRect; 
+(void)preloadResources;
-(id)px_gridPresentation;
-(id)contentViewController;
-(PXGadgetSpec *)gadgetSpec;
-(void)setPriority:(long long)arg1 ;
-(void)dealloc;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)viewDidLoad;
-(void)setHeaderView:(PXSharedAlbumHeaderView *)arg1 ;
-(void)setGadgetSpec:(PXGadgetSpec *)arg1 ;
-(id)uniqueGadgetIdentifier;
-(void)sharedAlbumInvitationView:(id)arg1 didAccept:(BOOL)arg2 ;
-(void)setInvitationSectionInfo:(PXFeedInvitationSectionInfo *)arg1 ;
-(void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1 ;
-(void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2 ;
-(void)_updateInvitationView;
-(PXFeedInvitationSectionInfo *)invitationSectionInfo;
-(PXSharedAlbumInvitationView *)invitationView;
-(void)setInvitationView:(PXSharedAlbumInvitationView *)arg1 ;
-(unsigned long long)gadgetType;
-(void)viewWillLayoutSubviews;
-(id)init;
-(unsigned long long)gadgetCapabilities;
-(void)_attemptToNavigateToSharedAlbum:(id)arg1 hostingViewController:(id)arg2 ;
-(BOOL)loadedContentData;
-(void)setLoadedContentData:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDelegate:(id<PXGadgetDelegate>)arg1 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id<PXGadgetDelegate>)delegate;
-(PXSharedAlbumHeaderView *)headerView;
-(long long)priority;
@end
