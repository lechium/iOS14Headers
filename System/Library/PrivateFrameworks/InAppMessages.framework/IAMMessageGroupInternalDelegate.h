/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IAMMessageGroupInternalDelegate <NSObject>
@required
-(void)messageGroup:(id)arg1 didReportModalMessageWasPresentedWithIdentifier:(id)arg2;
-(void)messageGroup:(id)arg1 didReportModalMessagePresentationFailedWithIdentifier:(id)arg2;
-(void)messageGroup:(id)arg1 didReportModalMessageWithIdentifier:(id)arg2 actionWasPerformedWithIdentifier:(id)arg3;
-(void)messageGroup:(id)arg1 didReportModalMessageWasDismissedWithIdentifier:(id)arg2;

@end
