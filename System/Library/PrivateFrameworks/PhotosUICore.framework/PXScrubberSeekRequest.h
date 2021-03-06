/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXVideoScrubberControllerTarget;
@class NSDate;

@interface PXScrubberSeekRequest : NSObject {

	NSDate* _dateCreated;
	double _seekTime;
	id<PXVideoScrubberControllerTarget> _target;

}

@property (nonatomic,copy) NSDate * dateCreated;                                             //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) double seekTime;                                                //@synthesize seekTime=_seekTime - In the implementation block
@property (assign,nonatomic,__weak) id<PXVideoScrubberControllerTarget> target;              //@synthesize target=_target - In the implementation block
-(id)initWithTarget:(id)arg1 seekTime:(double)arg2 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(id)init;
-(double)seekTime;
-(id<PXVideoScrubberControllerTarget>)target;
-(NSDate *)dateCreated;
-(void)setSeekTime:(double)arg1 ;
-(void)setTarget:(id<PXVideoScrubberControllerTarget>)arg1 ;
@end

