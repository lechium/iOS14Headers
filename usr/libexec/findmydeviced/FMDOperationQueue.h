//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperationQueue, NSString;
@protocol Action;

@interface FMDOperationQueue : NSObject
{
    _Bool _isPaused;	// 8 = 0x8
    NSMutableArray *_requests;	// 16 = 0x10
    id <Action> _headAction;	// 24 = 0x18
    NSOperationQueue *_requestsOperationQueue;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    unsigned long long _queueCount;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010008f5c4
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) unsigned long long queueCount; // @synthesize queueCount=_queueCount;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSOperationQueue *requestsOperationQueue; // @synthesize requestsOperationQueue=_requestsOperationQueue;
@property(retain, nonatomic) id <Action> headAction; // @synthesize headAction=_headAction;
@property(retain) NSMutableArray *requests; // @synthesize requests=_requests;
- (id)description;	// IMP=0x000000010008f498
- (_Bool)replacedExsitingAction:(id)arg1;	// IMP=0x000000010008f254
- (_Bool)shouldAddAction:(id)arg1;	// IMP=0x000000010008f0fc
- (id)wrapAction:(id)arg1;	// IMP=0x000000010008ee54
- (void)processRequests;	// IMP=0x000000010008ea20
- (_Bool)cancelRequest:(id)arg1;	// IMP=0x000000010008e67c
- (_Bool)addRequest:(id)arg1;	// IMP=0x000000010008e338
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000010008e1f8

@end

