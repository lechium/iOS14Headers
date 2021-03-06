/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKSetupAssistantStep <NSObject>
@required
+(BOOL)setupAssistantNeedsToRun;
+(BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;
+(BOOL)bridgeSetupAssistantNeedsToRunWithContext:(id)arg1 returningRequirements:(unsigned long long*)arg2;
+(BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long*)arg1;
-(void)preflightWithCompletion:(/*^block*/id)arg1;

@end

