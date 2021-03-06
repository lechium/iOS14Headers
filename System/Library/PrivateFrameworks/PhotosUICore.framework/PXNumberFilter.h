/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableNumberFilter.h>

@class NSString;

@interface PXNumberFilter : PXObservable <PXMutableNumberFilter> {

	SCD_Struct_PX38 _needsUpdateFlags;
	double _input;
	double _time;
	double _output;
	double _lastTime;

}

@property (assign,setter=_setOutput:,nonatomic) double output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) double currentTime; 
@property (nonatomic,readonly) double lastTime;                             //@synthesize lastTime=_lastTime - In the implementation block
@property (nonatomic,readonly) double input;                                //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) double time;                                   //@synthesize time=_time - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)time;
-(void)_updateIfNeeded;
-(id)initWithInput:(double)arg1 ;
-(void)didPerformChanges;
-(void)_setOutput:(double)arg1 ;
-(void)invalidateOutput;
-(void)_invalidateOutput;
-(void)_updateOutputIfNeeded;
-(void)setTime:(double)arg1 ;
-(void)_setNeedsUpdate;
-(double)output;
-(void)_setLastTime:(double)arg1 ;
-(id)mutableChangeObject;
-(double)initialOutputForInput:(double)arg1 ;
-(void)performChanges:(/*^block*/id)arg1 ;
-(id)init;
-(double)lastTime;
-(double)updatedOutput;
-(double)currentTime;
-(void)setInput:(double)arg1 ;
-(double)input;
-(BOOL)_needsUpdate;
@end

