/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:27:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSMutableData : NSData

@property (readonly) void* mutableBytes; 
@property (assign) unsigned long long length; 
+(id)dataWithCapacity:(unsigned long long)arg1 ;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 ;
-(void)increaseLengthBy:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(void)appendData:(id)arg1 ;
-(BOOL)decompressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(void*)mutableBytes;
-(void)setData:(id)arg1 ;
-(BOOL)compressUsingAlgorithm:(long long)arg1 error:(id*)arg2 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(id)initWithLength:(unsigned long long)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(BOOL)_isCompact;
@end

