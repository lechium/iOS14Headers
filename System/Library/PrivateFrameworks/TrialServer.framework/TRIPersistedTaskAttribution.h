/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPersistedNetworkBehavior;

@interface TRIPersistedTaskAttribution : TRIPBMessage

@property (nonatomic,copy) NSString * applicationBundleId; 
@property (assign,nonatomic) BOOL hasApplicationBundleId; 
@property (assign,nonatomic) int cloudKitContainer; 
@property (assign,nonatomic) BOOL hasCloudKitContainer; 
@property (nonatomic,copy) NSString * teamId; 
@property (assign,nonatomic) BOOL hasTeamId; 
@property (nonatomic,retain) TRIPersistedNetworkBehavior * networkBehavior; 
@property (assign,nonatomic) BOOL hasNetworkBehavior; 
+(id)descriptor;
@end

