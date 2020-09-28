/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data, MTLLibrary;
@class NSObject;

@interface CIKernelLibrary : NSObject {

	NSObject*<OS_dispatch_data> _data;
	id<MTLLibrary> _library;

}

@property (readonly) unsigned long long functionCount; 
+(id)libraryWithData:(id)arg1 error:(id*)arg2 ;
+(id)internalLibraryWithName:(id)arg1 device:(id)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)newFunctionWithName:(id)arg1 device:(id)arg2 ;
-(id)functionWithName:(id)arg1 ;
-(id)externFunctionNames;
-(unsigned long long)functionCount;
@end
