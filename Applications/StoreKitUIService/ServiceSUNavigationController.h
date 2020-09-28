//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationController.h>

#import "ServiceAccountPageEmbedded-Protocol.h"

@class NSString;
@protocol ServiceAccountPageEmbeddedParent;

@interface ServiceSUNavigationController : SUNavigationController <ServiceAccountPageEmbedded>
{
    id <ServiceAccountPageEmbeddedParent> _embeddedParent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000c208
@property(nonatomic) __weak id <ServiceAccountPageEmbeddedParent> embeddedParent; // @synthesize embeddedParent=_embeddedParent;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c138
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x000000010000c0bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
