/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLPTPConversionResult : NSObject {

	NSString* _pathExtension;
	unsigned long long _estimatedFileLength;

}

@property (copy,readonly) NSString * pathExtension;                       //@synthesize pathExtension=_pathExtension - In the implementation block
@property (readonly) unsigned long long estimatedFileLength;              //@synthesize estimatedFileLength=_estimatedFileLength - In the implementation block
-(id)initWithPathExtension:(id)arg1 estimatedFileLength:(unsigned long long)arg2 ;
-(NSString *)pathExtension;
-(unsigned long long)estimatedFileLength;
@end
