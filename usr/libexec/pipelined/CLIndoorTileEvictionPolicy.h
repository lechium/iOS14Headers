//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@protocol OS_xpc_object;

@interface CLIndoorTileEvictionPolicy : NSObject <NSSecureCoding>
{
    _Bool _forceClean;	// 8 = 0x8
    double _maxModifiedAge;	// 16 = 0x10
    NSObject<OS_xpc_object> *_activity;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100133210
- (void).cxx_destruct;	// IMP=0x00000001001335c8
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(nonatomic) _Bool forceClean; // @synthesize forceClean=_forceClean;
@property(nonatomic) double maxModifiedAge; // @synthesize maxModifiedAge=_maxModifiedAge;
- (id)description;	// IMP=0x0000000100133528
- (_Bool)tileLastModified:(double)arg1 needsEvictionAt:(double)arg2;	// IMP=0x0000000100133400
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100133370
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100133288
- (id)init;	// IMP=0x0000000100133218

@end
