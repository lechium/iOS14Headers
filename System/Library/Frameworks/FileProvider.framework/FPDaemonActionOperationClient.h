/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPDaemonActionOperationClient <FPOperationClient>
@required
-(void)remoteOperationCreatedRoot:(id)arg1 resultingItem:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remoteOperationCompletedRoot:(id)arg1 resultingItem:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remoteOperationProgressesAreReady;
-(void)remoteOperationFinishedSendingPastUpdates;

@end
