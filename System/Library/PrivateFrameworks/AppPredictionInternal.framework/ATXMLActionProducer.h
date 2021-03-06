/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/ATXActionProducer.h>

@protocol ATXActionProducerDelegate;
@class NSString;

@interface ATXMLActionProducer : NSObject <ATXActionProducer> {

	NSString* _cacheBasePath;
	NSString* _cacheFilename;
	id<ATXActionProducerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATXActionProducerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)consumerSubTypesToUpdate;
+(id)predictionChunksForActionResults:(id)arg1 ;
-(void)updateBlendingLayerForSpotlight;
-(void)invalidateCacheForConsumerSubType:(unsigned char)arg1 actionPredictionCandidates:(id)arg2 remainingPredictionItems:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 ;
-(void)updateBlendingLayerForAllConsumerSubTypes;
-(void)readCacheAndSendFilteredResultsToBlendingForConsumerSubType:(unsigned char)arg1 ;
-(id)_cachePathForConsumerSubtype:(unsigned char)arg1 ;
-(BOOL)writeCacheIfNotExistsForConsumerSubType:(unsigned char)arg1 ;
-(void)invalidateCacheForConsumerSubTypes:(id)arg1 featureCache:(id)arg2 ;
-(void)updateBlendingLayerForHomeScreen;
-(id)_getActionsFromCacheForConsumerSubType:(unsigned char)arg1 cacheFileData:(id)arg2 ;
-(id)init;
-(id)consumerSubTypesToInvalidateForTTL:(double)arg1 disabledConsumerSubTypes:(id)arg2 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)arg3 ;
-(void)setDelegate:(id<ATXActionProducerDelegate>)arg1 ;
-(BOOL)_writeIntermediateCacheForConsumerSubType:(unsigned char)arg1 actionPredictionCandidates:(id)arg2 remainingPredictionItems:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 ;
-(id<ATXActionProducerDelegate>)delegate;
-(id)produceActions;
-(void)updateBlendingLayerForConsumerSubType:(unsigned char)arg1 ;
@end

