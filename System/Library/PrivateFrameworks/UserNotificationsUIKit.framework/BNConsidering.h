/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BNConsidering <NSObject>
@property (assign,nonatomic,__weak) id<BNConsideringDelegate> delegate; 
@optional
-(void)setDelegate:(id)arg1;
-(id<BNConsideringDelegate>)delegate;

@required
-(long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2;
-(long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3;

@end

