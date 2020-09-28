/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSResetRestoreStatusProviding <NSObject>
@property (getter=isRestoring,nonatomic,readonly) BOOL restoring; 
@property (nonatomic,readonly) long long restoreState; 
@property (getter=isResetting,nonatomic,readonly) BOOL resetting; 
@property (nonatomic,readonly) long long resetState; 
@required
-(long long)resetState;
-(BOOL)isRestoring;
-(long long)restoreState;
-(BOOL)isResetting;

@end
