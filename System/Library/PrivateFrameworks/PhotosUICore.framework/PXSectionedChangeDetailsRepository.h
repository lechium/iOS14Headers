/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface PXSectionedChangeDetailsRepository : NSObject {

	NSMutableArray* _allChangeDetails;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _historyLimit;

}

@property (nonatomic,readonly) long long historyLimit;              //@synthesize historyLimit=_historyLimit - In the implementation block
-(long long)historyLimit;
-(id)coalescedChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(id)init;
-(void)addChangeDetails:(id)arg1 ;
-(id)initWithChangeHistoryLimit:(long long)arg1 ;
-(id)changeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
@end

