/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:17 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol SGXPCActivityManagerProtocol
@required
-(BOOL)setState:(id)arg1 state:(long long)arg2;
-(long long)getState:(id)arg1;
-(BOOL)shouldDefer:(id)arg1;
-(id)activityForActivityId:(int)arg1;
-(void)registerActivitiesWithSystem;
-(void)registerForActivity:(int)arg1 handler:(/*^block*/id)arg2;
-(void)setCriteria:(id)arg1 criteria:(id)arg2 forActivity:(int)arg3;
-(id)copyCriteria:(id)arg1;

@end
