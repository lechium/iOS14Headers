/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DUIClientDestination.h>
#import <libobjc.A.dylib/_DUIClientSessionDestination.h>
#import <UIKitCore/_UIDruidDestinationConnection.h>

@protocol _UIDruidDestinationConnection <NSObject>
@property (nonatomic,readonly) unsigned sessionIdentifier; 
@property (nonatomic,copy) id connectionBlock; 
@property (nonatomic,copy) id dragPreviewProviderBlock; 
@property (nonatomic,copy) id itemsAddedBlock; 
@property (nonatomic,copy) id dropPerformBlock; 
@property (nonatomic,copy) id handOffDroppedItemsBlock; 
@property (nonatomic,copy) id dragEndBlock; 
@required
-(unsigned)sessionIdentifier;
-(id)dragEndBlock;
-(id)connectionBlock;
-(id)dragPreviewProviderBlock;
-(id)itemsAddedBlock;
-(id)dropPerformBlock;
-(id)handOffDroppedItemsBlock;
-(id)init;
-(void)takePotentialDrop:(id)arg1;
-(void)dirtyItems:(id)arg1;
-(void)requestVisibleItems:(/*^block*/id)arg1;
-(void)requestDropWithOperation:(unsigned long long)arg1;
-(void)enableKeyboardIfNeeded;
-(void)setDragEndBlock:(/*^block*/id)arg1;
-(void)setDragPreviewProviderBlock:(/*^block*/id)arg1;
-(void)setConnectionBlock:(/*^block*/id)arg1;
-(void)setItemsAddedBlock:(/*^block*/id)arg1;
-(id)initWithSessionIdentifier:(unsigned)arg1 systemPolicy:(BOOL)arg2;
-(void)setDropPerformBlock:(/*^block*/id)arg1;
-(void)setHandOffDroppedItemsBlock:(/*^block*/id)arg1;
-(void)sawDragEndEvent;

@end


@protocol _DUIServerSessionDestination;
@class NSXPCConnection, NSString;

@interface _UIDruidDestinationConnection : NSObject <_DUIClientDestination, _DUIClientSessionDestination, _UIDruidDestinationConnection> {

	NSXPCConnection* _connection;
	id<_DUIServerSessionDestination> _serverSession;
	unsigned _sessionIdentifier;
	/*^block*/id _connectionBlock;
	/*^block*/id _dragEndBlock;
	/*^block*/id _dropPerformBlock;
	/*^block*/id _handOffDroppedItemsBlock;
	/*^block*/id _dragPreviewProviderBlock;
	/*^block*/id _itemsAddedBlock;
	long long _state;

}

@property (assign,nonatomic) long long state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,copy) id connectionBlock;                          //@synthesize connectionBlock=_connectionBlock - In the implementation block
@property (nonatomic,copy) id dragPreviewProviderBlock;                 //@synthesize dragPreviewProviderBlock=_dragPreviewProviderBlock - In the implementation block
@property (nonatomic,copy) id itemsAddedBlock;                          //@synthesize itemsAddedBlock=_itemsAddedBlock - In the implementation block
@property (nonatomic,copy) id dropPerformBlock;                         //@synthesize dropPerformBlock=_dropPerformBlock - In the implementation block
@property (nonatomic,copy) id handOffDroppedItemsBlock;                 //@synthesize handOffDroppedItemsBlock=_handOffDroppedItemsBlock - In the implementation block
@property (nonatomic,copy) id dragEndBlock;                             //@synthesize dragEndBlock=_dragEndBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)sessionIdentifier;
-(oneway void)performDropWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 visibleDroppedItems:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)dragEndBlock;
-(id)connectionBlock;
-(id)dragPreviewProviderBlock;
-(id)itemsAddedBlock;
-(id)dropPerformBlock;
-(id)handOffDroppedItemsBlock;
-(oneway void)dragEnded;
-(void)setState:(long long)arg1 ;
-(void)takePotentialDrop:(id)arg1 ;
-(void)dirtyItems:(id)arg1 ;
-(void)requestVisibleItems:(/*^block*/id)arg1 ;
-(oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestDropWithOperation:(unsigned long long)arg1 ;
-(void)enableKeyboardIfNeeded;
-(oneway void)addedItemCollection:(id)arg1 ;
-(oneway void)handOffDroppedItems:(id)arg1 withFence:(id)arg2 ;
-(void)setDragEndBlock:(id)arg1 ;
-(long long)state;
-(void)setDragPreviewProviderBlock:(id)arg1 ;
-(void)setConnectionBlock:(id)arg1 ;
-(void)setItemsAddedBlock:(id)arg1 ;
-(id)initWithSessionIdentifier:(unsigned)arg1 systemPolicy:(BOOL)arg2 ;
-(void)setDropPerformBlock:(id)arg1 ;
-(void)setHandOffDroppedItemsBlock:(id)arg1 ;
-(void)sawDragEndEvent;
@end
