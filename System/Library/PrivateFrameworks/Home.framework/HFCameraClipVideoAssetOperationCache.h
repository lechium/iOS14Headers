/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:28 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class HFCameraClipVideoAssetOperationMarker, NSMutableDictionary;

@interface HFCameraClipVideoAssetOperationCache : NSObject {

	unsigned long long _maxSize;
	unsigned long long _count;
	HFCameraClipVideoAssetOperationMarker* _head;
	HFCameraClipVideoAssetOperationMarker* _tail;
	NSMutableDictionary* _markerInfo;

}

@property (assign,nonatomic) unsigned long long maxSize;                                //@synthesize maxSize=_maxSize - In the implementation block
@property (assign,nonatomic) unsigned long long count;                                  //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) HFCameraClipVideoAssetOperationMarker * head;              //@synthesize head=_head - In the implementation block
@property (nonatomic,retain) HFCameraClipVideoAssetOperationMarker * tail;              //@synthesize tail=_tail - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * markerInfo;                          //@synthesize markerInfo=_markerInfo - In the implementation block
+(double)defaultFrameSize;
-(void)setHead:(HFCameraClipVideoAssetOperationMarker *)arg1 ;
-(void)setTail:(HFCameraClipVideoAssetOperationMarker *)arg1 ;
-(HFCameraClipVideoAssetOperationMarker *)tail;
-(HFCameraClipVideoAssetOperationMarker *)head;
-(unsigned long long)maxSize;
-(void)setMaxSize:(unsigned long long)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(void)purge;
-(unsigned long long)cacheSizeForDevice;
-(void)resetSentinels;
-(id)operationForKey:(id)arg1 ;
-(void)addOperation:(id)arg1 forClip:(id)arg2 usingKey:(id)arg3 ;
-(void)removeOperationForKey:(id)arg1 ;
-(NSMutableDictionary *)markerInfo;
-(void)pointHeadAtMarker:(id)arg1 ;
-(void)removeMarker:(id)arg1 ;
-(void)setMarkerInfo:(NSMutableDictionary *)arg1 ;
-(id)init;
-(unsigned long long)count;
@end

