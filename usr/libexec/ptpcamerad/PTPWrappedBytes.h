//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PTPWrappedBytes : NSObject
{
    unsigned long long _offset;	// 8 = 0x8
    unsigned long long _capacity;	// 16 = 0x10
    _Bool _allocatedBytes;	// 24 = 0x18
    char *_bytes;	// 32 = 0x20
    int _fd;	// 40 = 0x28
    _Bool _useByteBuffer;	// 44 = 0x2c
    unsigned long long _excessDataLength;	// 48 = 0x30
    double _progressNotificationTime;	// 56 = 0x38
    CDUnknownFunctionPointerType _progressNotifier;	// 64 = 0x40
    void *_progressNotifierContext;	// 72 = 0x48
    int _lastNotifiedProgress;	// 80 = 0x50
}

+ (id)wrappedBytesWithBytes:(void *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000010002f25c
+ (id)wrappedBytesWithCapacity:(unsigned long long)arg1;	// IMP=0x000000010002f224
- (id)description;	// IMP=0x000000010002f8a4
- (double)percentFull;	// IMP=0x000000010002f874
- (unsigned long long)excessDataLength;	// IMP=0x000000010002f86c
- (unsigned long long)rewindBytesToPosition64:(unsigned long long)arg1;	// IMP=0x000000010002f82c
- (unsigned long long)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000010002f6c4
- (unsigned long long)appendData:(id)arg1;	// IMP=0x000000010002f53c
- (unsigned long long)offset;	// IMP=0x000000010002f534
- (_Bool)wasInitWithFD;	// IMP=0x000000010002f524
- (id)data;	// IMP=0x000000010002f504
- (id)mutableData;	// IMP=0x000000010002f4e4
- (void *)mutableBytes;	// IMP=0x000000010002f4dc
- (const void *)bytes;	// IMP=0x000000010002f4d4
- (void)setLength:(unsigned long long)arg1;	// IMP=0x000000010002f4c0
- (unsigned long long)length;	// IMP=0x000000010002f4b8
- (unsigned long long)setCapacity:(unsigned long long)arg1;	// IMP=0x000000010002f468
- (unsigned long long)capacity;	// IMP=0x000000010002f460
- (void)dealloc;	// IMP=0x000000010002f3fc
- (void)setProgressNotifierCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x000000010002f3cc
- (id)initWithFileDescriptor:(int)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000010002f374
- (id)initWithBytes:(void *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x000000010002f318
- (id)init;	// IMP=0x000000010002f308
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000010002f29c

@end

