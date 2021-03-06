/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol WFSiriUserInterface <WFUserInterfaceHost>
@property (nonatomic,copy,readonly) NSArray * airPlayRouteIDs; 
@property (nonatomic,readonly) long long executionContext; 
@required
-(long long)executionContext;
-(void)openInteractionInApp:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)speakText:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)executeIntent:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)configureIntent:(id)arg1;
-(BOOL)isRunningInSiri;
-(NSArray *)airPlayRouteIDs;

@end

