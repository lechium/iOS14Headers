/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DUIClientSource.h>
#import <libobjc.A.dylib/_DUIClientSessionSource.h>
#import <UIKitCore/_UIDruidSourceConnection.h>

@protocol _UIDruidSourceConnection <NSObject>
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,copy) id dragPreviewProviderBlock; 
@property (nonatomic,copy) id canHandOffCancelledItemsBlock; 
@property (nonatomic,copy) id handOffCancelledItemsBlock; 
@property (nonatomic,copy) id dragCompletionBlock; 
@property (nonatomic,copy) id dataTransferFinishedBlock; 
@required
-(void)takeInsideAppSourceOperationMask:(unsigned long long)arg1 outsideAppSourceOperationMask:(unsigned long long)arg2 prefersFullSizePreview:(BOOL)arg3;
-(void)cancelDrag;
-(id)dragPreviewProviderBlock;
-(id)canHandOffCancelledItemsBlock;
-(id)dragCompletionBlock;
-(id)handOffCancelledItemsBlock;
-(id)dataTransferFinishedBlock;
-(BOOL)isCancelled;
-(void)dirtyItems:(id)arg1;
-(void)beginDragWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setDragPreviewProviderBlock:(/*^block*/id)arg1;
-(void)setCanHandOffCancelledItemsBlock:(/*^block*/id)arg1;
-(void)setHandOffCancelledItemsBlock:(/*^block*/id)arg1;
-(void)setDragCompletionBlock:(/*^block*/id)arg1;
-(void)setDataTransferFinishedBlock:(/*^block*/id)arg1;
-(id)addItems:(id)arg1 withOldItemCollection:(id)arg2;
-(void)dragDidExitApp;

@end


@protocol OS_dispatch_source, _DUIServerSessionSource;
@class NSXPCConnection, NSObject, NSString;

@interface _UIDruidSourceConnection : NSObject <_DUIClientSource, _DUIClientSessionSource, _UIDruidSourceConnection> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _connectionWatchdogTimer;
	id<_DUIServerSessionSource> _serverSession;
	BOOL _cancelled;
	/*^block*/id _dragPreviewProviderBlock;
	/*^block*/id _canHandOffCancelledItemsBlock;
	/*^block*/id _handOffCancelledItemsBlock;
	/*^block*/id _dragCompletionBlock;
	/*^block*/id _dataTransferFinishedBlock;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,copy) id dragPreviewProviderBlock;                        //@synthesize dragPreviewProviderBlock=_dragPreviewProviderBlock - In the implementation block
@property (nonatomic,copy) id canHandOffCancelledItemsBlock;                   //@synthesize canHandOffCancelledItemsBlock=_canHandOffCancelledItemsBlock - In the implementation block
@property (nonatomic,copy) id handOffCancelledItemsBlock;                      //@synthesize handOffCancelledItemsBlock=_handOffCancelledItemsBlock - In the implementation block
@property (nonatomic,copy) id dragCompletionBlock;                             //@synthesize dragCompletionBlock=_dragCompletionBlock - In the implementation block
@property (nonatomic,copy) id dataTransferFinishedBlock;                       //@synthesize dataTransferFinishedBlock=_dataTransferFinishedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)takeInsideAppSourceOperationMask:(unsigned long long)arg1 outsideAppSourceOperationMask:(unsigned long long)arg2 prefersFullSizePreview:(BOOL)arg3 ;
-(void)cancelDrag;
-(void)_internalDragFailed;
-(id)dragPreviewProviderBlock;
-(id)canHandOffCancelledItemsBlock;
-(id)dragCompletionBlock;
-(id)handOffCancelledItemsBlock;
-(id)dataTransferFinishedBlock;
-(id)init;
-(BOOL)isCancelled;
-(oneway void)dragFailed;
-(void)dirtyItems:(id)arg1 ;
-(oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2 ;
-(oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)checkCanHandOffCancelledItems:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(oneway void)dragEndedWithOperation:(unsigned long long)arg1 ;
-(oneway void)dataTransferSessionFinished;
-(void)beginDragWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDragPreviewProviderBlock:(id)arg1 ;
-(void)setCanHandOffCancelledItemsBlock:(id)arg1 ;
-(void)setHandOffCancelledItemsBlock:(id)arg1 ;
-(void)setDragCompletionBlock:(id)arg1 ;
-(void)setDataTransferFinishedBlock:(id)arg1 ;
-(id)addItems:(id)arg1 withOldItemCollection:(id)arg2 ;
-(void)dragDidExitApp;
@end

