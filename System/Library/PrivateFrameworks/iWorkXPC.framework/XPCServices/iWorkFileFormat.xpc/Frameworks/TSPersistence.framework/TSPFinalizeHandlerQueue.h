/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:43 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TSPersistence/TSPersistence-Structs.h>
@class NSObject, TSPCancellationState;

@interface TSPFinalizeHandlerQueue : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	long long _rootObjectIdentifier;
	TSPCancellationState* _cancellationState;
	vector<TSP::FinalizeHandlerItem *, std::__1::allocator<TSP::FinalizeHandlerItem *> >* _order;
	unordered_map<const long long, TSP::FinalizeHandlerItem, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::FinalizeHandlerItem> > >* _map;
	FinalizeHandlerItem* _currentItem;

}
-(void)reset;
-(id)init;
-(id)initWithRootObjectIdentifier:(long long)arg1 cancellationState:(id)arg2 ;
-(BOOL)runFinalizeHandlers;
-(id)initWithRootObjectIdentifier:(long long)arg1 ;
-(long long)currentObjectIdentifier;
-(void)addFinalizeHandlers:(vector<void ()(), std::__1::allocator<void ()()> >*)arg1 strongReferencesOrNull:(unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >*)arg2 forIdentifier:(long long)arg3 ;
-(void)visitItemForCycleDetection:(FinalizeHandlerItem*)arg1 ;
-(void)runFinalizeHandlerForItem:(FinalizeHandlerItem*)arg1 ;
@end
