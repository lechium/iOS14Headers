//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIPageViewController, UIViewController;

@protocol UIPageViewControllerDataSource <NSObject>
- (UIViewController *)pageViewController:(UIPageViewController *)arg1 viewControllerAfterViewController:(UIViewController *)arg2;
- (UIViewController *)pageViewController:(UIPageViewController *)arg1 viewControllerBeforeViewController:(UIViewController *)arg2;

@optional
- (long long)presentationIndexForPageViewController:(UIPageViewController *)arg1;
- (long long)presentationCountForPageViewController:(UIPageViewController *)arg1;
@end
