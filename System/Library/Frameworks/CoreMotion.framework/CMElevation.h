/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMAltimeterInternal;

@interface CMElevation : NSObject {

	CMAltimeterInternal* _internal;

}

@property (nonatomic,readonly) CMAltimeterInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isElevationAvailable;
-(void)dealloc;
-(id)init;
-(void)startElevationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopElevationUpdates;
-(CMAltimeterInternal *)_internal;
@end
