//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, _SFSectionModel, _SFStartPageViewController;

@protocol _SFStartPageDataSource <NSObject>
- (_SFSectionModel *)startPageViewController:(_SFStartPageViewController *)arg1 folderForIdentifier:(id)arg2;
- (NSArray *)sectionsForStartPageViewController:(_SFStartPageViewController *)arg1;

@optional
- (void)startPageViewControllerDidChangeRootViewVisibility:(_SFStartPageViewController *)arg1;
- (void)startPageViewController:(_SFStartPageViewController *)arg1 didSelectSiteCardWithIdentifier:(id)arg2;
- (void)startPageViewController:(_SFStartPageViewController *)arg1 didSelectSiteIconWithIdentifier:(id)arg2;
- (void)startPageViewController:(_SFStartPageViewController *)arg1 toggleSectionExpanded:(_SFSectionModel *)arg2;
- (_Bool)startPageViewController:(_SFStartPageViewController *)arg1 isSectionExpanded:(_SFSectionModel *)arg2;
@end

