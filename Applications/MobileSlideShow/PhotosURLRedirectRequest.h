//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, NSURL;
@protocol PXRootLibraryNavigationController;

@interface PhotosURLRedirectRequest : NSObject <UIAlertViewDelegate>
{
    NSURL *_URL;	// 8 = 0x8
    id <PXRootLibraryNavigationController> _rootController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000384b4
- (void)performRequest;	// IMP=0x0000000100038194
- (_Bool)_checkAndAlertSubscribedStreamsLimitReached;	// IMP=0x0000000100037f88
- (void)_navigateToPhotoStreamTab;	// IMP=0x0000000100037ec4
- (void)_showAlertForError:(unsigned long long)arg1;	// IMP=0x00000001000379ac
- (id)initWithDestinationURL:(id)arg1 rootController:(id)arg2;	// IMP=0x00000001000378f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

