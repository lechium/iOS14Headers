//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DASessionSettings : NSObject
{
    _Bool _displayDeviceIdentifier;	// 8 = 0x8
    _Bool _fullscreenPromptsEnabled;	// 9 = 0x9
    NSString *_deviceIdentifier;	// 16 = 0x10
    unsigned long long _allowCellularSizeThreshold;	// 24 = 0x18
}

+ (id)acceptableValueClasses;	// IMP=0x0000000100020ce0
+ (id)sessionSettingsWithDictionary:(id)arg1;	// IMP=0x0000000100020870
- (void).cxx_destruct;	// IMP=0x00000001000210f0
@property(nonatomic) unsigned long long allowCellularSizeThreshold; // @synthesize allowCellularSizeThreshold=_allowCellularSizeThreshold;
@property(nonatomic) _Bool fullscreenPromptsEnabled; // @synthesize fullscreenPromptsEnabled=_fullscreenPromptsEnabled;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) _Bool displayDeviceIdentifier; // @synthesize displayDeviceIdentifier=_displayDeviceIdentifier;
- (id)description;	// IMP=0x0000000100020fc4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100020f4c
- (_Bool)isEqualToSessionSettings:(id)arg1;	// IMP=0x0000000100020e18
- (id)dictionary;	// IMP=0x0000000100020b38
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000208d0
- (id)init;	// IMP=0x00000001000208c0

@end
