//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface DataOutputStream : NSObject
{
    NSMutableData *_stream;	// 8 = 0x8
    long long _byteOrder;	// 16 = 0x10
}

+ (id)outputStreamWithByteOrder:(long long)arg1;	// IMP=0x000000010004b3a8
+ (id)outputStream;	// IMP=0x000000010004b37c
- (void).cxx_destruct;	// IMP=0x000000010004b6b8
@property(nonatomic) long long byteOrder; // @synthesize byteOrder=_byteOrder;
@property(retain, nonatomic) NSMutableData *stream; // @synthesize stream=_stream;
- (id)data;	// IMP=0x000000010004b688
- (void)writeString:(id)arg1;	// IMP=0x000000010004b5fc
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000010004b5a4
- (void)writeData:(id)arg1;	// IMP=0x000000010004b538
- (void)writeUint32:(unsigned int)arg1;	// IMP=0x000000010004b4b8
- (void)writeUint16:(unsigned short)arg1;	// IMP=0x000000010004b438
- (void)writeUint8:(unsigned char)arg1;	// IMP=0x000000010004b3e0
- (id)initWithByteOrder:(long long)arg1;	// IMP=0x000000010004b310

@end

