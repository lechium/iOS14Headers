/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SHSessionDelegate <NSObject>
@optional
-(BOOL)session:(id)arg1 shouldAttemptToMatch:(id)arg2;
-(void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 didFindMatch:(id)arg2;
-(void)finishedSession:(id)arg1;

@end
