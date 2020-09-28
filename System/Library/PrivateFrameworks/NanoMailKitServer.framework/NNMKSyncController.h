/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NNMKDeviceRegistryHolder;
@interface NNMKSyncController : NSObject {

	id<NNMKDeviceRegistryHolder> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKDeviceRegistryHolder> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)filterMessages:(id)arg1 receivedBeforeDate:(id)arg2 ;
-(id)mailboxForMessageWithId:(id)arg1 ;
-(BOOL)shouldAddsDeletesMessagesByStatusUpdatesForMailbox:(id)arg1 ;
-(id)groupMessagesByMailboxId:(id)arg1 ;
-(id)removeInvalidMailboxesFromMailboxSelection:(id)arg1 ;
-(BOOL)isMessage:(id)arg1 fromMailbox:(id)arg2 ;
-(id)mailboxWithId:(id)arg1 ;
-(BOOL)isValidMessageStatus:(unsigned long long)arg1 forMailbox:(id)arg2 ;
-(id)messageIdFromWatchMessageId:(id)arg1 ;
-(void)setDelegate:(id<NNMKDeviceRegistryHolder>)arg1 ;
-(BOOL)canSyncMailbox:(id)arg1 ;
-(BOOL)_validateMessage:(id)arg1 ;
-(id)filterMessages:(id)arg1 byAlreadySynced:(BOOL)arg2 byMailbox:(id)arg3 ;
-(id<NNMKDeviceRegistryHolder>)delegate;
-(id)deviceRegistry;
-(BOOL)doesMessageBelongToSyncedMailboxes:(id)arg1 ;
-(id)mailboxesToSync;
-(void)groupMessagesByMailbox:(id)arg1 mailboxes:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)watchMessageIdFromMessageId:(id)arg1 ;
-(id)watchAttachmentContentIdFromContentId:(id)arg1 ;
-(BOOL)canSyncMessage:(id)arg1 forMailbox:(id)arg2 ;
@end
