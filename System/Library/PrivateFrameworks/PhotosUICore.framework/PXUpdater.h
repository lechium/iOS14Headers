/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMutableIndexSet;

@interface PXUpdater : NSObject {

	SEL* _orderedUpdateSelectors;
	unsigned long long _orderedUpdateSelectorsCapacity;
	unsigned long long _orderedUpdateSelectorsCount;
	NSMutableIndexSet* _updateSelectorsNeedingUpdate;
	NSMutableIndexSet* _updateSelectorsAlreadyUpdated;
	BOOL _isPerformingUpdates;
	BOOL _updatePassScheduled;
	BOOL _extraChecksEnabled;
	id _target;
	SEL _needsUpdateSelector;

}

@property (assign,getter=isUpdatePassScheduled,nonatomic) BOOL updatePassScheduled;              //@synthesize updatePassScheduled=_updatePassScheduled - In the implementation block
@property (assign,nonatomic) BOOL extraChecksEnabled;                                            //@synthesize extraChecksEnabled=_extraChecksEnabled - In the implementation block
@property (nonatomic,__weak,readonly) id target;                                                 //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL needsUpdateSelector;                                            //@synthesize needsUpdateSelector=_needsUpdateSelector - In the implementation block
-(id)initWithTarget:(id)arg1 needsUpdateSelector:(SEL)arg2 ;
-(id)initWithTarget:(id)arg1 ;
-(BOOL)extraChecksEnabled;
-(void)dealloc;
-(void)setNeedsUpdateOf:(SEL)arg1 ;
-(BOOL)isUpdatePassScheduled;
-(void)updateIfNeeded;
-(void)addUpdateSelector:(SEL)arg1 ;
-(void)setExtraChecksEnabled:(BOOL)arg1 ;
-(void)setUpdatePassScheduled:(BOOL)arg1 ;
-(id)init;
-(void)addUpdateSelector:(SEL)arg1 needsUpdate:(BOOL)arg2 ;
-(void)setNeedsUpdateSelector:(SEL)arg1 ;
-(id)target;
-(void)_scheduleUpdatePassIfNeeded;
-(SEL)needsUpdateSelector;
@end

