/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray;

@interface _UIVelocityIntegrator : NSObject {

	BOOL _hasMemoizedVelocity;
	double _minimumRequiredMovement;
	double _hysteresisTimeInterval;
	NSMutableArray* _samples;
	double _resetHysteresisOnSampleThetaDiff;
	/*^block*/id _didResetHysteresisOnThetaDiffHandler;
	CGVector _offset;
	CGVector _totalTranslation;
	CGVector _memoizedVelocity;

}

@property (assign,nonatomic) CGVector offset;                                      //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) NSMutableArray * samples;                             //@synthesize samples=_samples - In the implementation block
@property (assign,nonatomic) CGVector totalTranslation;                            //@synthesize totalTranslation=_totalTranslation - In the implementation block
@property (assign,nonatomic) BOOL hasMemoizedVelocity;                             //@synthesize hasMemoizedVelocity=_hasMemoizedVelocity - In the implementation block
@property (assign,nonatomic) CGVector memoizedVelocity;                            //@synthesize memoizedVelocity=_memoizedVelocity - In the implementation block
@property (assign,nonatomic) double resetHysteresisOnSampleThetaDiff;              //@synthesize resetHysteresisOnSampleThetaDiff=_resetHysteresisOnSampleThetaDiff - In the implementation block
@property (nonatomic,copy) id didResetHysteresisOnThetaDiffHandler;                //@synthesize didResetHysteresisOnThetaDiffHandler=_didResetHysteresisOnThetaDiffHandler - In the implementation block
@property (assign,nonatomic) double minimumRequiredMovement;                       //@synthesize minimumRequiredMovement=_minimumRequiredMovement - In the implementation block
@property (nonatomic,readonly) CGVector velocity; 
@property (assign,nonatomic) double hysteresisTimeInterval;                        //@synthesize hysteresisTimeInterval=_hysteresisTimeInterval - In the implementation block
-(void)setDidResetHysteresisOnThetaDiffHandler:(id)arg1 ;
-(void)setSamples:(NSMutableArray *)arg1 ;
-(CGVector)_computedVelocity;
-(NSMutableArray *)samples;
-(void)setHysteresisTimeInterval:(double)arg1 ;
-(void)addSample:(CGPoint)arg1 ;
-(void)setMemoizedVelocity:(CGVector)arg1 ;
-(void)setOffset:(CGVector)arg1 ;
-(CGVector)offset;
-(void)reset;
-(void)setMinimumRequiredMovement:(double)arg1 ;
-(id)didResetHysteresisOnThetaDiffHandler;
-(CGVector)totalTranslation;
-(id)init;
-(double)hysteresisTimeInterval;
-(BOOL)hasVelocity;
-(void)setHasMemoizedVelocity:(BOOL)arg1 ;
-(void)setResetHysteresisOnSampleThetaDiff:(double)arg1 ;
-(CGVector)memoizedVelocity;
-(double)minimumRequiredMovement;
-(double)resetHysteresisOnSampleThetaDiff;
-(long long)_sampleCount;
-(BOOL)hasMemoizedVelocity;
-(CGVector)velocity;
-(void)setTotalTranslation:(CGVector)arg1 ;
@end

