/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation;


@protocol MNTimeballLocationProvider <NSObject>
@property (assign,nonatomic) double desiredAccuracy; 
@property (nonatomic,copy,readonly) CLLocation * location; 
@property (assign,nonatomic,__weak) id<CLLocationManagerDelegate> delegate; 
@required
-(void)stopUpdatingLocation;
-(void)setDesiredAccuracy:(double)arg1;
-(double)desiredAccuracy;
-(void)startUpdatingLocation;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
-(CLLocation *)location;
-(void)setDelegate:(id)arg1;
-(id)initWithEffectiveBundle:(id)arg1 delegate:(id)arg2 onQueue:(id)arg3;
-(id<CLLocationManagerDelegate>)delegate;

@end

