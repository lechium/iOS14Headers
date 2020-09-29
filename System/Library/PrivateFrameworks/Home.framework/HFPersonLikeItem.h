/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:26 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class HMPerson, HMPersonManager, HMHome;


@protocol HFPersonLikeItem <NSObject>
@property (nonatomic,copy,readonly) HMPerson * person; 
@property (nonatomic,readonly) HMPersonManager * personManager; 
@property (nonatomic,readonly) HMHome * home; 
@required
-(HMPerson *)person;
-(HMPersonManager *)personManager;
-(HMHome *)home;

@end
