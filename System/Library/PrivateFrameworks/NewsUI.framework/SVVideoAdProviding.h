/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoAdProviding <SVVideoProviding,SVVideoSkipThreshold>
@property (nonatomic,readonly) unsigned long long skipThreshold; 
@property (nonatomic,readonly) BOOL hasAction; 
@required
-(void)skipped;
-(BOOL)hasAction;
-(unsigned long long)skipThreshold;
-(void)presentAction;
-(void)presentPrivacyStatement;

@end

