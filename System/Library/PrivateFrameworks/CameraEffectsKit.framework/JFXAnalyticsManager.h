/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface JFXAnalyticsManager : NSObject
+(id)sharedInstance;
+(id)allIncrementScalarEvents;
+(id)bundleForAnalytics;
-(id)init;
-(void)trackEventWithName:(id)arg1 ;
-(BOOL)checkIfEventExistsWithName:(id)arg1 ;
-(id)fullKeyFromEvent:(id)arg1 ;
-(void)trackKey:(id)arg1 withCount:(unsigned long long)arg2 ;
-(void)trackKey:(id)arg1 withPayload:(id)arg2 ;
-(id)dictionaryWithEventName:(id)arg1 value:(double)arg2 ;
-(BOOL)isIncrementScalar:(id)arg1 ;
@end

