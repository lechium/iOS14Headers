/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PUPhotoPickerHostExtensionProvider.h>
#import <libobjc.A.dylib/PUPhotoPickerTestSupportHandler.h>

@protocol PUPhotoPickerHostViewControllerDelegate;
@class NSExtensionContext, NSString;

@interface PUPhotoPickerHostViewController : _UIRemoteViewController <PUPhotoPickerHostExtensionProvider, PUPhotoPickerTestSupportHandler> {

	BOOL __invalidated;
	NSExtensionContext* _hostExtensionContext;
	id<PUPhotoPickerHostViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<PUPhotoPickerHostService> hostProxy; 
@property (assign,getter=_isInvalidated,nonatomic) BOOL _invalidated;                                  //@synthesize _invalidated=__invalidated - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoPickerHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSExtensionContext * hostExtensionContext;                                //@synthesize hostExtensionContext=_hostExtensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)invalidate;
-(BOOL)_isInvalidated;
-(id<PUPhotoPickerHostService>)hostProxy;
-(id)_hostContext;
-(void)setHostExtensionContext:(NSExtensionContext *)arg1 ;
-(void)setDelegate:(id<PUPhotoPickerHostViewControllerDelegate>)arg1 ;
-(void)performTraitCollectionUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)performPhotoPickerPreviewOfFirstAsset;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id<PUPhotoPickerHostViewControllerDelegate>)delegate;
-(NSExtensionContext *)hostExtensionContext;
-(void)set_invalidated:(BOOL)arg1 ;
@end

