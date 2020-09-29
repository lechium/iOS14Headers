/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol MTLDevice;
@class CIContext, NSHashTable, NSLock;

@interface VNImageBufferManager : NSObject {

	CIContext* mainCIContext;
	id<MTLDevice> mainCIContextMetalDevice;
	CIContext* lowPriorityCIContext;
	id<MTLDevice> lowPriorityCIContextMetalDevice;
	NSHashTable* activeImageBuffers;
	NSLock* bufferTableLock;

}
+(id)manager;
-(void)dealloc;
-(id)sharedCIContextWithOptions:(id)arg1 ;
-(id)init;
-(void)purgeAllCaches;
-(void)removeBuffer:(id)arg1 ;
-(void)addImageBuffer:(id)arg1 ;
@end
