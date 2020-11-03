//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL, UIDocumentPickerViewController;

@protocol UIDocumentPickerDelegate <NSObject>

@optional
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentAtURL:(NSURL *)arg2;
- (void)documentPickerWasCancelled:(UIDocumentPickerViewController *)arg1;
- (void)documentPicker:(UIDocumentPickerViewController *)arg1 didPickDocumentsAtURLs:(NSArray *)arg2;
@end
