/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel;
@class TSUStreamCompression, NSString;

@interface TSUCompressionReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	TSUStreamCompression* _compressor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)dealloc;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 compressionAlgorithm:(int)arg2 operation:(int)arg3 ;
@end
