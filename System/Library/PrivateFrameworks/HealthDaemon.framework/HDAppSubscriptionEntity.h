/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionEntity : HDHealthEntity
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)databaseTable;
+(long long)protectionClass;
+(id)subscriptionForBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)addSubscriptionWithBundleID:(id)arg1 dataCode:(long long)arg2 updateFrequency:(unsigned long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForBundleIdentifier:(id)arg1 ;
+(id)_subscriptionsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)tableAliases;
+(BOOL)setLaunchTimeHysteresis:(id)arg1 forBundleID:(id)arg2 dataCode:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForDataCode:(long long)arg1 ;
+(id)allSubscriptionsForType:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)setLastAnchor:(id)arg1 lastAckTime:(id)arg2 forBundleID:(id)arg3 dataCode:(long long)arg4 profile:(id)arg5 error:(id*)arg6 ;
+(id)_predicateForBundleID:(id)arg1 dataCode:(long long)arg2 ;
+(BOOL)removeSubscriptionsWithBundleID:(id)arg1 dataCode:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)allSubscriptionsForBundleID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
@end
