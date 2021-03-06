//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SSSScreenshotModificationInfo.h"

@class NSArray;
@protocol SSSScreenshotMutableModificationInfoChangeObserver;

@interface SSSScreenshotMutableModificationInfo : SSSScreenshotModificationInfo
{
    id <SSSScreenshotMutableModificationInfoChangeObserver> _changeObserver;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001000049f8
@property(nonatomic) __weak id <SSSScreenshotMutableModificationInfoChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
- (void)takeValueFromModificationInfo:(id)arg1 forKey:(unsigned long long)arg2;	// IMP=0x0000000100004898
@property(nonatomic) double vellumOpacity; // @dynamic vellumOpacity;
@property(retain, nonatomic) NSArray *originalAnnotations; // @dynamic originalAnnotations;
@property(retain, nonatomic) NSArray *annotationNSDatas; // @dynamic annotationNSDatas;
@property(nonatomic) struct SSSCropInfo cropInfo; // @dynamic cropInfo;

@end

