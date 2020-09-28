//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MBFileHandle.h"

@class NSString;

@interface MBBasicFileHandle : MBFileHandle
{
    NSString *_path;	// 8 = 0x8
    int _fd;	// 16 = 0x10
}

+ (id)basicFileHandleWithPath:(id)arg1 flags:(int)arg2 mode:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x0000000100071f74
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x0000000100072460
- (long long)writeWithBytes:(const void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100072400
- (long long)readWithBytes:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100072370
- (_Bool)statWithBuffer:(struct stat *)arg1 error:(id *)arg2;	// IMP=0x0000000100072300
- (id)encryptionKeyWithError:(id *)arg1;	// IMP=0x00000001000722b8
- (int)fd;	// IMP=0x00000001000722a8
- (id)path;	// IMP=0x0000000100072298
- (void)dealloc;	// IMP=0x0000000100072248
- (id)initWithPath:(id)arg1 fd:(int)arg2;	// IMP=0x000000010007212c

@end
