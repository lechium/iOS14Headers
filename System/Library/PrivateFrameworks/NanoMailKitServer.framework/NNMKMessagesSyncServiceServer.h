/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceServerDelegate;
@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint {

	id<NNMKMessagesSyncServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessagesSyncServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(id)sendCoalescedBatchedFetchResult:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)updateMessagesStatus:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(id)sendBatchedFetchResult:(id)arg1 ;
-(id)updateMailboxSelection:(id)arg1 ;
-(id)sendInitialMessagesSync:(id)arg1 ;
-(id)sendMoreMessages:(id)arg1 ;
-(id)deleteMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
-(void)spaceBecameAvailable;
-(void)setDelegate:(id<NNMKMessagesSyncServiceServerDelegate>)arg1 ;
-(id)sendBatchedInitialMessagesSync:(id)arg1 ;
-(id<NNMKMessagesSyncServiceServerDelegate>)delegate;
-(id)sendMoreMessagesForConversation:(id)arg1 ;
-(void)connectivityChanged;
-(id)addMessages:(id)arg1 notificationPriority:(BOOL)arg2 ;
@end

