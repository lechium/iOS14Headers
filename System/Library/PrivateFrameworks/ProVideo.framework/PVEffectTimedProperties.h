/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PVEffectTimedProperties
@required
-(void)removeAllTimedPropertiesDelegates;
-(void)addTimedPropertiesDelegate:(id)arg1 userContext:(id)arg2;
-(BOOL)hasTimedPropertiesDelegates;
-(BOOL)applyTimedPropertiesForTime:(SCD_Struct_PV22)arg1;
-(void)removeTimedPropertiesDelegate:(id)arg1;
-(id)timedPropertiesDelegates;
-(BOOL)hasTimedPropertiesDelegate:(id)arg1;
-(id)userContextForTimedPropertiesDelegate:(id)arg1;

@end

