/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSData;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding> {

	unsigned long long _length;
	BOOL _isShmem;
	unsigned long long _offset;
	NSObject*<OS_xpc_object> _data;
	NSData* _imageSetHash;

}

@property (nonatomic,readonly) NSData * imageSetHash;              //@synthesize imageSetHash=_imageSetHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)purge;
-(NSData *)imageSetHash;
-(id)containedImageSet;
-(id)init;
-(id)initWithWithXPCObject:(id)arg1 hash:(id)arg2 ;
-(id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(BOOL)arg3 offset:(unsigned long long)arg4 hash:(id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
