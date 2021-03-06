//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BCSActionCoordinator, UIViewController;
@protocol BCSAction;

@protocol BCSActionCoordinatorDelegate <NSObject>
- (void)actionCoordinator:(BCSActionCoordinator *)arg1 didFinishPerformingAction:(id <BCSAction>)arg2;
- (UIViewController *)actionCoordinatorPresentingViewController:(BCSActionCoordinator *)arg1;
- (void)actionCoordinator:(BCSActionCoordinator *)arg1 willDismissViewController:(UIViewController *)arg2;
@end

