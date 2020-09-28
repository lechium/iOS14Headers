/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIOverlayTransitionState : NSObject <NSCopying> {

	BOOL _interactive;
	unsigned long long _type;
	double _progress;
	double _presentationProgress;
	double _clampedPresentationProgress;
	double _nonZeroPresentationProgress;
	double _snappedPresentationProgress;

}

@property (nonatomic,readonly) unsigned long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;              //@synthesize interactive=_interactive - In the implementation block
@property (nonatomic,readonly) double presentationProgress;                        //@synthesize presentationProgress=_presentationProgress - In the implementation block
@property (nonatomic,readonly) double clampedPresentationProgress;                 //@synthesize clampedPresentationProgress=_clampedPresentationProgress - In the implementation block
@property (nonatomic,readonly) double nonZeroPresentationProgress;                 //@synthesize nonZeroPresentationProgress=_nonZeroPresentationProgress - In the implementation block
@property (nonatomic,readonly) double snappedPresentationProgress;                 //@synthesize snappedPresentationProgress=_snappedPresentationProgress - In the implementation block
+(id)fullyDismissedState;
+(id)fullyPresentedState;
+(BOOL)isSignificantStatusBarTransitionFrom:(id)arg1 to:(id)arg2 ;
+(BOOL)isSignificantTransitionFrom:(id)arg1 to:(id)arg2 ;
+(id)stateWithType:(unsigned long long)arg1 interactive:(BOOL)arg2 progress:(double)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isInteractive;
-(double)clampedPresentationProgress;
-(double)presentationProgress;
-(double)nonZeroPresentationProgress;
-(unsigned long long)type;
-(id)_initWithType:(unsigned long long)arg1 interactive:(BOOL)arg2 progress:(double)arg3 ;
-(double)snappedPresentationProgress;
-(double)progress;
-(double)snappedStatusBarPresentationProgress;
@end
