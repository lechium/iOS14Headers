//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CNAvatarCardController, CNContact, NSArray, NSString, UIViewController;

@protocol CNAvatarCardControllerDelegate <NSObject>
- (UIViewController *)presentingViewControllerForAvatarCardController:(CNAvatarCardController *)arg1;

@optional
- (_Bool)avatarCardController:(CNAvatarCardController *)arg1 shouldPresentForLocation:(struct CGPoint)arg2;
- (void)avatarCardControllerDidDismiss:(CNAvatarCardController *)arg1;
- (void)avatarCardControllerWillDismiss:(CNAvatarCardController *)arg1;
- (void)avatarCardControllerWillBeginPreviewInteraction:(CNAvatarCardController *)arg1;
- (_Bool)avatarCardController:(CNAvatarCardController *)arg1 shouldShowContact:(CNContact *)arg2;
- (NSArray *)avatarCardController:(CNAvatarCardController *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (long long)avatarCardController:(CNAvatarCardController *)arg1 presentationResultForLocation:(struct CGPoint)arg2;
@end

