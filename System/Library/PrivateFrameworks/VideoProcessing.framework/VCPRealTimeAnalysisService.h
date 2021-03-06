/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPRealTimeAnalysisClientProtocol.h>

@class NSLock, NSXPCConnection;

@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol> {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
+(id)analysisService;
+(id)errorWithStatus:(int)arg1 andDescription:(id)arg2 ;
-(void)invalidate;
-(id)connection;
-(void)dealloc;
-(id)init;
-(void)requestAnalysis:(unsigned long long)arg1 ofPixelBuffer:(CVBufferRef)arg2 withProperties:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
@end

