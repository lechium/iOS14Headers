/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <ShareSheet/UIActivityViewController.h>

@protocol PUEditExtensionActivityViewControllerDelegate;
@interface PUEditExtensionActivityViewController : UIActivityViewController {

	id<PUEditExtensionActivityViewControllerDelegate> _editExtensionActivityViewControllerDelegate;

}

@property (assign,nonatomic,__weak) id<PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate;              //@synthesize editExtensionActivityViewControllerDelegate=_editExtensionActivityViewControllerDelegate - In the implementation block
-(BOOL)isPhotosOrCamera;
-(BOOL)_shouldUseModernDesign;
-(BOOL)appWantsLargePreview;
-(id<PUEditExtensionActivityViewControllerDelegate>)editExtensionActivityViewControllerDelegate;
-(void)setEditExtensionActivityViewControllerDelegate:(id<PUEditExtensionActivityViewControllerDelegate>)arg1 ;
-(void)_performActivity:(id)arg1 ;
@end
