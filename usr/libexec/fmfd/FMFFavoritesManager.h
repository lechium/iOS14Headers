//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface FMFFavoritesManager : NSObject
{
    NSArray *_favoritesData;	// 8 = 0x8
    NSArray *_favoriteHandles;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_favoritesHandlesUpdateQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100051a18
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *favoritesHandlesUpdateQueue; // @synthesize favoritesHandlesUpdateQueue=_favoritesHandlesUpdateQueue;
@property(retain, nonatomic) NSArray *favoriteHandles; // @synthesize favoriteHandles=_favoriteHandles;
@property(retain, nonatomic) NSArray *favoritesData; // @synthesize favoritesData=_favoritesData;
- (id)handles:(id)arg1 minusHandle:(id)arg2;	// IMP=0x0000000100051800
- (id)favoritesDataFromHandles:(id)arg1;	// IMP=0x0000000100051610
- (id)favoritesHandlesInHandles:(id)arg1;	// IMP=0x00000001000514f8
@property(readonly, nonatomic) NSArray *favorites;
- (void)updateWithCachedHandles:(id)arg1;	// IMP=0x0000000100051118
- (void)updateHandlesWithFavorites:(id)arg1;	// IMP=0x0000000100050c94
- (void)updateHandles:(id)arg1 withFavoriteArray:(id)arg2;	// IMP=0x0000000100050a8c
- (void)removeFavorite:(id)arg1;	// IMP=0x00000001000506d4
- (void)addFavorite:(id)arg1;	// IMP=0x00000001000503d4
- (void)reset;	// IMP=0x0000000100050314
- (id)init;	// IMP=0x000000010005022c

@end

