/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LiveFSSharedMutableBuffer : NSObject <NSSecureCoding> {

	unsigned long long _vma;
	unsigned long long _capacity;
	unsigned long long _length;
	unsigned _mp;

}

@property (assign) unsigned long long length; 
+(id)dataWithCapacity:(unsigned long long)arg1 ;
+(id)dataWithLength:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)bufferWithLength:(unsigned long long)arg1 ;
+(id)bufferWithCapacity:(unsigned long long)arg1 ;
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(const void*)bytes;
-(void)dealloc;
-(void*)mutableBytes;
-(unsigned long long)length;
-(id)initWithLength:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 andLength:(unsigned long long)arg2 ;
-(BOOL)ensureMapped;
-(id)initWithMachPort:(unsigned)arg1 capacity:(unsigned long long)arg2 andLength:(unsigned long long)arg3 ;
-(void)detachBytes;
-(id)createDispatchData;
@end

