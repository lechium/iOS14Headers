//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MBPlugin-Protocol.h"

@interface MBRestoreAppsPlugin : NSObject <MBPlugin>
{
}

- (id)endingRestoreWithEngine:(id)arg1;	// IMP=0x0000000100069c7c
- (id)startingRestoreWithEngine:(id)arg1;	// IMP=0x0000000100069b40
- (id)endedBackupWithEngine:(id)arg1 error:(id)arg2;	// IMP=0x00000001000699c4
- (id)startingBackupWithEngine:(id)arg1;	// IMP=0x0000000100068b58

@end
